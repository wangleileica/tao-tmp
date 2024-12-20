// -*- C++ -*-

//=============================================================================
/**
 *  @file    Any_Insert_Policy_T.h
 *
 *  @author Johnny Willemsen  <jwillemsen@remedy.nl>
 */
//=============================================================================

#ifndef TAO_ANY_INSERT_POLICY_H
#define TAO_ANY_INSERT_POLICY_H

#include /**/ "ace/pre.h"

#include "tao/UB_String_Argument_T.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/Arg_Traits_T.h"
#include "tao/Argument.h"
#include "tao/AnyTypeCode_Adapter.h"

#include "ace/Dynamic_Service.h"
#include "ace/Log_Msg.h"
#include "tao/debug.h"
#include "tao/IFR_Client_Adapter.h"

#include "ace/CDR_Stream.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  template <typename S>
  class Any_Insert_Policy_Stream
  {
  public:

    static inline void any_insert (CORBA::Any* p, S const & x)
      {
#if 1      
        if constexpr (std::is_integral<S>::value)
        {
          if constexpr (std::is_same<S, int>::value)
          {
            //(*p) <<= (ACE_OutputCDR::from_long(x));
            (*p) <<= (static_cast<CORBA::Long>(x));
          }
          else if constexpr (std::is_same<S, unsigned int>::value)
          {
            //(*p) <<= (ACE_OutputCDR::from_ulong(x));
            (*p) <<= (static_cast<CORBA::ULong>(x));
          }
          else if constexpr (std::is_same<S, long>::value)
          {
            //(*p) <<= (ACE_OutputCDR::from_long(x));
            (*p) <<= (static_cast<CORBA::Long>(x));
          }
          else if constexpr (std::is_same<S, unsigned long>::value)
          {
            //(*p) <<= (ACE_OutputCDR::from_ulong(x));
            (*p) <<= (static_cast<CORBA::ULong>(x));
          }
          else if constexpr (std::is_same<S, short unsigned int>::value)
          {
            //(*p) <<= (ACE_OutputCDR::from_ushort(x));
            (*p) <<= (static_cast<CORBA::UShort>(x));
          }
          else if constexpr (std::is_same<S, short int>::value)
          {
            //(*p) <<= (ACE_OutputCDR::from_short(x));
            (*p) <<= (static_cast<CORBA::Short>(x));
          }
          else
          {
            (*p) <<= x;
          }
        }
        else if constexpr (std::is_pointer<S>::value)
        {
            // Handle Messaging::ExceptionHolder* case
            //p->operator<<=(ACE_OutputCDR::from_ulong(reinterpret_cast<unsigned long>(x)));
            (*p) <<= (reinterpret_cast<CORBA::Short>(x));
        }
        else if constexpr (std::is_same<S, double>::value)
        {
            //p->operator<<=(ACE_OutputCDR::from_double(x));
            (*p) <<= (static_cast<CORBA::Double>(x));
        }
        else if constexpr (std::is_same<S, float>::value)
        {
            //p->operator<<=(ACE_OutputCDR::from_double(x));
            (*p) <<= (static_cast<CORBA::Double>(x));
        }   
        else
#endif        
        {
          (*p) <<= x;
        }
      }
  };

  template <typename S>
  class Any_Insert_Policy_AnyTypeCode_Adapter
  {
  public:

    static inline void any_insert (CORBA::Any* p, S const & x)
      {
        TAO_AnyTypeCode_Adapter *adapter =
          ACE_Dynamic_Service<TAO_AnyTypeCode_Adapter>::instance (
              "AnyTypeCode_Adapter");

        if (adapter)
          {
            adapter->insert_into_any (p, x);
          }
        else
          {
            TAOLIB_ERROR ((LM_ERROR,
                        ACE_TEXT ("(%P|%t) %p\n"),
                        ACE_TEXT ("ERROR: unable to find AnyTypeCode Adapter ")));
          }
      }
  };

  template <typename S>
  class Any_Insert_Policy_IFR_Client_Adapter
  {
  public:

    static inline void any_insert (CORBA::Any* p, S const & x)
      {
        TAO_IFR_Client_Adapter *adapter =
          ACE_Dynamic_Service<TAO_IFR_Client_Adapter>::instance (
              "Concrete_IFR_Client_Adapter");

        adapter->interfacedef_any_insert (p, x);
      }
  };

  template <typename S>
  class Any_Insert_Policy_Noop
  {
  public:
    static inline void any_insert (CORBA::Any* , S const &)
      {
      }
  };

  template <typename S>
  class Any_Insert_Policy_CORBA_Object
  {
  public:

    static inline void any_insert (CORBA::Any* , S const &)
      {
        if (TAO_debug_level > 2)
          {
            TAOLIB_DEBUG ((LM_DEBUG,
                        "TAO (%P|%t) - Cannot insert a vanilla CORBA Object"
                        " into an Any for returning the return value.\n"));
          }
      }
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* TAO_ANY_INSERT_POLICY_H */
