/**********************************************************************
 *
 * Copyright(c) 2008 Imagination Technologies Ltd. All rights reserved.
 * 
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope it will be useful but, except 
 * as otherwise stated in writing, without any warranty; without even the 
 * implied warranty of merchantability or fitness for a particular purpose. 
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
 * 
 * The full GNU General Public License is included in this distribution in
 * the file called "COPYING".
 *
 * Contact Information:
 * Imagination Technologies Ltd. <gpl-support@imgtec.com>
 * Home Park Estate, Kings Langley, Herts, WD4 8LZ, UK 
 *
 ******************************************************************************/

#ifndef _SGX540DEFS_KM_H_
#define _SGX540DEFS_KM_H_

#define EUR_CR_CLKGATECTL                   0x0000
#define EUR_CR_CLKGATECTL_ISP_CLKG_MASK     0x00000003U
#define EUR_CR_CLKGATECTL_ISP_CLKG_SHIFT    0
#define EUR_CR_CLKGATECTL_ISP2_CLKG_MASK    0x0000000CU
#define EUR_CR_CLKGATECTL_ISP2_CLKG_SHIFT   2
#define EUR_CR_CLKGATECTL_TSP_CLKG_MASK     0x00000030U
#define EUR_CR_CLKGATECTL_TSP_CLKG_SHIFT    4
#define EUR_CR_CLKGATECTL_TE_CLKG_MASK      0x000000C0U
#define EUR_CR_CLKGATECTL_TE_CLKG_SHIFT     6
#define EUR_CR_CLKGATECTL_MTE_CLKG_MASK     0x00000300U
#define EUR_CR_CLKGATECTL_MTE_CLKG_SHIFT    8
#define EUR_CR_CLKGATECTL_DPM_CLKG_MASK     0x00000C00U
#define EUR_CR_CLKGATECTL_DPM_CLKG_SHIFT    10
#define EUR_CR_CLKGATECTL_VDM_CLKG_MASK     0x00003000U
#define EUR_CR_CLKGATECTL_VDM_CLKG_SHIFT    12
#define EUR_CR_CLKGATECTL_PDS_CLKG_MASK     0x0000C000U
#define EUR_CR_CLKGATECTL_PDS_CLKG_SHIFT    14
#define EUR_CR_CLKGATECTL_IDXFIFO_CLKG_MASK 0x00030000U
#define EUR_CR_CLKGATECTL_IDXFIFO_CLKG_SHIFT 16
#define EUR_CR_CLKGATECTL_TA_CLKG_MASK      0x000C0000U
#define EUR_CR_CLKGATECTL_TA_CLKG_SHIFT     18
#define EUR_CR_CLKGATECTL_AUTO_MAN_REG_MASK 0x01000000U
#define EUR_CR_CLKGATECTL_AUTO_MAN_REG_SHIFT 24
#define EUR_CR_CLKGATECTL_SYSTEM_CLKG_MASK  0x10000000U
#define EUR_CR_CLKGATECTL_SYSTEM_CLKG_SHIFT 28
#define EUR_CR_CLKGATECTL2                  0x0004
#define EUR_CR_CLKGATECTL2_PBE_CLKG_MASK    0x00000003U
#define EUR_CR_CLKGATECTL2_PBE_CLKG_SHIFT   0
#define EUR_CR_CLKGATECTL2_CACHEL2_CLKG_MASK 0x0000000CU
#define EUR_CR_CLKGATECTL2_CACHEL2_CLKG_SHIFT 2
#define EUR_CR_CLKGATECTL2_UCACHEL2_CLKG_MASK 0x00000030U
#define EUR_CR_CLKGATECTL2_UCACHEL2_CLKG_SHIFT 4
#define EUR_CR_CLKGATECTL2_USE0_CLKG_MASK   0x000000C0U
#define EUR_CR_CLKGATECTL2_USE0_CLKG_SHIFT  6
#define EUR_CR_CLKGATECTL2_ITR0_CLKG_MASK   0x00000300U
#define EUR_CR_CLKGATECTL2_ITR0_CLKG_SHIFT  8
#define EUR_CR_CLKGATECTL2_TEX0_CLKG_MASK   0x00000C00U
#define EUR_CR_CLKGATECTL2_TEX0_CLKG_SHIFT  10
#define EUR_CR_CLKGATECTL2_MADD0_CLKG_MASK  0x00003000U
#define EUR_CR_CLKGATECTL2_MADD0_CLKG_SHIFT 12
#define EUR_CR_CLKGATECTL2_USE1_CLKG_MASK   0x0000C000U
#define EUR_CR_CLKGATECTL2_USE1_CLKG_SHIFT  14
#define EUR_CR_CLKGATECTL2_ITR1_CLKG_MASK   0x00030000U
#define EUR_CR_CLKGATECTL2_ITR1_CLKG_SHIFT  16
#define EUR_CR_CLKGATECTL2_TEX1_CLKG_MASK   0x000C0000U
#define EUR_CR_CLKGATECTL2_TEX1_CLKG_SHIFT  18
#define EUR_CR_CLKGATECTL2_MADD1_CLKG_MASK  0x00300000U
#define EUR_CR_CLKGATECTL2_MADD1_CLKG_SHIFT 20
#define EUR_CR_CLKGATESTATUS                0x0008
#define EUR_CR_CLKGATESTATUS_ISP_CLKS_MASK  0x00000001U
#define EUR_CR_CLKGATESTATUS_ISP_CLKS_SHIFT 0
#define EUR_CR_CLKGATESTATUS_ISP2_CLKS_MASK 0x00000002U
#define EUR_CR_CLKGATESTATUS_ISP2_CLKS_SHIFT 1
#define EUR_CR_CLKGATESTATUS_TSP_CLKS_MASK  0x00000004U
#define EUR_CR_CLKGATESTATUS_TSP_CLKS_SHIFT 2
#define EUR_CR_CLKGATESTATUS_TE_CLKS_MASK   0x00000008U
#define EUR_CR_CLKGATESTATUS_TE_CLKS_SHIFT  3
#define EUR_CR_CLKGATESTATUS_MTE_CLKS_MASK  0x00000010U
#define EUR_CR_CLKGATESTATUS_MTE_CLKS_SHIFT 4
#define EUR_CR_CLKGATESTATUS_DPM_CLKS_MASK  0x00000020U
#define EUR_CR_CLKGATESTATUS_DPM_CLKS_SHIFT 5
#define EUR_CR_CLKGATESTATUS_VDM_CLKS_MASK  0x00000040U
#define EUR_CR_CLKGATESTATUS_VDM_CLKS_SHIFT 6
#define EUR_CR_CLKGATESTATUS_PDS_CLKS_MASK  0x00000080U
#define EUR_CR_CLKGATESTATUS_PDS_CLKS_SHIFT 7
#define EUR_CR_CLKGATESTATUS_PBE_CLKS_MASK  0x00000100U
#define EUR_CR_CLKGATESTATUS_PBE_CLKS_SHIFT 8
#define EUR_CR_CLKGATESTATUS_CACHEL2_CLKS_MASK 0x00000200U
#define EUR_CR_CLKGATESTATUS_CACHEL2_CLKS_SHIFT 9
#define EUR_CR_CLKGATESTATUS_UCACHEL2_CLKS_MASK 0x00000400U
#define EUR_CR_CLKGATESTATUS_UCACHEL2_CLKS_SHIFT 10
#define EUR_CR_CLKGATESTATUS_USE0_CLKS_MASK 0x00000800U
#define EUR_CR_CLKGATESTATUS_USE0_CLKS_SHIFT 11
#define EUR_CR_CLKGATESTATUS_ITR0_CLKS_MASK 0x00001000U
#define EUR_CR_CLKGATESTATUS_ITR0_CLKS_SHIFT 12
#define EUR_CR_CLKGATESTATUS_TEX0_CLKS_MASK 0x00002000U
#define EUR_CR_CLKGATESTATUS_TEX0_CLKS_SHIFT 13
#define EUR_CR_CLKGATESTATUS_MADD0_CLKS_MASK 0x00004000U
#define EUR_CR_CLKGATESTATUS_MADD0_CLKS_SHIFT 14
#define EUR_CR_CLKGATESTATUS_USE1_CLKS_MASK 0x00008000U
#define EUR_CR_CLKGATESTATUS_USE1_CLKS_SHIFT 15
#define EUR_CR_CLKGATESTATUS_ITR1_CLKS_MASK 0x00010000U
#define EUR_CR_CLKGATESTATUS_ITR1_CLKS_SHIFT 16
#define EUR_CR_CLKGATESTATUS_TEX1_CLKS_MASK 0x00020000U
#define EUR_CR_CLKGATESTATUS_TEX1_CLKS_SHIFT 17
#define EUR_CR_CLKGATESTATUS_MADD1_CLKS_MASK 0x00040000U
#define EUR_CR_CLKGATESTATUS_MADD1_CLKS_SHIFT 18
#define EUR_CR_CLKGATESTATUS_IDXFIFO_CLKS_MASK 0x00080000U
#define EUR_CR_CLKGATESTATUS_IDXFIFO_CLKS_SHIFT 19
#define EUR_CR_CLKGATESTATUS_TA_CLKS_MASK   0x00100000U
#define EUR_CR_CLKGATESTATUS_TA_CLKS_SHIFT  20
#define EUR_CR_CLKGATECTLOVR                0x000C
#define EUR_CR_CLKGATECTLOVR_ISP_CLKO_MASK  0x00000003U
#define EUR_CR_CLKGATECTLOVR_ISP_CLKO_SHIFT 0
#define EUR_CR_CLKGATECTLOVR_ISP2_CLKO_MASK 0x0000000CU
#define EUR_CR_CLKGATECTLOVR_ISP2_CLKO_SHIFT 2
#define EUR_CR_CLKGATECTLOVR_TSP_CLKO_MASK  0x00000030U
#define EUR_CR_CLKGATECTLOVR_TSP_CLKO_SHIFT 4
#define EUR_CR_CLKGATECTLOVR_TE_CLKO_MASK   0x000000C0U
#define EUR_CR_CLKGATECTLOVR_TE_CLKO_SHIFT  6
#define EUR_CR_CLKGATECTLOVR_MTE_CLKO_MASK  0x00000300U
#define EUR_CR_CLKGATECTLOVR_MTE_CLKO_SHIFT 8
#define EUR_CR_CLKGATECTLOVR_DPM_CLKO_MASK  0x00000C00U
#define EUR_CR_CLKGATECTLOVR_DPM_CLKO_SHIFT 10
#define EUR_CR_CLKGATECTLOVR_VDM_CLKO_MASK  0x00003000U
#define EUR_CR_CLKGATECTLOVR_VDM_CLKO_SHIFT 12
#define EUR_CR_CLKGATECTLOVR_PDS_CLKO_MASK  0x0000C000U
#define EUR_CR_CLKGATECTLOVR_PDS_CLKO_SHIFT 14
#define EUR_CR_CLKGATECTLOVR_IDXFIFO_CLKO_MASK 0x00030000U
#define EUR_CR_CLKGATECTLOVR_IDXFIFO_CLKO_SHIFT 16
#define EUR_CR_CLKGATECTLOVR_TA_CLKO_MASK   0x000C0000U
#define EUR_CR_CLKGATECTLOVR_TA_CLKO_SHIFT  18
#define EUR_CR_POWER                        0x001C
#define EUR_CR_POWER_PIPE_DISABLE_MASK      0x00000001U
#define EUR_CR_POWER_PIPE_DISABLE_SHIFT     0
#define EUR_CR_CORE_ID                      0x0020
#define EUR_CR_CORE_ID_CONFIG_MASK          0x0000FFFFU
#define EUR_CR_CORE_ID_CONFIG_SHIFT         0
#define EUR_CR_CORE_ID_ID_MASK              0xFFFF0000U
#define EUR_CR_CORE_ID_ID_SHIFT             16
#define EUR_CR_CORE_REVISION                0x0024
#define EUR_CR_CORE_REVISION_MAINTENANCE_MASK 0x000000FFU
#define EUR_CR_CORE_REVISION_MAINTENANCE_SHIFT 0
#define EUR_CR_CORE_REVISION_MINOR_MASK     0x0000FF00U
#define EUR_CR_CORE_REVISION_MINOR_SHIFT    8
#define EUR_CR_CORE_REVISION_MAJOR_MASK     0x00FF0000U
#define EUR_CR_CORE_REVISION_MAJOR_SHIFT    16
#define EUR_CR_CORE_REVISION_DESIGNER_MASK  0xFF000000U
#define EUR_CR_CORE_REVISION_DESIGNER_SHIFT 24
#define EUR_CR_DESIGNER_REV_FIELD1          0x0028
#define EUR_CR_DESIGNER_REV_FIELD1_DESIGNER_REV_FIELD1_MASK 0xFFFFFFFFU
#define EUR_CR_DESIGNER_REV_FIELD1_DESIGNER_REV_FIELD1_SHIFT 0
#define EUR_CR_DESIGNER_REV_FIELD2          0x002C
#define EUR_CR_DESIGNER_REV_FIELD2_DESIGNER_REV_FIELD2_MASK 0xFFFFFFFFU
#define EUR_CR_DESIGNER_REV_FIELD2_DESIGNER_REV_FIELD2_SHIFT 0
#define EUR_CR_SOFT_RESET                   0x0080
#define EUR_CR_SOFT_RESET_BIF_RESET_MASK    0x00000001U
#define EUR_CR_SOFT_RESET_BIF_RESET_SHIFT   0
#define EUR_CR_SOFT_RESET_VDM_RESET_MASK    0x00000002U
#define EUR_CR_SOFT_RESET_VDM_RESET_SHIFT   1
#define EUR_CR_SOFT_RESET_DPM_RESET_MASK    0x00000004U
#define EUR_CR_SOFT_RESET_DPM_RESET_SHIFT   2
#define EUR_CR_SOFT_RESET_TE_RESET_MASK     0x00000008U
#define EUR_CR_SOFT_RESET_TE_RESET_SHIFT    3
#define EUR_CR_SOFT_RESET_MTE_RESET_MASK    0x00000010U
#define EUR_CR_SOFT_RESET_MTE_RESET_SHIFT   4
#define EUR_CR_SOFT_RESET_ISP_RESET_MASK    0x00000020U
#define EUR_CR_SOFT_RESET_ISP_RESET_SHIFT   5
#define EUR_CR_SOFT_RESET_ISP2_RESET_MASK   0x00000040U
#define EUR_CR_SOFT_RESET_ISP2_RESET_SHIFT  6
#define EUR_CR_SOFT_RESET_TSP_RESET_MASK    0x00000080U
#define EUR_CR_SOFT_RESET_TSP_RESET_SHIFT   7
#define EUR_CR_SOFT_RESET_PDS_RESET_MASK    0x00000100U
#define EUR_CR_SOFT_RESET_PDS_RESET_SHIFT   8
#define EUR_CR_SOFT_RESET_PBE_RESET_MASK    0x00000200U
#define EUR_CR_SOFT_RESET_PBE_RESET_SHIFT   9
#define EUR_CR_SOFT_RESET_CACHEL2_RESET_MASK 0x00000400U
#define EUR_CR_SOFT_RESET_CACHEL2_RESET_SHIFT 10
#define EUR_CR_SOFT_RESET_UCACHEL2_RESET_MASK 0x00000800U
#define EUR_CR_SOFT_RESET_UCACHEL2_RESET_SHIFT 11
#define EUR_CR_SOFT_RESET_MADD_RESET_MASK   0x00001000U
#define EUR_CR_SOFT_RESET_MADD_RESET_SHIFT  12
#define EUR_CR_SOFT_RESET_ITR_RESET_MASK    0x00002000U
#define EUR_CR_SOFT_RESET_ITR_RESET_SHIFT   13
#define EUR_CR_SOFT_RESET_TEX_RESET_MASK    0x00004000U
#define EUR_CR_SOFT_RESET_TEX_RESET_SHIFT   14
#define EUR_CR_SOFT_RESET_USE_RESET_MASK    0x00008000U
#define EUR_CR_SOFT_RESET_USE_RESET_SHIFT   15
#define EUR_CR_SOFT_RESET_IDXFIFO_RESET_MASK 0x00010000U
#define EUR_CR_SOFT_RESET_IDXFIFO_RESET_SHIFT 16
#define EUR_CR_SOFT_RESET_TA_RESET_MASK     0x00020000U
#define EUR_CR_SOFT_RESET_TA_RESET_SHIFT    17
#define EUR_CR_EVENT_HOST_ENABLE2           0x0110
#define EUR_CR_EVENT_HOST_ENABLE2_TRIG_TA_MASK 0x00000010U
#define EUR_CR_EVENT_HOST_ENABLE2_TRIG_TA_SHIFT 4
#define EUR_CR_EVENT_HOST_ENABLE2_TRIG_3D_MASK 0x00000008U
#define EUR_CR_EVENT_HOST_ENABLE2_TRIG_3D_SHIFT 3
#define EUR_CR_EVENT_HOST_ENABLE2_TRIG_DL_MASK 0x00000004U
#define EUR_CR_EVENT_HOST_ENABLE2_TRIG_DL_SHIFT 2
#define EUR_CR_EVENT_HOST_ENABLE2_DPM_3D_FREE_LOAD_MASK 0x00000002U
#define EUR_CR_EVENT_HOST_ENABLE2_DPM_3D_FREE_LOAD_SHIFT 1
#define EUR_CR_EVENT_HOST_ENABLE2_DPM_TA_FREE_LOAD_MASK 0x00000001U
#define EUR_CR_EVENT_HOST_ENABLE2_DPM_TA_FREE_LOAD_SHIFT 0
#define EUR_CR_EVENT_HOST_CLEAR2            0x0114
#define EUR_CR_EVENT_HOST_CLEAR2_TRIG_TA_MASK 0x00000010U
#define EUR_CR_EVENT_HOST_CLEAR2_TRIG_TA_SHIFT 4
#define EUR_CR_EVENT_HOST_CLEAR2_TRIG_3D_MASK 0x00000008U
#define EUR_CR_EVENT_HOST_CLEAR2_TRIG_3D_SHIFT 3
#define EUR_CR_EVENT_HOST_CLEAR2_TRIG_DL_MASK 0x00000004U
#define EUR_CR_EVENT_HOST_CLEAR2_TRIG_DL_SHIFT 2
#define EUR_CR_EVENT_HOST_CLEAR2_DPM_3D_FREE_LOAD_MASK 0x00000002U
#define EUR_CR_EVENT_HOST_CLEAR2_DPM_3D_FREE_LOAD_SHIFT 1
#define EUR_CR_EVENT_HOST_CLEAR2_DPM_TA_FREE_LOAD_MASK 0x00000001U
#define EUR_CR_EVENT_HOST_CLEAR2_DPM_TA_FREE_LOAD_SHIFT 0
#define EUR_CR_EVENT_STATUS2                0x0118
#define EUR_CR_EVENT_STATUS2_TRIG_TA_MASK   0x00000010U
#define EUR_CR_EVENT_STATUS2_TRIG_TA_SHIFT  4
#define EUR_CR_EVENT_STATUS2_TRIG_3D_MASK   0x00000008U
#define EUR_CR_EVENT_STATUS2_TRIG_3D_SHIFT  3
#define EUR_CR_EVENT_STATUS2_TRIG_DL_MASK   0x00000004U
#define EUR_CR_EVENT_STATUS2_TRIG_DL_SHIFT  2
#define EUR_CR_EVENT_STATUS2_DPM_3D_FREE_LOAD_MASK 0x00000002U
#define EUR_CR_EVENT_STATUS2_DPM_3D_FREE_LOAD_SHIFT 1
#define EUR_CR_EVENT_STATUS2_DPM_TA_FREE_LOAD_MASK 0x00000001U
#define EUR_CR_EVENT_STATUS2_DPM_TA_FREE_LOAD_SHIFT 0
#define EUR_CR_EVENT_STATUS                 0x012CU
#define EUR_CR_EVENT_STATUS_MASTER_INTERRUPT_MASK 0x80000000U
#define EUR_CR_EVENT_STATUS_MASTER_INTERRUPT_SHIFT 31
#define EUR_CR_EVENT_STATUS_TIMER_MASK      0x20000000U
#define EUR_CR_EVENT_STATUS_TIMER_SHIFT     29
#define EUR_CR_EVENT_STATUS_TA_DPM_FAULT_MASK 0x10000000U
#define EUR_CR_EVENT_STATUS_TA_DPM_FAULT_SHIFT 28
#define EUR_CR_EVENT_STATUS_TWOD_COMPLETE_MASK 0x08000000U
#define EUR_CR_EVENT_STATUS_TWOD_COMPLETE_SHIFT 27
#define EUR_CR_EVENT_STATUS_MADD_CACHE_INVALCOMPLETE_MASK 0x04000000U
#define EUR_CR_EVENT_STATUS_MADD_CACHE_INVALCOMPLETE_SHIFT 26
#define EUR_CR_EVENT_STATUS_DPM_OUT_OF_MEMORY_ZLS_MASK 0x02000000U
#define EUR_CR_EVENT_STATUS_DPM_OUT_OF_MEMORY_ZLS_SHIFT 25
#define EUR_CR_EVENT_STATUS_DPM_TA_MEM_FREE_MASK 0x01000000U
#define EUR_CR_EVENT_STATUS_DPM_TA_MEM_FREE_SHIFT 24
#define EUR_CR_EVENT_STATUS_ISP_END_TILE_MASK 0x00800000U
#define EUR_CR_EVENT_STATUS_ISP_END_TILE_SHIFT 23
#define EUR_CR_EVENT_STATUS_DPM_INITEND_MASK 0x00400000U
#define EUR_CR_EVENT_STATUS_DPM_INITEND_SHIFT 22
#define EUR_CR_EVENT_STATUS_OTPM_LOADED_MASK 0x00200000U
#define EUR_CR_EVENT_STATUS_OTPM_LOADED_SHIFT 21
#define EUR_CR_EVENT_STATUS_OTPM_INV_MASK   0x00100000U
#define EUR_CR_EVENT_STATUS_OTPM_INV_SHIFT  20
#define EUR_CR_EVENT_STATUS_OTPM_FLUSHED_MASK 0x00080000U
#define EUR_CR_EVENT_STATUS_OTPM_FLUSHED_SHIFT 19
#define EUR_CR_EVENT_STATUS_PIXELBE_END_RENDER_MASK 0x00040000U
#define EUR_CR_EVENT_STATUS_PIXELBE_END_RENDER_SHIFT 18
#define EUR_CR_EVENT_STATUS_ISP_HALT_MASK   0x00020000U
#define EUR_CR_EVENT_STATUS_ISP_HALT_SHIFT  17
#define EUR_CR_EVENT_STATUS_ISP_VISIBILITY_FAIL_MASK 0x00010000U
#define EUR_CR_EVENT_STATUS_ISP_VISIBILITY_FAIL_SHIFT 16
#define EUR_CR_EVENT_STATUS_BREAKPOINT_MASK 0x00008000U
#define EUR_CR_EVENT_STATUS_BREAKPOINT_SHIFT 15
#define EUR_CR_EVENT_STATUS_SW_EVENT_MASK   0x00004000U
#define EUR_CR_EVENT_STATUS_SW_EVENT_SHIFT  14
#define EUR_CR_EVENT_STATUS_TA_FINISHED_MASK 0x00002000U
#define EUR_CR_EVENT_STATUS_TA_FINISHED_SHIFT 13
#define EUR_CR_EVENT_STATUS_TA_TERMINATE_MASK 0x00001000U
#define EUR_CR_EVENT_STATUS_TA_TERMINATE_SHIFT 12
#define EUR_CR_EVENT_STATUS_TPC_CLEAR_MASK  0x00000800U
#define EUR_CR_EVENT_STATUS_TPC_CLEAR_SHIFT 11
#define EUR_CR_EVENT_STATUS_TPC_FLUSH_MASK  0x00000400U
#define EUR_CR_EVENT_STATUS_TPC_FLUSH_SHIFT 10
#define EUR_CR_EVENT_STATUS_DPM_CONTROL_CLEAR_MASK 0x00000200U
#define EUR_CR_EVENT_STATUS_DPM_CONTROL_CLEAR_SHIFT 9
#define EUR_CR_EVENT_STATUS_DPM_CONTROL_LOAD_MASK 0x00000100U
#define EUR_CR_EVENT_STATUS_DPM_CONTROL_LOAD_SHIFT 8
#define EUR_CR_EVENT_STATUS_DPM_CONTROL_STORE_MASK 0x00000080U
#define EUR_CR_EVENT_STATUS_DPM_CONTROL_STORE_SHIFT 7
#define EUR_CR_EVENT_STATUS_DPM_STATE_CLEAR_MASK 0x00000040U
#define EUR_CR_EVENT_STATUS_DPM_STATE_CLEAR_SHIFT 6
#define EUR_CR_EVENT_STATUS_DPM_STATE_LOAD_MASK 0x00000020U
#define EUR_CR_EVENT_STATUS_DPM_STATE_LOAD_SHIFT 5
#define EUR_CR_EVENT_STATUS_DPM_STATE_STORE_MASK 0x00000010U
#define EUR_CR_EVENT_STATUS_DPM_STATE_STORE_SHIFT 4
#define EUR_CR_EVENT_STATUS_DPM_REACHED_MEM_THRESH_MASK 0x00000008U
#define EUR_CR_EVENT_STATUS_DPM_REACHED_MEM_THRESH_SHIFT 3
#define EUR_CR_EVENT_STATUS_DPM_OUT_OF_MEMORY_GBL_MASK 0x00000004U
#define EUR_CR_EVENT_STATUS_DPM_OUT_OF_MEMORY_GBL_SHIFT 2
#define EUR_CR_EVENT_STATUS_DPM_OUT_OF_MEMORY_MT_MASK 0x00000002U
#define EUR_CR_EVENT_STATUS_DPM_OUT_OF_MEMORY_MT_SHIFT 1
#define EUR_CR_EVENT_STATUS_DPM_3D_MEM_FREE_MASK 0x00000001U
#define EUR_CR_EVENT_STATUS_DPM_3D_MEM_FREE_SHIFT 0
#define EUR_CR_EVENT_HOST_ENABLE            0x0130
#define EUR_CR_EVENT_HOST_ENABLE_MASTER_INTERRUPT_MASK 0x80000000U
#define EUR_CR_EVENT_HOST_ENABLE_MASTER_INTERRUPT_SHIFT 31
#define EUR_CR_EVENT_HOST_ENABLE_TIMER_MASK 0x20000000U
#define EUR_CR_EVENT_HOST_ENABLE_TIMER_SHIFT 29
#define EUR_CR_EVENT_HOST_ENABLE_TA_DPM_FAULT_MASK 0x10000000U
#define EUR_CR_EVENT_HOST_ENABLE_TA_DPM_FAULT_SHIFT 28
#define EUR_CR_EVENT_HOST_ENABLE_TWOD_COMPLETE_MASK 0x08000000U
#define EUR_CR_EVENT_HOST_ENABLE_TWOD_COMPLETE_SHIFT 27
#define EUR_CR_EVENT_HOST_ENABLE_MADD_CACHE_INVALCOMPLETE_MASK 0x04000000U
#define EUR_CR_EVENT_HOST_ENABLE_MADD_CACHE_INVALCOMPLETE_SHIFT 26
#define EUR_CR_EVENT_HOST_ENABLE_DPM_OUT_OF_MEMORY_ZLS_MASK 0x02000000U
#define EUR_CR_EVENT_HOST_ENABLE_DPM_OUT_OF_MEMORY_ZLS_SHIFT 25
#define EUR_CR_EVENT_HOST_ENABLE_DPM_TA_MEM_FREE_MASK 0x01000000U
#define EUR_CR_EVENT_HOST_ENABLE_DPM_TA_MEM_FREE_SHIFT 24
#define EUR_CR_EVENT_HOST_ENABLE_ISP_END_TILE_MASK 0x00800000U
#define EUR_CR_EVENT_HOST_ENABLE_ISP_END_TILE_SHIFT 23
#define EUR_CR_EVENT_HOST_ENABLE_DPM_INITEND_MASK 0x00400000U
#define EUR_CR_EVENT_HOST_ENABLE_DPM_INITEND_SHIFT 22
#define EUR_CR_EVENT_HOST_ENABLE_OTPM_LOADED_MASK 0x00200000U
#define EUR_CR_EVENT_HOST_ENABLE_OTPM_LOADED_SHIFT 21
#define EUR_CR_EVENT_HOST_ENABLE_OTPM_INV_MASK 0x00100000U
#define EUR_CR_EVENT_HOST_ENABLE_OTPM_INV_SHIFT 20
#define EUR_CR_EVENT_HOST_ENABLE_OTPM_FLUSHED_MASK 0x00080000U
#define EUR_CR_EVENT_HOST_ENABLE_OTPM_FLUSHED_SHIFT 19
#define EUR_CR_EVENT_HOST_ENABLE_PIXELBE_END_RENDER_MASK 0x00040000U
#define EUR_CR_EVENT_HOST_ENABLE_PIXELBE_END_RENDER_SHIFT 18
#define EUR_CR_EVENT_HOST_ENABLE_ISP_HALT_MASK 0x00020000U
#define EUR_CR_EVENT_HOST_ENABLE_ISP_HALT_SHIFT 17
#define EUR_CR_EVENT_HOST_ENABLE_ISP_VISIBILITY_FAIL_MASK 0x00010000U
#define EUR_CR_EVENT_HOST_ENABLE_ISP_VISIBILITY_FAIL_SHIFT 16
#define EUR_CR_EVENT_HOST_ENABLE_BREAKPOINT_MASK 0x00008000U
#define EUR_CR_EVENT_HOST_ENABLE_BREAKPOINT_SHIFT 15
#define EUR_CR_EVENT_HOST_ENABLE_SW_EVENT_MASK 0x00004000U
#define EUR_CR_EVENT_HOST_ENABLE_SW_EVENT_SHIFT 14
#define EUR_CR_EVENT_HOST_ENABLE_TA_FINISHED_MASK 0x00002000U
#define EUR_CR_EVENT_HOST_ENABLE_TA_FINISHED_SHIFT 13
#define EUR_CR_EVENT_HOST_ENABLE_TA_TERMINATE_MASK 0x00001000U
#define EUR_CR_EVENT_HOST_ENABLE_TA_TERMINATE_SHIFT 12
#define EUR_CR_EVENT_HOST_ENABLE_TPC_CLEAR_MASK 0x00000800U
#define EUR_CR_EVENT_HOST_ENABLE_TPC_CLEAR_SHIFT 11
#define EUR_CR_EVENT_HOST_ENABLE_TPC_FLUSH_MASK 0x00000400U
#define EUR_CR_EVENT_HOST_ENABLE_TPC_FLUSH_SHIFT 10
#define EUR_CR_EVENT_HOST_ENABLE_DPM_CONTROL_CLEAR_MASK 0x00000200U
#define EUR_CR_EVENT_HOST_ENABLE_DPM_CONTROL_CLEAR_SHIFT 9
#define EUR_CR_EVENT_HOST_ENABLE_DPM_CONTROL_LOAD_MASK 0x00000100U
#define EUR_CR_EVENT_HOST_ENABLE_DPM_CONTROL_LOAD_SHIFT 8
#define EUR_CR_EVENT_HOST_ENABLE_DPM_CONTROL_STORE_MASK 0x00000080U
#define EUR_CR_EVENT_HOST_ENABLE_DPM_CONTROL_STORE_SHIFT 7
#define EUR_CR_EVENT_HOST_ENABLE_DPM_STATE_CLEAR_MASK 0x00000040U
#define EUR_CR_EVENT_HOST_ENABLE_DPM_STATE_CLEAR_SHIFT 6
#define EUR_CR_EVENT_HOST_ENABLE_DPM_STATE_LOAD_MASK 0x00000020U
#define EUR_CR_EVENT_HOST_ENABLE_DPM_STATE_LOAD_SHIFT 5
#define EUR_CR_EVENT_HOST_ENABLE_DPM_STATE_STORE_MASK 0x00000010U
#define EUR_CR_EVENT_HOST_ENABLE_DPM_STATE_STORE_SHIFT 4
#define EUR_CR_EVENT_HOST_ENABLE_DPM_REACHED_MEM_THRESH_MASK 0x00000008U
#define EUR_CR_EVENT_HOST_ENABLE_DPM_REACHED_MEM_THRESH_SHIFT 3
#define EUR_CR_EVENT_HOST_ENABLE_DPM_OUT_OF_MEMORY_GBL_MASK 0x00000004U
#define EUR_CR_EVENT_HOST_ENABLE_DPM_OUT_OF_MEMORY_GBL_SHIFT 2
#define EUR_CR_EVENT_HOST_ENABLE_DPM_OUT_OF_MEMORY_MT_MASK 0x00000002U
#define EUR_CR_EVENT_HOST_ENABLE_DPM_OUT_OF_MEMORY_MT_SHIFT 1
#define EUR_CR_EVENT_HOST_ENABLE_DPM_3D_MEM_FREE_MASK 0x00000001U
#define EUR_CR_EVENT_HOST_ENABLE_DPM_3D_MEM_FREE_SHIFT 0
#define EUR_CR_EVENT_HOST_CLEAR             0x0134
#define EUR_CR_EVENT_HOST_CLEAR_MASTER_INTERRUPT_MASK 0x80000000U
#define EUR_CR_EVENT_HOST_CLEAR_MASTER_INTERRUPT_SHIFT 31
#define EUR_CR_EVENT_HOST_CLEAR_TIMER_MASK  0x20000000U
#define EUR_CR_EVENT_HOST_CLEAR_TIMER_SHIFT 29
#define EUR_CR_EVENT_HOST_CLEAR_TA_DPM_FAULT_MASK 0x10000000U
#define EUR_CR_EVENT_HOST_CLEAR_TA_DPM_FAULT_SHIFT 28
#define EUR_CR_EVENT_HOST_CLEAR_TWOD_COMPLETE_MASK 0x08000000U
#define EUR_CR_EVENT_HOST_CLEAR_TWOD_COMPLETE_SHIFT 27
#define EUR_CR_EVENT_HOST_CLEAR_MADD_CACHE_INVALCOMPLETE_MASK 0x04000000U
#define EUR_CR_EVENT_HOST_CLEAR_MADD_CACHE_INVALCOMPLETE_SHIFT 26
#define EUR_CR_EVENT_HOST_CLEAR_DPM_OUT_OF_MEMORY_ZLS_MASK 0x02000000U
#define EUR_CR_EVENT_HOST_CLEAR_DPM_OUT_OF_MEMORY_ZLS_SHIFT 25
#define EUR_CR_EVENT_HOST_CLEAR_DPM_TA_MEM_FREE_MASK 0x01000000U
#define EUR_CR_EVENT_HOST_CLEAR_DPM_TA_MEM_FREE_SHIFT 24
#define EUR_CR_EVENT_HOST_CLEAR_ISP_END_TILE_MASK 0x00800000U
#define EUR_CR_EVENT_HOST_CLEAR_ISP_END_TILE_SHIFT 23
#define EUR_CR_EVENT_HOST_CLEAR_DPM_INITEND_MASK 0x00400000U
#define EUR_CR_EVENT_HOST_CLEAR_DPM_INITEND_SHIFT 22
#define EUR_CR_EVENT_HOST_CLEAR_OTPM_LOADED_MASK 0x00200000U
#define EUR_CR_EVENT_HOST_CLEAR_OTPM_LOADED_SHIFT 21
#define EUR_CR_EVENT_HOST_CLEAR_OTPM_INV_MASK 0x00100000U
#define EUR_CR_EVENT_HOST_CLEAR_OTPM_INV_SHIFT 20
#define EUR_CR_EVENT_HOST_CLEAR_OTPM_FLUSHED_MASK 0x00080000U
#define EUR_CR_EVENT_HOST_CLEAR_OTPM_FLUSHED_SHIFT 19
#define EUR_CR_EVENT_HOST_CLEAR_PIXELBE_END_RENDER_MASK 0x00040000U
#define EUR_CR_EVENT_HOST_CLEAR_PIXELBE_END_RENDER_SHIFT 18
#define EUR_CR_EVENT_HOST_CLEAR_ISP_HALT_MASK 0x00020000U
#define EUR_CR_EVENT_HOST_CLEAR_ISP_HALT_SHIFT 17
#define EUR_CR_EVENT_HOST_CLEAR_ISP_VISIBILITY_FAIL_MASK 0x00010000U
#define EUR_CR_EVENT_HOST_CLEAR_ISP_VISIBILITY_FAIL_SHIFT 16
#define EUR_CR_EVENT_HOST_CLEAR_BREAKPOINT_MASK 0x00008000U
#define EUR_CR_EVENT_HOST_CLEAR_BREAKPOINT_SHIFT 15
#define EUR_CR_EVENT_HOST_CLEAR_SW_EVENT_MASK 0x00004000U
#define EUR_CR_EVENT_HOST_CLEAR_SW_EVENT_SHIFT 14
#define EUR_CR_EVENT_HOST_CLEAR_TA_FINISHED_MASK 0x00002000U
#define EUR_CR_EVENT_HOST_CLEAR_TA_FINISHED_SHIFT 13
#define EUR_CR_EVENT_HOST_CLEAR_TA_TERMINATE_MASK 0x00001000U
#define EUR_CR_EVENT_HOST_CLEAR_TA_TERMINATE_SHIFT 12
#define EUR_CR_EVENT_HOST_CLEAR_TPC_CLEAR_MASK 0x00000800U
#define EUR_CR_EVENT_HOST_CLEAR_TPC_CLEAR_SHIFT 11
#define EUR_CR_EVENT_HOST_CLEAR_TPC_FLUSH_MASK 0x00000400U
#define EUR_CR_EVENT_HOST_CLEAR_TPC_FLUSH_SHIFT 10
#define EUR_CR_EVENT_HOST_CLEAR_DPM_CONTROL_CLEAR_MASK 0x00000200U
#define EUR_CR_EVENT_HOST_CLEAR_DPM_CONTROL_CLEAR_SHIFT 9
#define EUR_CR_EVENT_HOST_CLEAR_DPM_CONTROL_LOAD_MASK 0x00000100U
#define EUR_CR_EVENT_HOST_CLEAR_DPM_CONTROL_LOAD_SHIFT 8
#define EUR_CR_EVENT_HOST_CLEAR_DPM_CONTROL_STORE_MASK 0x00000080U
#define EUR_CR_EVENT_HOST_CLEAR_DPM_CONTROL_STORE_SHIFT 7
#define EUR_CR_EVENT_HOST_CLEAR_DPM_STATE_CLEAR_MASK 0x00000040U
#define EUR_CR_EVENT_HOST_CLEAR_DPM_STATE_CLEAR_SHIFT 6
#define EUR_CR_EVENT_HOST_CLEAR_DPM_STATE_LOAD_MASK 0x00000020U
#define EUR_CR_EVENT_HOST_CLEAR_DPM_STATE_LOAD_SHIFT 5
#define EUR_CR_EVENT_HOST_CLEAR_DPM_STATE_STORE_MASK 0x00000010U
#define EUR_CR_EVENT_HOST_CLEAR_DPM_STATE_STORE_SHIFT 4
#define EUR_CR_EVENT_HOST_CLEAR_DPM_REACHED_MEM_THRESH_MASK 0x00000008U
#define EUR_CR_EVENT_HOST_CLEAR_DPM_REACHED_MEM_THRESH_SHIFT 3
#define EUR_CR_EVENT_HOST_CLEAR_DPM_OUT_OF_MEMORY_GBL_MASK 0x00000004U
#define EUR_CR_EVENT_HOST_CLEAR_DPM_OUT_OF_MEMORY_GBL_SHIFT 2
#define EUR_CR_EVENT_HOST_CLEAR_DPM_OUT_OF_MEMORY_MT_MASK 0x00000002U
#define EUR_CR_EVENT_HOST_CLEAR_DPM_OUT_OF_MEMORY_MT_SHIFT 1
#define EUR_CR_EVENT_HOST_CLEAR_DPM_3D_MEM_FREE_MASK 0x00000001U
#define EUR_CR_EVENT_HOST_CLEAR_DPM_3D_MEM_FREE_SHIFT 0
#define EUR_CR_TIMER                        0x0144
#define EUR_CR_TIMER_VALUE_MASK             0xFFFFFFFFU
#define EUR_CR_TIMER_VALUE_SHIFT            0
#define EUR_CR_EVENT_KICK1                  0x0AB0
#define EUR_CR_EVENT_KICK1_NOW_MASK         0x000000FFU
#define EUR_CR_EVENT_KICK1_NOW_SHIFT        0
#define EUR_CR_PDS_EXEC_BASE                0x0AB8
#define EUR_CR_PDS_EXEC_BASE_ADDR_MASK      0x0FF00000U
#define EUR_CR_PDS_EXEC_BASE_ADDR_SHIFT     20
#define EUR_CR_EVENT_KICK2                  0x0AC0
#define EUR_CR_EVENT_KICK2_NOW_MASK         0x00000001U
#define EUR_CR_EVENT_KICK2_NOW_SHIFT        0
#define EUR_CR_EVENT_KICKER                 0x0AC4
#define EUR_CR_EVENT_KICKER_ADDRESS_MASK    0x0FFFFFF0U
#define EUR_CR_EVENT_KICKER_ADDRESS_SHIFT   4
#define EUR_CR_EVENT_KICK                   0x0AC8
#define EUR_CR_EVENT_KICK_NOW_MASK          0x00000001U
#define EUR_CR_EVENT_KICK_NOW_SHIFT         0
#define EUR_CR_EVENT_TIMER                  0x0ACC
#define EUR_CR_EVENT_TIMER_ENABLE_MASK      0x01000000U
#define EUR_CR_EVENT_TIMER_ENABLE_SHIFT     24
#define EUR_CR_EVENT_TIMER_VALUE_MASK       0x00FFFFFFU
#define EUR_CR_EVENT_TIMER_VALUE_SHIFT      0
#define EUR_CR_PDS_INV0                     0x0AD0
#define EUR_CR_PDS_INV0_DSC_MASK            0x00000001U
#define EUR_CR_PDS_INV0_DSC_SHIFT           0
#define EUR_CR_PDS_INV1                     0x0AD4
#define EUR_CR_PDS_INV1_DSC_MASK            0x00000001U
#define EUR_CR_PDS_INV1_DSC_SHIFT           0
#define EUR_CR_EVENT_KICK3                  0x0AD8
#define EUR_CR_EVENT_KICK3_NOW_MASK         0x00000001U
#define EUR_CR_EVENT_KICK3_NOW_SHIFT        0
#define EUR_CR_PDS_INV3                     0x0ADC
#define EUR_CR_PDS_INV3_DSC_MASK            0x00000001U
#define EUR_CR_PDS_INV3_DSC_SHIFT           0
#define EUR_CR_PDS_INV_CSC                  0x0AE0
#define EUR_CR_PDS_INV_CSC_KICK_MASK        0x00000001U
#define EUR_CR_PDS_INV_CSC_KICK_SHIFT       0
#define EUR_CR_PDS_PC_BASE                  0x0B2C
#define EUR_CR_PDS_PC_BASE_ADDRESS_MASK     0x00FFFFFFU
#define EUR_CR_PDS_PC_BASE_ADDRESS_SHIFT    0
#define EUR_CR_BIF_CTRL                     0x0C00
#define EUR_CR_BIF_CTRL_NOREORDER_MASK      0x00000001U
#define EUR_CR_BIF_CTRL_NOREORDER_SHIFT     0
#define EUR_CR_BIF_CTRL_PAUSE_MASK          0x00000002U
#define EUR_CR_BIF_CTRL_PAUSE_SHIFT         1
#define EUR_CR_BIF_CTRL_FLUSH_MASK          0x00000004U
#define EUR_CR_BIF_CTRL_FLUSH_SHIFT         2
#define EUR_CR_BIF_CTRL_INVALDC_MASK        0x00000008U
#define EUR_CR_BIF_CTRL_INVALDC_SHIFT       3
#define EUR_CR_BIF_CTRL_CLEAR_FAULT_MASK    0x00000010U
#define EUR_CR_BIF_CTRL_CLEAR_FAULT_SHIFT   4
#define EUR_CR_BIF_CTRL_MMU_BYPASS_CACHE_MASK 0x00000100U
#define EUR_CR_BIF_CTRL_MMU_BYPASS_CACHE_SHIFT 8
#define EUR_CR_BIF_CTRL_MMU_BYPASS_VDM_MASK 0x00000200U
#define EUR_CR_BIF_CTRL_MMU_BYPASS_VDM_SHIFT 9
#define EUR_CR_BIF_CTRL_MMU_BYPASS_TE_MASK  0x00000400U
#define EUR_CR_BIF_CTRL_MMU_BYPASS_TE_SHIFT 10
#define EUR_CR_BIF_CTRL_MMU_BYPASS_PBE_MASK 0x00001000U
#define EUR_CR_BIF_CTRL_MMU_BYPASS_PBE_SHIFT 12
#define EUR_CR_BIF_CTRL_MMU_BYPASS_TSPP_MASK 0x00002000U
#define EUR_CR_BIF_CTRL_MMU_BYPASS_TSPP_SHIFT 13
#define EUR_CR_BIF_CTRL_MMU_BYPASS_ISP_MASK 0x00004000U
#define EUR_CR_BIF_CTRL_MMU_BYPASS_ISP_SHIFT 14
#define EUR_CR_BIF_CTRL_MMU_BYPASS_USE_MASK 0x00008000U
#define EUR_CR_BIF_CTRL_MMU_BYPASS_USE_SHIFT 15
#define EUR_CR_BIF_INT_STAT                 0x0C04
#define EUR_CR_BIF_INT_STAT_FAULT_MASK      0x00003FFFU
#define EUR_CR_BIF_INT_STAT_FAULT_SHIFT     0
#define EUR_CR_BIF_INT_STAT_PF_N_RW_MASK    0x00004000U
#define EUR_CR_BIF_INT_STAT_PF_N_RW_SHIFT   14
#define EUR_CR_BIF_INT_STAT_FLUSH_COMPLETE_MASK 0x00008000U
#define EUR_CR_BIF_INT_STAT_FLUSH_COMPLETE_SHIFT 15
#define EUR_CR_BIF_FAULT                    0x0C08
#define EUR_CR_BIF_FAULT_SB_MASK            0x000001F0U
#define EUR_CR_BIF_FAULT_SB_SHIFT           4
#define EUR_CR_BIF_FAULT_ADDR_MASK          0x0FFFF000U
#define EUR_CR_BIF_FAULT_ADDR_SHIFT         12
#define EUR_CR_BIF_DIR_LIST_BASE0           0x0C84
#define EUR_CR_BIF_DIR_LIST_BASE0_ADDR_MASK 0xFFFFF000U
#define EUR_CR_BIF_DIR_LIST_BASE0_ADDR_SHIFT 12
#define EUR_CR_BIF_TA_REQ_BASE              0x0C90
#define EUR_CR_BIF_TA_REQ_BASE_ADDR_MASK    0x0FF00000U
#define EUR_CR_BIF_TA_REQ_BASE_ADDR_SHIFT   20
#define EUR_CR_BIF_MEM_REQ_STAT             0x0CA8
#define EUR_CR_BIF_MEM_REQ_STAT_READS_MASK  0x000000FFU
#define EUR_CR_BIF_MEM_REQ_STAT_READS_SHIFT 0
#define EUR_CR_BIF_3D_REQ_BASE              0x0CAC
#define EUR_CR_BIF_3D_REQ_BASE_ADDR_MASK    0x0FF00000U
#define EUR_CR_BIF_3D_REQ_BASE_ADDR_SHIFT   20
#define EUR_CR_BIF_ZLS_REQ_BASE             0x0CB0
#define EUR_CR_BIF_ZLS_REQ_BASE_ADDR_MASK   0x0FF00000U
#define EUR_CR_BIF_ZLS_REQ_BASE_ADDR_SHIFT  20
#define EUR_CR_2D_BLIT_STATUS               0x0E04
#define EUR_CR_2D_BLIT_STATUS_COMPLETE_MASK 0x00FFFFFFU
#define EUR_CR_2D_BLIT_STATUS_COMPLETE_SHIFT 0
#define EUR_CR_2D_BLIT_STATUS_BUSY_MASK     0x01000000U
#define EUR_CR_2D_BLIT_STATUS_BUSY_SHIFT    24
#define EUR_CR_2D_VIRTUAL_FIFO_0            0x0E10
#define EUR_CR_2D_VIRTUAL_FIFO_0_ENABLE_MASK 0x00000001U
#define EUR_CR_2D_VIRTUAL_FIFO_0_ENABLE_SHIFT 0
#define EUR_CR_2D_VIRTUAL_FIFO_0_FLOWRATE_MASK 0x0000000EU
#define EUR_CR_2D_VIRTUAL_FIFO_0_FLOWRATE_SHIFT 1
#define EUR_CR_2D_VIRTUAL_FIFO_0_FLOWRATE_DIV_MASK 0x00000FF0U
#define EUR_CR_2D_VIRTUAL_FIFO_0_FLOWRATE_DIV_SHIFT 4
#define EUR_CR_2D_VIRTUAL_FIFO_0_FLOWRATE_MUL_MASK 0x0000F000U
#define EUR_CR_2D_VIRTUAL_FIFO_0_FLOWRATE_MUL_SHIFT 12
#define EUR_CR_2D_VIRTUAL_FIFO_1            0x0E14
#define EUR_CR_2D_VIRTUAL_FIFO_1_MIN_ACC_MASK 0x00000FFFU
#define EUR_CR_2D_VIRTUAL_FIFO_1_MIN_ACC_SHIFT 0
#define EUR_CR_2D_VIRTUAL_FIFO_1_MAX_ACC_MASK 0x00FFF000U
#define EUR_CR_2D_VIRTUAL_FIFO_1_MAX_ACC_SHIFT 12
#define EUR_CR_2D_VIRTUAL_FIFO_1_MIN_METRIC_MASK 0xFF000000U
#define EUR_CR_2D_VIRTUAL_FIFO_1_MIN_METRIC_SHIFT 24
#define EUR_CR_USE_CODE_BASE(X)     (0x0A0C + (4 * (X)))
#define EUR_CR_USE_CODE_BASE_ADDR_MASK      0x00FFFFFFU
#define EUR_CR_USE_CODE_BASE_ADDR_SHIFT     0
#define EUR_CR_USE_CODE_BASE_DM_MASK        0x03000000U
#define EUR_CR_USE_CODE_BASE_DM_SHIFT       24
#define EUR_CR_USE_CODE_BASE_SIZE_UINT32 16
#define EUR_CR_USE_CODE_BASE_NUM_ENTRIES 16

#endif 

