//===-- sanitizer_interface_internal.h --------------------------*- C++ -*-===//
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file is shared between run-time libraries of sanitizers.
//
// This header declares the sanitizer runtime interface functions.
// The runtime library has to define these functions so the instrumented program
// could call them.
//
// See also include/sanitizer/common_interface_defs.h
//===----------------------------------------------------------------------===//
#ifndef SANITIZER_INTERFACE_INTERNAL_H
#define SANITIZER_INTERFACE_INTERNAL_H

#include "sanitizer_internal_defs.h"

extern "C" {
  // Tell the tools to write their reports to "path.<pid>" instead of stderr.
  // The special values are "stdout" and "stderr".
  SANITIZER_INTERFACE_ATTRIBUTE
  void __sanitizer_set_report_path(const char *path);

  typedef struct {
      int coverage_sandboxed;
      __sanitizer::sptr coverage_fd;
      unsigned int coverage_max_block_size;
  } __sanitizer_sandbox_arguments;

  // Notify the tools that the sandbox is going to be turned on.
  SANITIZER_INTERFACE_ATTRIBUTE SANITIZER_WEAK_ATTRIBUTE void
      __sanitizer_sandbox_on_notify(__sanitizer_sandbox_arguments *args);

  // This function is called by the tool when it has just finished reporting
  // an error. 'error_summary' is a one-line string that summarizes
  // the error message. This function can be overridden by the client.
  SANITIZER_INTERFACE_ATTRIBUTE SANITIZER_WEAK_ATTRIBUTE
  void __sanitizer_report_error_summary(const char *error_summary);

  SANITIZER_INTERFACE_ATTRIBUTE void __sanitizer_cov_dump();
  SANITIZER_INTERFACE_ATTRIBUTE void __sanitizer_cov_init();
  SANITIZER_INTERFACE_ATTRIBUTE void __sanitizer_cov(__sanitizer::u32 *guard);
  SANITIZER_INTERFACE_ATTRIBUTE
  void __sanitizer_annotate_contiguous_container(const void *beg,
                                                 const void *end,
                                                 const void *old_mid,
                                                 const void *new_mid);
  SANITIZER_INTERFACE_ATTRIBUTE
  int __sanitizer_verify_contiguous_container(const void *beg, const void *mid,
                                              const void *end);
}  // extern "C"

#endif  // SANITIZER_INTERFACE_INTERNAL_H
