#ifndef _VPROC_PRIVATE_H_
#define _VPROC_PRIVATE_H_
/*
 * Copyright (c) 2006 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_APACHE_LICENSE_HEADER_START@
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 * @APPLE_APACHE_LICENSE_HEADER_END@
 */

#include <sys/cdefs.h>
#include <stdbool.h>

__BEGIN_DECLS

#pragma GCC visibility push(default)

vproc_err_t _vproc_get_last_exit_status(int *wstatus);
vproc_err_t _vproc_set_global_on_demand(bool val);

#pragma GCC visibility pop

__END_DECLS

#endif