/* -*- c++ -*- */
/*
 * Copyright © 2010 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#pragma once
#ifndef IR_PRINT_GLSL_VISITOR_H
#define IR_PRINT_GLSL_VISITOR_H

#include "ir.h"
#include "ir_visitor.h"

extern void _mesa_print_ir_glsl(exec_list *instructions,
			   struct _mesa_glsl_parse_state *state);

class ir_print_glsl_visitor : public ir_visitor {
public:
   ir_print_glsl_visitor()
   {
      indentation = 0;
   }

   virtual ~ir_print_glsl_visitor()
   {
      /* empty */
   }

   void indent(void);

   virtual void visit(ir_variable *);
   virtual void visit(ir_function_signature *);
   virtual void visit(ir_function *);
   virtual void visit(ir_expression *);
   virtual void visit(ir_texture *);
   virtual void visit(ir_swizzle *);
   virtual void visit(ir_dereference_variable *);
   virtual void visit(ir_dereference_array *);
   virtual void visit(ir_dereference_record *);
   virtual void visit(ir_assignment *);
   virtual void visit(ir_constant *);
   virtual void visit(ir_call *);
   virtual void visit(ir_return *);
   virtual void visit(ir_discard *);
   virtual void visit(ir_if *);
   virtual void visit(ir_loop *);
   virtual void visit(ir_loop_jump *);

private:
   int indentation;
};

#endif /* IR_PRINT_GLSL_VISITOR_H */