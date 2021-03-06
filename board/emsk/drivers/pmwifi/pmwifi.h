/* ------------------------------------------
 * Copyright (c) 2017, Synopsys, Inc. All rights reserved.

 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:

 * 1) Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.

 * 2) Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation and/or
 * other materials provided with the distribution.

 * 3) Neither the name of the Synopsys, Inc., nor the names of its contributors may
 * be used to endorse or promote products derived from this software without
 * specific prior written permission.

 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * \version 2017.03
 * \date 2014-08-29
 * \author Huaqi Fang(Huaqi.Fang@synopsys.com)
--------------------------------------------- */
/**
 * \file
 * \ingroup	BOARD_EMSK_DRV_PMODWIFI
 * \brief	header file of pmod wifi driver for emsk board
 */

/**
 * \addtogroup	BOARD_EMSK_DRV_PMODWIFI
 * @{
 */
#ifndef _PMWIFI_H_
#define _PMWIFI_H_

#include "wf_dev_hal.h"

#define EMSK_PMWIFI_0_ID		0

#define USE_EMSK_PMWIFI_0		1

/** BOARD_WIFI_SEL can be changed in board.mk by changing WIFI_SEL, possible choices defined in emsk.h */
#ifndef BOARD_WIFI_SEL
#define BOARD_WIFI_SEL			PMWIFI_MRF24G
#endif

#define EMSK_PMWIFI_0_MAC_ADDR0		(0x00)
#define EMSK_PMWIFI_0_MAC_ADDR1		(0x1e)
#define EMSK_PMWIFI_0_MAC_ADDR2		(0xc0)
#define EMSK_PMWIFI_0_MAC_ADDR3		(0x0e)
#define EMSK_PMWIFI_0_MAC_ADDR4		(0x71)
#define EMSK_PMWIFI_0_MAC_ADDR5		(0xac)

#ifdef __cplusplus
extern "C" {
#endif

extern void pmwifi_all_install(void);

#ifdef __cplusplus
}
#endif

#endif /* _PMWIFI_H_ */

/** @} end of group BOARD_EMSK_DRV_PMODWIFI */