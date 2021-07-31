/*
  This file is part of t8code.
  t8code is a C library to manage a collection (a forest) of multiple
  connected adaptive space-trees of general element types in parallel.

  Copyright (C) 2015 the developers

  t8code is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  t8code is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with t8code; if not, write to the Free Software Foundation, Inc.,
  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*/  
  
#include <sc_refcount.h>
#include <sc_shmem.h>
#include <p4est_connectivity.h>
#include <p8est_connectivity.h>
#include <t8_schemes/t8_new_feature/t8_subelements_cxx.hxx>
#include <t8_forest/t8_forest_adapt.h>
#include <t8_forest.h>
#include <t8_cmesh_vtk.h>
#include <t8_vec.h>
#include <example/common/t8_example_common.h>
  
#define T8_NUM_VERTICIES_SUBELEMENT 3

t8_test_element_function () 
{
  
  
  
  
    num_subelements;
  
  
    /* Choose quad scheme */ 
    eclass = T8_ECLASS_QUAD;
  
  
    /* Allocate memory for a quad element and initialize it */ 
    class_scheme->t8_element_new (1, &element_1);
  
  
  
    /* Allocate memory for subelements of type 3 and initialize them */ 
    num_subelements =
    class_scheme->t8_element_get_number_of_subelements (type);
  
  
  
    /* Create subelements and determine their verticies */ 
    class_scheme->t8_element_to_subelement (element_1, element_subelements,
                                            type);
  
    
      
                                               [subelement_id], vertex_id,
                                               coords);
      
               subelement_id, vertex_id, coords[0], coords[1]);
    
  
  
    /* NOTE try to print subelements in paraview */ 
    
    /* free memory */ 
    class_scheme->t8_element_destroy (1, &element_1);
  
  



main (int argc, char **argv) 
{
  
  
  
  
  
  
  
  
  
  


