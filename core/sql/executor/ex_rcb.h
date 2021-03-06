/**********************************************************************
// @@@ START COPYRIGHT @@@
//
// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
//
// @@@ END COPYRIGHT @@@
**********************************************************************/
#ifndef EX_RCB_H
#define EX_RCB_H

/* -*-C++-*-
 *****************************************************************************
 *
 * File:         ex_rcb.h
 * Description:  
 *               
 *               
 * Created:      7/10/95
 * Language:     C++
 *
 *
// ****************************************************************************
*/
//#include "comrcb.h"
#include "Collections.h"

// function to covert a MP record struct to ExRCB, called by filesystem.
// void * is returned so it does not need to include comrcb.h
void * ExRcbFromMpLabelInfo (void * recordPtr, void * sqlLabel,
			      short entry_seq, 
			      CollHeap *heap );

short getExRcbSize ();

#endif
