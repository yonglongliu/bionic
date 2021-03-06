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
#ifndef _UAPI_VIDEO_GSP_R5P0_CFG_H_
#define _UAPI_VIDEO_GSP_R5P0_CFG_H_
#include <linux/ioctl.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include "gsp_cfg.h"
#define R5P0_IMGL_NUM 2
#define R5P0_OSDL_NUM 4
#define R5P0_IMGSEC_NUM 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define R5P0_OSDSEC_NUM 1
enum gsp_r5p0_word_endian {
  GSP_R5P0_WORD_ENDN_0 = 0x00,
  GSP_R5P0_WORD_ENDN_1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_R5P0_WORD_ENDN_2,
  GSP_R5P0_WORD_ENDN_3,
  GSP_R5P0_WORD_ENDN_MAX_NUM,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum gsp_r5p0_dword_endian {
  GSP_R5P0_DWORD_ENDN_0 = 0x00,
  GSP_R5P0_DWORD_ENDN_1,
  GSP_R5P0_DWORD_ENDN_MAX_NUM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum gsp_r5p0_qword_endian {
  GSP_R5P0_QWORD_ENDN_0 = 0x00,
  GSP_R5P0_QWORD_ENDN_1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_R5P0_QWORD_ENDN_MAX_NUM,
};
enum gsp_r5p0_rgb_swap_mod {
  GSP_R5P0_RGB_SWP_RGB = 0x00,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_R5P0_RGB_SWP_RBG,
  GSP_R5P0_RGB_SWP_GRB,
  GSP_R5P0_RGB_SWP_GBR,
  GSP_R5P0_RGB_SWP_BGR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_R5P0_RGB_SWP_BRG,
  GSP_R5P0_RGB_SWP_MAX,
};
enum gsp_r5p0_a_swap_mod {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_R5P0_A_SWAP_ARGB,
  GSP_R5P0_A_SWAP_RGBA,
  GSP_R5P0_A_SWAP_MAX,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum gsp_r5p0_img_layer_format {
  GSP_R5P0_IMG_FMT_ARGB888 = 0x00,
  GSP_R5P0_IMG_FMT_RGB888,
  GSP_R5P0_IMG_FMT_YUV422_2P,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_R5P0_IMG_FMT_YUV422_1P,
  GSP_R5P0_IMG_FMT_YUV420_2P,
  GSP_R5P0_IMG_FMT_YUV420_3P,
  GSP_R5P0_IMG_FMT_RGB565,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_R5P0_IMG_FMT_YV12,
  GSP_R5P0_IMG_FMT_MAX_NUM,
};
enum gsp_r5p0_osd_layer_format {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_R5P0_OSD_FMT_ARGB888 = 0x00,
  GSP_R5P0_OSD_FMT_RGB888,
  GSP_R5P0_OSD_FMT_RGB565,
  GSP_R5P0_OSD_FMT_MAX_NUM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum gsp_r5p0_des_layer_format {
  GSP_R5P0_DST_FMT_ARGB888 = 0x00,
  GSP_R5P0_DST_FMT_RGB888,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_R5P0_DST_FMT_RGB565,
  GSP_R5P0_DST_FMT_YUV420_2P,
  GSP_R5P0_DST_FMT_YUV420_3P,
  GSP_R5P0_DST_FMT_YUV422_2P,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  GSP_R5P0_DST_FMT_MAX_NUM,
};
struct gsp_r5p0_endian {
  __u32 y_rgb_word_endn;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 y_rgb_dword_endn;
  __u32 y_rgb_qword_endn;
  __u32 uv_word_endn;
  __u32 uv_dword_endn;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 uv_qword_endn;
  __u32 rgb_swap_mode;
  __u32 a_swap_mode;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct gsp_r5p0_img_layer_params {
  struct gsp_rect clip_rect;
  struct gsp_rect des_rect;
  struct gsp_rgb grey;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct gsp_rgb colorkey;
  struct gsp_rgb pallet;
  struct gsp_r5p0_endian endian;
  __u32 img_format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 pitch;
  __u32 height;
  __u32 rot_angle;
  __u8 alpha;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 colorkey_en;
  __u8 pallet_en;
  __u8 vfbc_mode;
  __u8 pmargb_en;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 scaling_en;
  __u8 pmargb_mod;
  __u8 zorder;
  __u8 y2r_mod;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 y2y_mod;
  struct gsp_yuv_adjust_para yuv_adjust;
};
struct gsp_r5p0_img_layer_user {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct gsp_layer_user common;
  struct gsp_r5p0_img_layer_params params;
};
struct gsp_r5p0_osd_layer_params {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct gsp_rect clip_rect;
  struct gsp_pos des_pos;
  struct gsp_rgb grey;
  struct gsp_rgb colorkey;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct gsp_rgb pallet;
  struct gsp_r5p0_endian endian;
  __u32 osd_format;
  __u32 pitch;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 height;
  __u8 alpha;
  __u8 colorkey_en;
  __u8 pallet_en;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 vfbc_mode;
  __u8 pmargb_en;
  __u8 pmargb_mod;
  __u8 zorder;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct gsp_r5p0_osd_layer_user {
  struct gsp_layer_user common;
  struct gsp_r5p0_osd_layer_params params;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct gsp_r5p0_des_layer_params {
  __u32 pitch;
  __u32 height;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct gsp_r5p0_endian endian;
  __u32 img_format;
  __u8 compress_r8_en;
  __u32 rot_angle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 r2y_mod;
  __u8 fbc_mod;
  __u8 dither_en;
  struct gsp_background_para bk_para;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct gsp_r5p0_des_layer_user {
  struct gsp_layer_user common;
  struct gsp_r5p0_des_layer_params params;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct gsp_r5p0_misc_cfg_user {
  __u8 gsp_gap;
  __u8 split_pages;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 cmd_cnt;
  __u8 run_mod;
  __u8 scale_seq;
  __u8 pmargb_en;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct gsp_rect workarea1_src_rect;
  struct gsp_rect workarea2_src_rect;
  struct gsp_pos workarea2_des_pos;
  struct gsp_scale_para scale_para[R5P0_IMGL_NUM];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct gsp_r5p0_cfg_user {
  struct gsp_r5p0_img_layer_user limg[R5P0_IMGL_NUM];
  struct gsp_r5p0_osd_layer_user losd[R5P0_OSDL_NUM];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct gsp_r5p0_des_layer_user ld1;
  struct gsp_r5p0_misc_cfg_user misc;
};
struct gsp_r5p0_capability {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct gsp_capability common;
  __u32 scale_range_up;
  __u32 scale_range_down;
  __u32 yuv_xywh_even;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 max_video_size;
  __u32 video_need_copy;
  __u32 blend_video_with_OSD;
  __u32 OSD_scaling;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 scale_updown_sametime;
  __u32 max_yuvLayer_cnt;
  __u32 max_scaleLayer_cnt;
  __u32 seq0_scale_range_up;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 seq0_scale_range_down;
  __u32 seq1_scale_range_up;
  __u32 seq1_scale_range_down;
  __u32 src_yuv_xywh_even_limit;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 csc_matrix_in;
  __u32 csc_matrix_out;
  __u32 block_alpha_limit;
  __u32 max_throughput;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 max_gspmmu_size;
  __u32 max_gsp_bandwidth;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
