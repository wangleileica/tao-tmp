/* -*- c++ -*- */
//=============================================================================
/**
 *  @file    facet_ami_exs.h
 *
 *  $Id$
 *
 *  This provides code generation for facets in the AMI connector
 *  impl source
 *
 *
 *  @author Jeff Parsons
 */
//=============================================================================


#ifndef _BE_CONNECTOR_FACET_AMI_EXS_H_
#define _BE_CONNECTOR_FACET_AMI_EXS_H_

class be_visitor_facet_ami_exs
  : public be_visitor_component_scope
{
  //
  // = TITLE
  //   be_visitor_facet_ami_exs
  //
  // = DESCRIPTION
  //   This is a concrete visitor to generate
  //   the AMI connector implementation header for facets.
  //
  //
public:
  be_visitor_facet_ami_exs (be_visitor_context *ctx);
  
  ~be_visitor_facet_ami_exs (void);
  
  virtual int visit_provides (be_provides *node);
  virtual int visit_operation (be_operation *node);
  virtual int visit_argument (be_argument *node);
  
  virtual int post_process (be_decl *node);
  
private:
  int gen_reply_handler_class (void);
  int gen_facet_executor_class (void);
  int gen_reply_hander_op (be_operation *node);
  int gen_facet_executor_op (be_operation *node);
  
private:
  /// Storage for the interface type of the facet.
  be_interface *iface_;
  
  /// Flag to tell us which operation body (reply handler
  /// or sendc_* class) we are generating.
  bool for_reply_handler_;
};

#endif /* _BE_CONNECTOR_FACET_AMI_EXS_H_ */
