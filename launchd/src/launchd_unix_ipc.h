#ifndef __LAUNCHD_UNIX_IPC__
#define __LAUNCHD_UNIX_IPC__
/*
 * Copyright (c) 2005 Apple Computer, Inc. All rights reserved.
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

#include <sys/queue.h>

#include "launchd_runtime.h"
#include "launchd_core_logic.h"
#include "liblaunch_private.h"

struct conncb {
	kq_callback kqconn_callback;
	LIST_ENTRY(conncb) sle;
	launch_t conn;
	job_t j;
};

extern char *sockpath;

INTERNAL_ABI void ipc_open(int fd, job_t j);
INTERNAL_ABI void ipc_close_all_with_job(job_t j);
INTERNAL_ABI void ipc_close(struct conncb *c);
INTERNAL_ABI void ipc_callback(void *, struct kevent *);
INTERNAL_ABI void ipc_revoke_fds(launch_data_t o);
INTERNAL_ABI void ipc_close_fds(launch_data_t o);
INTERNAL_ABI void ipc_server_init(void);

#endif
