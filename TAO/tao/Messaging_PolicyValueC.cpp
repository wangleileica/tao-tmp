// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_codegen.cpp:301


#include "Messaging_PolicyValueC.h"
#include "Any_Dual_Impl_T.h"
#include "Typecode.h"
#include "ORB_Core.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "Messaging_PolicyValueC.i"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_arg_traits.cpp:59

// Arg traits specializations.
namespace TAO
{
};

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_Messaging_PolicyValue[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  38,
  ACE_NTOHL (0x49444c3a),
  ACE_NTOHL (0x6f6d672e),
  ACE_NTOHL (0x6f72672f),
  ACE_NTOHL (0x4d657373),
  ACE_NTOHL (0x6167696e),
  ACE_NTOHL (0x672f506f),
  ACE_NTOHL (0x6c696379),
  ACE_NTOHL (0x56616c75),
  ACE_NTOHL (0x653a312e),
  ACE_NTOHL (0x30000000),  // repository ID = IDL:omg.org/Messaging/PolicyValue:1.0
    12,
  ACE_NTOHL (0x506f6c69),
  ACE_NTOHL (0x63795661),
  ACE_NTOHL (0x6c756500),  // name = PolicyValue
  2, // member count
    6,
  ACE_NTOHL (0x70747970),
  ACE_NTOHL (0x65000000),  // name = ptype
    CORBA::tk_alias, // typecode kind for typedefs
  64, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    33,
    ACE_NTOHL (0x49444c3a),
    ACE_NTOHL (0x6f6d672e),
    ACE_NTOHL (0x6f72672f),
    ACE_NTOHL (0x434f5242),
    ACE_NTOHL (0x412f506f),
    ACE_NTOHL (0x6c696379),
    ACE_NTOHL (0x54797065),
    ACE_NTOHL (0x3a312e30),
    ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CORBA/PolicyType:1.0
        11,
    ACE_NTOHL (0x506f6c69),
    ACE_NTOHL (0x63795479),
    ACE_NTOHL (0x70650000),  // name = PolicyType
        CORBA::tk_ulong,


  7,
  ACE_NTOHL (0x7076616c),
  ACE_NTOHL (0x75650000),  // name = pvalue
    CORBA::tk_sequence, // typecode kind
  12, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    CORBA::tk_octet,

    0U,

};

static CORBA::TypeCode _tc_TAO_tc_Messaging_PolicyValue (
    CORBA::tk_struct,
    sizeof (_oc_Messaging_PolicyValue),
    (char *) &_oc_Messaging_PolicyValue,
    0,
    sizeof (Messaging::PolicyValue)
  );

