// SPDX-FileCopyrightText: © 2022 Foundation Devices, Inc. <hello@foundationdevices.com>
// SPDX-License-Identifier: GPL-3.0-or-later
//

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_ICON_SHUTDOWN
#define LV_ATTRIBUTE_IMG_ICON_SHUTDOWN
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_ICON_SHUTDOWN uint8_t ICON_SHUTDOWN_map[] = {
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 0*/
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 1*/

  0x00, 0x60, 0x00, 
  0x0c, 0x63, 0x00, 
  0x1c, 0x63, 0x80, 
  0x38, 0x61, 0xc0, 
  0x70, 0x60, 0xe0, 
  0x60, 0x60, 0x60, 
  0xe0, 0x60, 0x70, 
  0xc0, 0x60, 0x30, 
  0xc0, 0x60, 0x30, 
  0xc0, 0x60, 0x30, 
  0xc0, 0x60, 0x30, 
  0xc0, 0x00, 0x30, 
  0xc0, 0x00, 0x30, 
  0xe0, 0x00, 0x70, 
  0x60, 0x00, 0x60, 
  0x70, 0x00, 0xe0, 
  0x38, 0x01, 0xc0, 
  0x1e, 0x07, 0x80, 
  0x0f, 0xff, 0x00, 
  0x03, 0xfc, 0x00, 
};

const lv_img_dsc_t ICON_SHUTDOWN = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 20,
  .header.h = 20,
  .data_size = 68,
  .data = ICON_SHUTDOWN_map,
};
