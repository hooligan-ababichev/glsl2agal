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


/**
 * \file ir_dead_code.h
 *
 * Prototypes for optimization passes to be called by the compiler and drivers.
 */

bool do_constant_folding(exec_list *instructions);
bool do_constant_variable(exec_list *instructions);
bool do_constant_variable_unlinked(exec_list *instructions);
bool do_copy_propagation(exec_list *instructions);
bool do_dead_code(struct _mesa_glsl_parse_state *state,
		  exec_list *instructions);
bool do_dead_code_local(exec_list *instructions);
bool do_dead_code_unlinked(struct _mesa_glsl_parse_state *state,
			   exec_list *instructions);
bool do_function_inlining(exec_list *instructions);
bool do_if_simplification(exec_list *instructions);
bool do_mod_to_fract(exec_list *instructions);
bool do_swizzle_swizzle(exec_list *instructions);
bool do_vec_index_to_swizzle(exec_list *instructions);