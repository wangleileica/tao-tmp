
//=============================================================================
/**
 *  @file    vardecl_ss.h
 *
 *  Visitors for generation of code for Arguments. This generates the
 *  variable declartion for the argument in the server-sde skeleton
 *
 *  @author Aniruddha Gokhale
 */
//=============================================================================


#ifndef _BE_VISITOR_ARGUMENT_VARDECL_SS_H_
#define _BE_VISITOR_ARGUMENT_VARDECL_SS_H_

/**
 * @class be_visitor_args_vardecl_ss
 *
 * @brief be_visitor_args_vardecl_ss
 *
 * Visitor for variable declaration for argument
 */
class be_visitor_args_vardecl_ss : public be_visitor_args
{
public:
  /// constructor
  be_visitor_args_vardecl_ss (be_visitor_context *ctx);

  /// destructor
  virtual ~be_visitor_args_vardecl_ss ();

  /// visit the argument node
  virtual int visit_argument (be_argument *node);

  // =visit all the nodes that can be the types for the argument

  /// visit array type
  virtual int visit_array (be_array *node);

  /// visit the enum node
  virtual int visit_enum (be_enum *node);

  /// visit interface
  virtual int visit_interface (be_interface *node);

  /// visit interface forward
  virtual int visit_interface_fwd (be_interface_fwd *node);

  /// visit valuebox
  virtual int visit_valuebox (be_valuebox *node);

  /// visit valuetype
  virtual int visit_valuetype (be_valuetype *node);

  /// visit valuetype forward
  virtual int visit_valuetype_fwd (be_valuetype_fwd *node);

  /// visit predefined type
  virtual int visit_predefined_type (be_predefined_type *node);

  /// visit sequence type
  virtual int visit_sequence (be_sequence *node);

  /// visit string type
  virtual int visit_string (be_string *node);

  /// visit structure type
  virtual int visit_structure (be_structure *node);

  /// visit union type
  virtual int visit_union (be_union *node);

  /// visit the typedef type
  virtual int visit_typedef (be_typedef *node);

  /// visit a component node
  virtual int visit_component (be_component *node);

  /// visit a forward declared component node
  virtual int visit_component_fwd (be_component_fwd *node);

  /// visit an eventtype node
  virtual int visit_eventtype (be_eventtype *node);

  /// visit a forward declared eventtype node
  virtual int visit_eventtype_fwd (be_eventtype_fwd *node);

 private:
  int emit_common (be_type *node);
  int emit_common2 (be_type *node);

};

#endif /* _BE_VISITOR_ARGUMENT_VARDECL_SS_H_ */
