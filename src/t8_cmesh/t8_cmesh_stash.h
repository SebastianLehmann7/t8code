/*
  This file is part of t8code.
  t8code is a C library to manage a collection (a forest) of multiple
  connected adaptive space-trees of general element classes in parallel.

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

/** \file t8_cmesh_stash.h
 * We define the data structures and routines for temporary storage before commit
 */

#ifndef T8_CMESH_STASH_H
#define T8_CMESH_STASH_H

#include <t8.h>
#include <t8_eclass.h>

typedef struct t8_stash *t8_stash_t;

typedef struct t8_stash_class
{
  t8_gloidx_t         id;
  t8_eclass_t         eclass;
} t8_stash_class_struct_t;

typedef struct t8_stash_joinface
{
  t8_gloidx_t         id1, id2;
  int                 face1, face2;
  int                 orientation;
} t8_stash_joinface_struct_t;

typedef struct t8_stash_attribute
{
  t8_gloidx_t         id;
  size_t              attr_size;
  void               *attr_data;
  int                 is_owned;
} t8_stash_attribute_struct_t;

typedef struct t8_stash
{
  sc_array_t          classes;
  sc_array_t          joinfaces;
  sc_array_t          attributes;
} t8_stash_struct_t;

T8_EXTERN_C_BEGIN ();

void                t8_stash_init (t8_stash_t * pstash);

void                t8_stash_destroy (t8_stash_t * pstash);

void                t8_stash_add_class (t8_stash_t stash, t8_gloidx_t id,
                                        t8_eclass_t eclass);

void                t8_stash_add_facejoin (t8_stash_t stash, t8_gloidx_t id1,
                                           t8_gloidx_t id2, int face1,
                                           int face2, int orientation);

void                t8_stash_add_attribute (t8_stash_t stash, t8_gloidx_t id,
                                            size_t size, void *attr,
                                            int copy);

size_t              t8_stash_get_attribute_size (t8_stash_t stash,
                                                 size_t index);

void               *t8_stash_get_attribute (t8_stash_t stash, size_t index);

t8_gloidx_t         t8_stash_get_attribute_tree_id (t8_stash_t stash,
                                                    size_t index);

int                 t8_stash_attribute_is_owned (t8_stash_t stash,
                                                 size_t index);

void                t8_stash_attribute_sort (t8_stash_t stash);

T8_EXTERN_C_END ();

#endif /* !T8_CMESH_STASH_H */
