/*
 * Copyright (c) 2011, Code Aurora Forum. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of Code Aurora Forum, Inc. nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#define PBL_ACCESS_2                          0x005
#define PBL_ACCESS_2_ENUM_TIMER_STOP          (1 << 1)

#define SYS_CONFIG_2                          0x007
#define SYS_CONFIG_2_BOOT_DONE                (1 << 6)
#define SYS_CONFIG_2_ADAPTIVE_BOOT_DISABLE    (1 << 7)

#define GPIO_CNTL_BASE                        0x150
#define GPIO_CNTL(n)                          (GPIO_CNTL_BASE + n)

/* GPIO Bank register programming */
#define PM_GPIO_BANK_MASK                0x70
#define PM_GPIO_BANK_SHIFT               4
#define PM_GPIO_WRITE                    0x80

/* Bank 0 */
#define PM_GPIO_VIN_MASK                 0x0E
#define PM_GPIO_VIN_SHIFT                1
#define PM_GPIO_MODE_ENABLE              0x01

/* Bank 1 */
#define PM_GPIO_MODE_MASK                0x0C
#define PM_GPIO_MODE_SHIFT               2
#define PM_GPIO_OUT_BUFFER_OPEN_DRAIN    0x02
#define PM_GPIO_OUT_INVERT               0x01

#define PM_GPIO_MODE_OFF                 3
#define PM_GPIO_MODE_OUTPUT              2
#define PM_GPIO_MODE_INPUT               0
#define PM_GPIO_MODE_BOTH                1

/* Bank 2 */
#define PM_GPIO_PULL_MASK                0x0E
#define PM_GPIO_PULL_SHIFT               1

/* Bank 3 */
#define PM_GPIO_OUT_STRENGTH_MASK        0x0C
#define PM_GPIO_OUT_STRENGTH_SHIFT       2
#define PM_GPIO_PIN_ENABLE               0x00
#define PM_GPIO_PIN_DISABLE              0x01

/* Bank 4 */
#define PM_GPIO_FUNC_MASK                0x0E
#define PM_GPIO_FUNC_SHIFT               1

/* Bank 5 */
#define PM_GPIO_NON_INT_POL_INV          0x08

