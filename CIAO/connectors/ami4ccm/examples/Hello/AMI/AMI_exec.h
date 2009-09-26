// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler v1.7.1 ****
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
// be/be_codegen.cpp:1217

#ifndef CIAO_AMI_EXEC_H_
#define CIAO_AMI_EXEC_H_


#include "AMIEC.h"
#include "AMI_exec_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/LocalObject.h"
#include "ace/Task.h"

namespace CIAO_Hello_AMI_AMI_Impl
{
  class AMI_perform_work : public ACE_Task_Base
  {
    public:
      AMI_perform_work (CORBA::ORB_ptr orb);
      virtual int svc (void);

    private:
      CORBA::ORB_var orb_;
  };

  class  AMI_MyFoo_exec_i
    : public virtual ::CCM_AMI::CCM_AMI_MyFoo,
      public virtual ::CORBA::LocalObject
  {
  public:
    AMI_MyFoo_exec_i (::CCM_AMI::AMI_MyFoo_callback_ptr foo_callback);

    virtual ~AMI_MyFoo_exec_i (void);
    virtual void
    sendc_foo (
      ::CCM_AMI::AMI_MyFoo_callback_ptr cb_handler,
      const char * in_str);

    virtual void
    sendc_hello (
      ::CCM_AMI::AMI_MyFoo_callback_ptr cb_handler);

  private:
    CCM_AMI::MyFoo_var ami_foo_server_;
    ::CCM_AMI::AMI_MyFoo_callback_var foo_callback_;
  };
  
  class  AMI_MyInterface_exec_i
    : public virtual ::CCM_AMI::CCM_AMI_MyInterface,
      public virtual ::CORBA::LocalObject
  {
  public:
    AMI_MyInterface_exec_i (::CCM_AMI::AMI_MyInterface_callback_ptr foo_callback);

    virtual ~AMI_MyInterface_exec_i (void);

    virtual void
    sendc_do_something_with_something (
      ::CCM_AMI::AMI_MyInterface_callback_ptr cb_handler,
      CORBA::Short something);

  private:
    CCM_AMI::MyInterface_var ami_interface_server_;
    ::CCM_AMI::AMI_MyInterface_callback_var interface_callback_;
  };

  class  AMI_exec_i
    : public virtual AMI_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    AMI_exec_i (void);
    virtual ~AMI_exec_i (void);
    
    // Supported operations and attributes.
    
    // Component attributes.
    
    // Port operations.
    
    virtual ::CCM_AMI::CCM_AMI_MyFoo_ptr
    get_perform_asynch_my_foo (void);

    virtual ::CCM_AMI::CCM_AMI_MyInterface_ptr
    get_perform_asynch_my_interface (void);
    
    // Operations from Components::SessionComponent.
    
    virtual void
    set_session_context (
      ::Components::SessionContext_ptr ctx);
    
    virtual void configuration_complete (void);
    
    virtual void ccm_activate (void);
    virtual void ccm_passivate (void);
    virtual void ccm_remove (void);
  
  private:
    ::Hello_AMI::CCM_AMI_Context_var  context_;
    ::CCM_AMI::AMI_MyFoo_callback_var callback_foo_;
  };
  
  extern "C" AMI_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Hello_AMI_AMI_Impl (void);
}

namespace CIAO_Hello_AMI_AMI_Impl
{
  class  AMIHome_exec_i
    : public virtual AMIHome_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    AMIHome_exec_i (void);
    
    virtual ~AMIHome_exec_i (void);
    
    // All operations and attributes.
    
    // Factory operations.
    
    // Finder operations.
    
    // Implicit operations.
    
    virtual ::Components::EnterpriseComponent_ptr
    create (void);
  };
  
  extern "C" AMI_EXEC_Export ::Components::HomeExecutorBase_ptr
  create_Hello_AMI_AMIHome_Impl (void);
}

#endif /* ifndef */
