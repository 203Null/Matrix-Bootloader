/*
 * Copyright (c) 2016, Devan Lai
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose with or without fee is hereby granted, provided
 * that the above copyright notice and this permission notice
 * appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
 * NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

// Modified for Matrix RET6

#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED

//  Firmware starts here, after the bootloader.
#define APP_BASE_ADDRESS 0x08004000
//  512KB of ROM, Overrided (RET6)
#define FLASH_SIZE_OVERRIDE 0x80000
#define FLASH_PAGE_SIZE  2048
#define DFU_UPLOAD_AVAILABLE 1
#define DFU_DOWNLOAD_AVAILABLE 1

#ifndef HAVE_LED
#define HAVE_LED 0
#endif

#define UF2_FAMILY 0x5ee21072

#ifndef HAVE_BUTTON
#define HAVE_BUTTON 1
#define BUTTON_GPIO_PORT GPIOA
#define BUTTON_GPIO_PIN  GPIO0
#define BUTTON_ACTIVE_HIGH 1
#endif

#ifndef HAVE_USB_PULLUP_CONTROL
#define HAVE_USB_PULLUP_CONTROL 0
#endif

#undef VOLUME_LABEL
#define VOLUME_LABEL "Matrix DFU"
#undef PRODUCT_NAME
#define PRODUCT_NAME "Matrix Founder Edition"
#undef BOARD_ID
#define BOARD_ID "REV 1.0"
#undef INDEX_URL 
#define INDEX_URL "mxfw.203.io"

#define USES_GPIOA 1

#endif
