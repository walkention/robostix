/****************************************************************************
*
*   Copyright (c) 2006 Dave Hylands     <dhylands@gmail.com>
*
*   This program is free software; you can redistribute it and/or modify
*   it under the terms of the GNU General Public License version 2 as
*   published by the Free Software Foundation.
*
*   Alternatively, this software may be distributed under the terms of BSD
*   license.
*
*   See README and COPYING for more details.
*
****************************************************************************/

#if !defined( CONFIG_H )
#define CONFIG_H

#define CFG_CPU_CLOCK   16000000L

#define CFG_ARGS_EEPROM_ADDR        0x0c00

#define CFG_USE_UART0   1
#define CFG_USE_UART1   0

#define CFG_UART0_RX_BUFFER_SIZE    128
#define CFG_UART0_TX_BUFFER_SIZE    128
#define CFG_UART0_LF_TO_CRLF        1

#define CFG_UART1_RX_BUFFER_SIZE    128
#define CFG_UART1_TX_BUFFER_SIZE    128
#define CFG_UART1_LF_TO_CRLF        1

#define CFG_USE_ADC 1

#endif  // CONFIG_H