namespace Messaging
{
  ::CORBA::TypeCode_ptr _tc_PolicyValue =
    &_tc_TAO_tc_Messaging_PolicyValue;
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure/structure_cs.cpp:66

void
Messaging::PolicyValue::_tao_any_destructor (
    void *_tao_void_pointer
  )
{
  PolicyValue *_tao_tmp_pointer =
    ACE_static_cast (PolicyValue *, _tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/sequence_cs.cpp:66

#if !defined (_MESSAGING_POLICYVALUE__TAO_SEQ_CORBA_OCTET__CS_)
#define _MESSAGING_POLICYVALUE__TAO_SEQ_CORBA_OCTET__CS_

Messaging::PolicyValue::_tao_seq_CORBA_Octet_::_tao_seq_CORBA_Octet_ (void)
{}

Messaging::PolicyValue::_tao_seq_CORBA_Octet_::_tao_seq_CORBA_Octet_ (
    CORBA::ULong max
  )
  : TAO_Unbounded_Sequence<
        CORBA::Octet
      >
    (max)
{}

Messaging::PolicyValue::_tao_seq_CORBA_Octet_::_tao_seq_CORBA_Octet_ (
    CORBA::ULong max,
    CORBA::ULong length,
    CORBA::Octet * buffer,
    CORBA::Boolean release
  )
  : TAO_Unbounded_Sequence<
        CORBA::Octet
      >
    (max, length, buffer, release)
{}

Messaging::PolicyValue::_tao_seq_CORBA_Octet_::_tao_seq_CORBA_Octet_ (
    const _tao_seq_CORBA_Octet_ &seq
  )
  : TAO_Unbounded_Sequence<
        CORBA::Octet
      >
    (seq)
{}

Messaging::PolicyValue::_tao_seq_CORBA_Octet_::~_tao_seq_CORBA_Octet_ (void)
{}

void Messaging::PolicyValue::_tao_seq_CORBA_Octet_::_tao_any_destructor (
    void * _tao_void_pointer
  )
{
  _tao_seq_CORBA_Octet_ * _tao_tmp_pointer =
    ACE_static_cast (_tao_seq_CORBA_Octet_ *, _tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/sequence_cs.cpp:66

#if !defined (_MESSAGING_POLICYVALUESEQ_CS_)
#define _MESSAGING_POLICYVALUESEQ_CS_

Messaging::PolicyValueSeq::PolicyValueSeq (void)
{}

Messaging::PolicyValueSeq::PolicyValueSeq (
    CORBA::ULong max
  )
  : TAO_Unbounded_Sequence<
        Messaging::PolicyValue
      >
    (max)
{}

Messaging::PolicyValueSeq::PolicyValueSeq (
    CORBA::ULong max,
    CORBA::ULong length,
    Messaging::PolicyValue * buffer,
    CORBA::Boolean release
  )
  : TAO_Unbounded_Sequence<
        Messaging::PolicyValue
      >
    (max, length, buffer, release)
{}

Messaging::PolicyValueSeq::PolicyValueSeq (
    const PolicyValueSeq &seq
  )
  : TAO_Unbounded_Sequence<
        Messaging::PolicyValue
      >
    (seq)
{}

Messaging::PolicyValueSeq::~PolicyValueSeq (void)
{}

void Messaging::PolicyValueSeq::_tao_any_destructor (
    void * _tao_void_pointer
  )
{
  PolicyValueSeq * _tao_tmp_pointer =
    ACE_static_cast (PolicyValueSeq *, _tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_Messaging_PolicyValueSeq[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  41,
  ACE_NTOHL (0x49444c3a),
  ACE_NTOHL (0x6f6d672e),
  ACE_NTOHL (0x6f72672f),
  ACE_NTOHL (0x4d657373),
  ACE_NTOHL (0x6167696e),
  ACE_NTOHL (0x672f506f),
  ACE_NTOHL (0x6c696379),
  ACE_NTOHL (0x56616c75),
  ACE_NTOHL (0x65536571),
  ACE_NTOHL (0x3a312e30),
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/Messaging/PolicyValueSeq:1.0
    15,
  ACE_NTOHL (0x506f6c69),
  ACE_NTOHL (0x63795661),
  ACE_NTOHL (0x6c756553),
  ACE_NTOHL (0x65710000),  // name = PolicyValueSeq
    CORBA::tk_sequence, // typecode kind
  200, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    CORBA::tk_struct, // typecode kind
    184, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      38,
      ACE_NTOHL (0x49444c3a),
      ACE_NTOHL (0x6f6d672e),
      ACE_NTOHL (0x6f72672f),
      ACE_NTOHL (0x4d657373),
      ACE_NTOHL (0x6167696e),
      ACE_NTOHL (0x672f506f),
      ACE_NTOHL (0x6c696379),
      ACE_NTOHL (0x56616c75),
      ACE_NTOHL (0x653a312e),
      ACE_NTOHL (0x30000000),  // repository ID = IDL:omg.org/Messaging/PolicyValue:1.0
            12,
      ACE_NTOHL (0x506f6c69),
      ACE_NTOHL (0x63795661),
      ACE_NTOHL (0x6c756500),  // name = PolicyValue
      2, // member count
            6,
      ACE_NTOHL (0x70747970),
      ACE_NTOHL (0x65000000),  // name = ptype
            CORBA::tk_alias, // typecode kind for typedefs
      64, // encapsulation length
        TAO_ENCAP_BYTE_ORDER, // byte order
        33,
        ACE_NTOHL (0x49444c3a),
        ACE_NTOHL (0x6f6d672e),
        ACE_NTOHL (0x6f72672f),
        ACE_NTOHL (0x434f5242),
        ACE_NTOHL (0x412f506f),
        ACE_NTOHL (0x6c696379),
        ACE_NTOHL (0x54797065),
        ACE_NTOHL (0x3a312e30),
        ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CORBA/PolicyType:1.0
                11,
        ACE_NTOHL (0x506f6c69),
        ACE_NTOHL (0x63795479),
        ACE_NTOHL (0x70650000),  // name = PolicyType
                CORBA::tk_ulong,


      7,
      ACE_NTOHL (0x7076616c),
      ACE_NTOHL (0x75650000),  // name = pvalue
            CORBA::tk_sequence, // typecode kind
      12, // encapsulation length
        TAO_ENCAP_BYTE_ORDER, // byte order
        CORBA::tk_octet,

        0U,


    0U,

};

static CORBA::TypeCode _tc_TAO_tc_Messaging_PolicyValueSeq (
    CORBA::tk_alias,
    sizeof (_oc_Messaging_PolicyValueSeq),
    (char *) &_oc_Messaging_PolicyValueSeq,
    0,
    sizeof (Messaging::PolicyValueSeq)
  );

namespace Messaging
{
  ::CORBA::TypeCode_ptr _tc_PolicyValueSeq =
    &_tc_TAO_tc_Messaging_PolicyValueSeq;
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_structure/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const Messaging::PolicyValue &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<Messaging::PolicyValue>::insert_copy (
      _tao_any,
      Messaging::PolicyValue::_tao_any_destructor,
      Messaging::_tc_PolicyValue,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    Messaging::PolicyValue *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<Messaging::PolicyValue>::insert (
      _tao_any,
      Messaging::PolicyValue::_tao_any_destructor,
      Messaging::_tc_PolicyValue,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::PolicyValue *&_tao_elem
  )
{
  return _tao_any >>= ACE_const_cast (
      const Messaging::PolicyValue *&,
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const Messaging::PolicyValue *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<Messaging::PolicyValue>::extract (
        _tao_any,
        Messaging::PolicyValue::_tao_any_destructor,
        Messaging::_tc_PolicyValue,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/any_op_cs.cpp:54

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const Messaging::PolicyValueSeq &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<Messaging::PolicyValueSeq>::insert_copy (
      _tao_any,
      Messaging::PolicyValueSeq::_tao_any_destructor,
      Messaging::_tc_PolicyValueSeq,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    Messaging::PolicyValueSeq *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<Messaging::PolicyValueSeq>::insert (
      _tao_any,
      Messaging::PolicyValueSeq::_tao_any_destructor,
      Messaging::_tc_PolicyValueSeq,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    Messaging::PolicyValueSeq *&_tao_elem
  )
{
  return _tao_any >>= ACE_const_cast (
      const Messaging::PolicyValueSeq *&,
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const Messaging::PolicyValueSeq *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<Messaging::PolicyValueSeq>::extract (
        _tao_any,
        Messaging::PolicyValueSeq::_tao_any_destructor,
        Messaging::_tc_PolicyValueSeq,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/cdr_op_cs.cpp:95

#if !defined _TAO_CDR_OP_Messaging_PolicyValue__tao_seq_CORBA_Octet__CPP_
#define _TAO_CDR_OP_Messaging_PolicyValue__tao_seq_CORBA_Octet__CPP_

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Messaging::PolicyValue::_tao_seq_CORBA_Octet_ &_tao_sequence
  )
{
  CORBA::ULong _tao_seq_len = _tao_sequence.length ();

  if (strm << _tao_seq_len)
    {
      // Encode all elements.

#if (TAO_NO_COPY_OCTET_SEQUENCES == 1)
      {
        TAO_Unbounded_Sequence<CORBA::Octet> *oseq =
          ACE_static_cast (TAO_Unbounded_Sequence<CORBA::Octet>*, (Messaging::PolicyValue::_tao_seq_CORBA_Octet_ *)&_tao_sequence);
        if (oseq->mb ())
          return strm.write_octet_array_mb (oseq->mb ());
        else
          return strm.write_octet_array (_tao_sequence.get_buffer (), _tao_sequence.length ());
      }

#else /* TAO_NO_COPY_OCTET_SEQUENCES == 0 */
      return strm.write_octet_array (_tao_sequence.get_buffer (), _tao_sequence.length ());

#endif /* TAO_NO_COPY_OCTET_SEQUENCES == 0 */
    }

  return 0;
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Messaging::PolicyValue::_tao_seq_CORBA_Octet_ &_tao_sequence
  )
{
  CORBA::ULong _tao_seq_len;

  if (strm >> _tao_seq_len)
    {
      // Add a check to the length of the sequence
      // to make sure it does not exceed the length
      // of the stream. (See bug 58.)
      if (_tao_seq_len > strm.length ())
        {
          return 0;
        }

      // Set the length of the sequence.
      _tao_sequence.length (_tao_seq_len);

      // If length is 0 we return true.
      if (0 >= _tao_seq_len)
        {
          return 1;
        }

      // Retrieve all the elements.

#if (TAO_NO_COPY_OCTET_SEQUENCES == 1)
      if (ACE_BIT_DISABLED (strm.start ()->flags (),
      ACE_Message_Block::DONT_DELETE))
      {
        TAO_ORB_Core* orb_core = strm.orb_core ();
        if (orb_core != 0 &&
        strm.orb_core ()->resource_factory ()->
        input_cdr_allocator_type_locked () == 1)
        {
          TAO_Unbounded_Sequence<CORBA::Octet> *oseq =
            ACE_static_cast(TAO_Unbounded_Sequence<CORBA::Octet>*, &_tao_sequence);
          oseq->replace (_tao_seq_len, strm.start ());
          oseq->mb ()->wr_ptr (oseq->mb()->rd_ptr () + _tao_seq_len);
          strm.skip_bytes (_tao_seq_len);
          return 1;
        }
      }
      return strm.read_octet_array (_tao_sequence.get_buffer (), _tao_seq_len);
#else /* TAO_NO_COPY_OCTET_SEQUENCES == 0 */
      return strm.read_octet_array (_tao_sequence.get_buffer (), _tao_sequence.length ());

#endif /* TAO_NO_COPY_OCTET_SEQUENCES == 0 */

    }

  return 0;
}

#endif /* _TAO_CDR_OP_Messaging_PolicyValue__tao_seq_CORBA_Octet__CPP_ */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_sequence/cdr_op_cs.cpp:95

#if !defined _TAO_CDR_OP_Messaging_PolicyValueSeq_CPP_
#define _TAO_CDR_OP_Messaging_PolicyValueSeq_CPP_

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Messaging::PolicyValueSeq &_tao_sequence
  )
{
  CORBA::ULong _tao_seq_len = _tao_sequence.length ();

  if (strm << _tao_seq_len)
    {
      // Encode all elements.
      CORBA::Boolean _tao_marshal_flag = 1;

      for (CORBA::ULong i = 0; i < _tao_seq_len && _tao_marshal_flag; ++i)
        {
          _tao_marshal_flag = (strm << _tao_sequence[i]);
        }

      return _tao_marshal_flag;
    }

  return 0;
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Messaging::PolicyValueSeq &_tao_sequence
  )
{
  CORBA::ULong _tao_seq_len;

  if (strm >> _tao_seq_len)
    {
      // Add a check to the length of the sequence
      // to make sure it does not exceed the length
      // of the stream. (See bug 58.)
      if (_tao_seq_len > strm.length ())
        {
          return 0;
        }

      // Set the length of the sequence.
      _tao_sequence.length (_tao_seq_len);

      // If length is 0 we return true.
      if (0 >= _tao_seq_len)
        {
          return 1;
        }

      // Retrieve all the elements.
      CORBA::Boolean _tao_marshal_flag = 1;

      for (CORBA::ULong i = 0; i < _tao_seq_len && _tao_marshal_flag; ++i)
        {
          _tao_marshal_flag = (strm >> _tao_sequence[i]);
        }

      return _tao_marshal_flag;

    }

  return 0;
}

#endif /* _TAO_CDR_OP_Messaging_PolicyValueSeq_CPP_ */

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_root/root.cpp:1703

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO::Any_Dual_Impl_T<
        Messaging::PolicyValue::_tao_seq_CORBA_Octet_
      >;

  template class
    TAO_Var_Var_T<
        Messaging::PolicyValue
      >;

  template class
    TAO_Var_Base_T<
        Messaging::PolicyValue
      >;

  template class
    TAO_Out_T<
        Messaging::PolicyValue,
        Messaging::PolicyValue_var
      >;

  template class
    TAO::Any_Dual_Impl_T<
        Messaging::PolicyValue
      >;

  template class
    TAO_VarSeq_Var_T<
        Messaging::PolicyValueSeq,
        Messaging::PolicyValue
      >;

  template class
    TAO_Seq_Var_Base_T<
        Messaging::PolicyValueSeq,
        Messaging::PolicyValue
      >;

  template class
    TAO_Seq_Out_T<
        Messaging::PolicyValueSeq,
        Messaging::PolicyValueSeq_var,
        Messaging::PolicyValue
      >;

#if !defined (_MESSAGING_POLICYVALUESEQ__EXPLICIT_CS_)
#define _MESSAGING_POLICYVALUESEQ__EXPLICIT_CS_

  template class
    TAO_Unbounded_Sequence<
        Messaging::PolicyValue
      >;

#endif /* end #if !defined */

  template class
    TAO::Any_Dual_Impl_T<
        Messaging::PolicyValueSeq
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        Messaging::PolicyValue::_tao_seq_CORBA_Octet_ \
      >

# pragma instantiate \
    TAO_Var_Var_T< \
        Messaging::PolicyValue \
      >

# pragma instantiate \
    TAO_Var_Base_T< \
        Messaging::PolicyValue \
      >

# pragma instantiate \
    TAO_Out_T< \
        Messaging::PolicyValue, \
        Messaging::PolicyValue_var \
      >

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        Messaging::PolicyValue \
      >

# pragma instantiate \
    TAO_VarSeq_Var_T< \
        Messaging::PolicyValueSeq, \
        Messaging::PolicyValue \
      >

# pragma instantiate \
    TAO_Seq_Var_Base_T< \
        Messaging::PolicyValueSeq, \
        Messaging::PolicyValue \
      >

# pragma instantiate \
    TAO_Seq_Out_T< \
        Messaging::PolicyValueSeq, \
        Messaging::PolicyValueSeq_var, \
        Messaging::PolicyValue \
      >

#if !defined (_MESSAGING_POLICYVALUESEQ__EXPLICIT_CS_)
#define _MESSAGING_POLICYVALUESEQ__EXPLICIT_CS_

# pragma instantiate \
    TAO_Unbounded_Sequence< \
        Messaging::PolicyValue \
      >

#endif /* end #if !defined */

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        Messaging::PolicyValueSeq \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */
