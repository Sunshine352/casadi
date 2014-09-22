/*
 *    This file is part of CasADi.
 *
 *    CasADi -- A symbolic framework for dynamic optimization.
 *    Copyright (C) 2010 by Joel Andersson, Moritz Diehl, K.U.Leuven. All rights reserved.
 *
 *    CasADi is free software; you can redistribute it and/or
 *    modify it under the terms of the GNU Lesser General Public
 *    License as published by the Free Software Foundation; either
 *    version 3 of the License, or (at your option) any later version.
 *
 *    CasADi is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *    Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public
 *    License along with CasADi; if not, write to the Free Software
 *    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */


      #include "lifting_lr_dple_internal.hpp"
      #include <string>

      const std::string casadi::LiftingLrDpleInternal::meta_doc=
      "\n"
"Solving the Discrete Periodic Lyapunov Equations by lifting the entire\n"
"period to a single Discrete Lyapunov Equation\n"
"\n"
"\n"
">List of available options\n"
"\n"
"+------+-----------+---------+-----------------------------------+\n"
"|  Id  |   Type    | Default |            Description            |\n"
"+======+===========+=========+===================================+\n"
"| form | OT_STRING | \"A\"     | The form of the lifting (A:0|B:1) |\n"
"+------+-----------+---------+-----------------------------------+\n"
"\n"
"\n"
"\n"
"\n"
;