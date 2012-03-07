// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.8.3
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

#include "Throughput_Receiver_exec.h"

#include "ace/High_Res_Timer.h"
#include "dds4ccm/impl/dds4ccm_conf.h"

namespace CIAO_Throughput_Receiver_Impl
{

  /**
   * Facet Executor Implementation Class: info_listen_data_listener_exec_i
   */

  info_listen_data_listener_exec_i::info_listen_data_listener_exec_i (
        ::Throughput::CCM_Receiver_Context_ptr ctx,
        Receiver_exec_i &callback)
    : ciao_context_ (
        ::Throughput::CCM_Receiver_Context::_duplicate (ctx))
      , callback_ (callback)
  {
  }

  info_listen_data_listener_exec_i::~info_listen_data_listener_exec_i (void)
  {
  }

  // Operations from ::Throughput::ThroughputTestConn::Listener

  void
  info_listen_data_listener_exec_i::on_one_data (const ::ThroughputTest & datum,
  const ::CCM_DDS::ReadInfo & /* info */)
  {
    this->callback_.record_data (const_cast<ThroughputTest&> (datum));
  }

  void
  info_listen_data_listener_exec_i::on_many_data (const ::ThroughputTestSeq & /* data */,
  const ::CCM_DDS::ReadInfoSeq & /* infos */)
  {
    /* Your code here. */
  }

  /**
   * Facet Executor Implementation Class: command_listen_data_listener_exec_i
   */

  command_listen_data_listener_exec_i::command_listen_data_listener_exec_i (
        ::Throughput::CCM_Receiver_Context_ptr ctx,
        Receiver_exec_i &callback)
    : ciao_context_ (
        ::Throughput::CCM_Receiver_Context::_duplicate (ctx))
      , callback_ (callback)
  {
  }

  command_listen_data_listener_exec_i::~command_listen_data_listener_exec_i (void)
  {
  }

  // Operations from ::Throughput::ThroughputCommandConn::Listener

  void
  command_listen_data_listener_exec_i::on_one_data (const ::ThroughputCommand & datum,
  const ::CCM_DDS::ReadInfo & /* info */)
  {
    this->callback_.handle_run (const_cast<ThroughputCommand&> (datum));
  }

  void
  command_listen_data_listener_exec_i::on_many_data (const ::ThroughputCommandSeq & /* data */,
  const ::CCM_DDS::ReadInfoSeq & /* infos */)
  {
    /* Your code here. */
  }

  /**
   * Component Executor Implementation Class: Receiver_exec_i
   */

  Receiver_exec_i::Receiver_exec_i (void)
    : count_ (0L), // total count of all received messages
      interval_messages_received_(0L),
      interval_bytes_received_(0L),
      interval_data_length_(0L),
      run_(0),
      first_time_ (0L),
      demand_ (0L),
      seq_num_ (0L),
      messages_lost_(0),
      log_(false)
  {
  }

  Receiver_exec_i::~Receiver_exec_i (void)
  {
  }

  // Supported operations and attributes.
  void
  Receiver_exec_i::start (void)
  {
    ::CCM_DDS::DataListenerControl_var dlccmd =
      this->ciao_context_->get_connection_command_listen_data_control ();
    dlccmd->mode (::CCM_DDS::ONE_BY_ONE);
    ::CCM_DDS::DataListenerControl_var dlc =
      this->ciao_context_->get_connection_info_listen_data_control ();
    dlc->mode (::CCM_DDS::ONE_BY_ONE);
  }

  void
  Receiver_exec_i::reset_results (void)
  {
    this->interval_messages_received_ = 0;
    this->interval_bytes_received_ = 0;
    this->seq_num_ = 0;
    this->messages_lost_= 0;
  }

  void
  Receiver_exec_i::handle_run (ThroughputCommand & an_instance)
  {
    if (an_instance.command == THROUGHPUT_COMMAND_START)
      {
        this->reset_results();
        this->interval_data_length_ = an_instance.data_length;
        this->demand_ = an_instance.current_publisher_effort;
        ACE_High_Res_Timer::gettimeofday_hr ().to_usec (this->first_time_);
        this->log_ = true;
      }
    else if (an_instance.command == THROUGHPUT_COMMAND_COMPLETE)
      {
        this->log_ = false;
        ++this->run_;
        ACE_UINT64 last_time;
        ACE_High_Res_Timer::gettimeofday_hr ().to_usec (last_time);
        ACE_UINT64 interval_time =  (last_time  - this->first_time_);
        this->show_results (interval_time);
      }
  }

  void
  Receiver_exec_i::record_data (ThroughputTest & an_instance)
  {
    ++this->count_; // total count of all received messages

    if (this->log_.value ())
      {
        ++this->interval_messages_received_;
        this->interval_bytes_received_ += this->interval_data_length_;
        if (an_instance.seq_num != this->seq_num_)
          {
            ++this->messages_lost_;
            this->seq_num_ = an_instance.seq_num;
          }
        ++this->seq_num_;
      }
  }

