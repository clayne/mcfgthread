/* This file is part of MCF Gthread.
 * Copyright (C) 2022-2025 LH_Mouse. All wrongs reserved.
 *
 * MCF Gthread is free software. Licensing information is included in
 * LICENSE.TXT as a whole. The GCC Runtime Library Exception applies
 * to this file.  */

#if defined _MSC_VER && !defined __clang__
int
main(void)
  {
    return 77;
  }
#else  // MSVC

#include "../mcfgthread/atomic.h"
#include "../mcfgthread/c11.h"
#include "../mcfgthread/clock.h"
#include "../mcfgthread/cond.h"
#include "../mcfgthread/cxa.h"
#include "../mcfgthread/dtor_queue.h"
#include "../mcfgthread/event.h"
#include "../mcfgthread/exit.h"
#include "../mcfgthread/fwd.h"
#include "../mcfgthread/gthr.h"
#include "../mcfgthread/gthr_aux.h"
#include "../mcfgthread/gthr_libobjc.h"
#include "../mcfgthread/libcxx.h"
#include "../mcfgthread/mutex.h"
#include "../mcfgthread/once.h"
#include "../mcfgthread/sem.h"
#include "../mcfgthread/thread.h"
#include "../mcfgthread/tls.h"

#if 0 __MCF_CXX11(+1) != 0
#  warning Please compile this file as C89.
#endif

int
main(void)
  {
    return 0;
  }

#endif  // MSVC
