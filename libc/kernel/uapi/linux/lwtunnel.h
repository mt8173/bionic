/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_LWTUNNEL_H_
#define _UAPI_LWTUNNEL_H_
#include <linux/types.h>
enum lwtunnel_encap_types {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  LWTUNNEL_ENCAP_NONE,
  LWTUNNEL_ENCAP_MPLS,
  LWTUNNEL_ENCAP_IP,
  LWTUNNEL_ENCAP_ILA,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  LWTUNNEL_ENCAP_IP6,
  __LWTUNNEL_ENCAP_MAX,
};
#define LWTUNNEL_ENCAP_MAX (__LWTUNNEL_ENCAP_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum lwtunnel_ip_t {
  LWTUNNEL_IP_UNSPEC,
  LWTUNNEL_IP_ID,
  LWTUNNEL_IP_DST,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  LWTUNNEL_IP_SRC,
  LWTUNNEL_IP_TTL,
  LWTUNNEL_IP_TOS,
  LWTUNNEL_IP_FLAGS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __LWTUNNEL_IP_MAX,
};
#define LWTUNNEL_IP_MAX (__LWTUNNEL_IP_MAX - 1)
enum lwtunnel_ip6_t {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  LWTUNNEL_IP6_UNSPEC,
  LWTUNNEL_IP6_ID,
  LWTUNNEL_IP6_DST,
  LWTUNNEL_IP6_SRC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  LWTUNNEL_IP6_HOPLIMIT,
  LWTUNNEL_IP6_TC,
  LWTUNNEL_IP6_FLAGS,
  __LWTUNNEL_IP6_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define LWTUNNEL_IP6_MAX (__LWTUNNEL_IP6_MAX - 1)
#endif