  void
  Receiver_exec_i::show_results (const ACE_UINT64& interval_time)
  {
    if (this->count_ > 0 && interval_time > 0)
      {
        double per_sec = (double)1000000/ interval_time;
        double mbps = (this->interval_bytes_received_* per_sec)* (8.0/1000.0/1000.0);

        if(this->run_ == 1)
          {
            #if (CIAO_DDS4CCM_CONTEXT_SWITCH==1)
              ACE_DEBUG ((LM_DEBUG, "\n\nYES, we're using a threadswitch between "
                                    "DDS and CCM\n\n"));
            #else
              ACE_DEBUG ((LM_DEBUG, "\n\nNO, we're not using a threadswitch between "
                                    "DDS and CCM\n\n"));
            #endif
             ACE_DEBUG ((LM_DEBUG,
                        " bytes, demand, samples,sample/s, Mbit/s,lost samples\n"));
             ACE_DEBUG ((LM_DEBUG,
                        "------,-------,--------,--------,-------,------------\n"));
          }
        ACE_DEBUG ((LM_DEBUG, "%6u,%7q,%8q,%8.1f,%7.1f,%7q\n",
                        this->interval_data_length_,
                        this->demand_,
                        this->interval_messages_received_,
                        this->interval_messages_received_ * per_sec,
                        mbps,
                        this->messages_lost_));
      }
  }

  // Component attributes and port operations.

  ::Throughput::ThroughputTestConn::CCM_Listener_ptr
  Receiver_exec_i::get_info_listen_data_listener (void)
  {
    if ( ::CORBA::is_nil (this->ciao_info_listen_data_listener_.in ()))
      {
        info_listen_data_listener_exec_i *tmp = 0;
        ACE_NEW_RETURN (
          tmp,
          info_listen_data_listener_exec_i (
            this->ciao_context_.in (),
            *this),
            ::Throughput::ThroughputTestConn::CCM_Listener::_nil ());

          this->ciao_info_listen_data_listener_ = tmp;
      }

    return
      ::Throughput::ThroughputTestConn::CCM_Listener::_duplicate (
        this->ciao_info_listen_data_listener_.in ());
  }

  ::CCM_DDS::CCM_PortStatusListener_ptr
  Receiver_exec_i::get_info_listen_status (void)
  {
    return ::CCM_DDS::CCM_PortStatusListener::_nil ();
  }

  ::Throughput::ThroughputCommandConn::CCM_Listener_ptr
  Receiver_exec_i::get_command_listen_data_listener (void)
  {
    if ( ::CORBA::is_nil (this->ciao_command_listen_data_listener_.in ()))
      {
        command_listen_data_listener_exec_i *tmp = 0;
        ACE_NEW_RETURN (
          tmp,
          command_listen_data_listener_exec_i (
            this->ciao_context_.in (),
            *this),
            ::Throughput::ThroughputCommandConn::CCM_Listener::_nil ());

          this->ciao_command_listen_data_listener_ = tmp;
      }

    return
      ::Throughput::ThroughputCommandConn::CCM_Listener::_duplicate (
        this->ciao_command_listen_data_listener_.in ());
  }

  ::CCM_DDS::CCM_PortStatusListener_ptr
  Receiver_exec_i::get_command_listen_status (void)
  {
    return ::CCM_DDS::CCM_PortStatusListener::_nil ();
  }

  // Operations from Components::SessionComponent.

  void
  Receiver_exec_i::set_session_context (
    ::Components::SessionContext_ptr ctx)
  {
    this->ciao_context_ =
      ::Throughput::CCM_Receiver_Context::_narrow (ctx);

    if ( ::CORBA::is_nil (this->ciao_context_.in ()))
      {
        throw ::CORBA::INTERNAL ();
      }
  }

  void
  Receiver_exec_i::configuration_complete (void)
  {
    this->start();
  }

  void
  Receiver_exec_i::ccm_activate (void)
  {
    /* Your code here. */
  }

  void
  Receiver_exec_i::ccm_passivate (void)
  {
    if (this->count_ > 0)
      {
        ACE_DEBUG((LM_DEBUG, "SUMMARY RECEIVER:\n "
                             "Number of samples received: %u \n",
                             this->count_));
      }
    else
      {
        ACE_ERROR ((LM_ERROR, "ERROR RECEIVER: "
                              "No samples received\n"));
      }
  }

  void
  Receiver_exec_i::ccm_remove (void)
  {
    /* Your code here. */
  }

  extern "C" RECEIVER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Throughput_Receiver_Impl (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_NORETURN (
      retval,
      Receiver_exec_i);

    return retval;
  }
}
