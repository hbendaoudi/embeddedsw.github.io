/*******************************************************************
*
* Copyright (C) 1986-2018 Xilinx, Inc. All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
* (a) running on a Xilinx device, or
* (b) that interact with a Xilinx device through a bus or interconnect.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*

*******************************************************************************/
#include "xparameters.h"
#include "xv_mix.h"

/*
* The configuration table for devices
*/

XV_mix_Config XV_mix_ConfigTable[XPAR_XV_MIX_NUM_INSTANCES] =
{
	{
		XPAR_V_MIX_0_DEVICE_ID,
		XPAR_V_MIX_0_S_AXI_CTRL_BASEADDR,
		XPAR_V_MIX_0_SAMPLES_PER_CLOCK,
		XPAR_V_MIX_0_MAX_COLS,
		XPAR_V_MIX_0_MAX_ROWS,
		XPAR_V_MIX_0_MAX_DATA_WIDTH,
		XPAR_V_MIX_0_VIDEO_FORMAT,
		XPAR_V_MIX_0_NR_LAYERS,
		XPAR_V_MIX_0_LOGO_LAYER,
		XPAR_V_MIX_0_MAX_LOGO_COLS,
		XPAR_V_MIX_0_MAX_LOGO_ROWS,
		XPAR_V_MIX_0_LOGO_TRANSPARENCY_COLOR,
		XPAR_V_MIX_0_LOGO_PIXEL_ALPHA,
		{{
		XPAR_V_MIX_0_LAYER1_ALPHA,
		XPAR_V_MIX_0_LAYER2_ALPHA,
		XPAR_V_MIX_0_LAYER3_ALPHA,
		XPAR_V_MIX_0_LAYER4_ALPHA,
		XPAR_V_MIX_0_LAYER5_ALPHA,
		XPAR_V_MIX_0_LAYER6_ALPHA,
		XPAR_V_MIX_0_LAYER7_ALPHA,
		XPAR_V_MIX_0_LAYER8_ALPHA
		}},
		{{
		XPAR_V_MIX_0_LAYER1_UPSAMPLE,
		XPAR_V_MIX_0_LAYER2_UPSAMPLE,
		XPAR_V_MIX_0_LAYER3_UPSAMPLE,
		XPAR_V_MIX_0_LAYER4_UPSAMPLE,
		XPAR_V_MIX_0_LAYER5_UPSAMPLE,
		XPAR_V_MIX_0_LAYER6_UPSAMPLE,
		XPAR_V_MIX_0_LAYER7_UPSAMPLE,
		XPAR_V_MIX_0_LAYER8_UPSAMPLE
		}},
		{{
		XPAR_V_MIX_0_LAYER1_MAX_WIDTH,
		XPAR_V_MIX_0_LAYER2_MAX_WIDTH,
		XPAR_V_MIX_0_LAYER3_MAX_WIDTH,
		XPAR_V_MIX_0_LAYER4_MAX_WIDTH,
		XPAR_V_MIX_0_LAYER5_MAX_WIDTH,
		XPAR_V_MIX_0_LAYER6_MAX_WIDTH,
		XPAR_V_MIX_0_LAYER7_MAX_WIDTH,
		XPAR_V_MIX_0_LAYER8_MAX_WIDTH
		}},
		{{
		XPAR_V_MIX_0_LAYER1_INTF_TYPE,
		XPAR_V_MIX_0_LAYER2_INTF_TYPE,
		XPAR_V_MIX_0_LAYER3_INTF_TYPE,
		XPAR_V_MIX_0_LAYER4_INTF_TYPE,
		XPAR_V_MIX_0_LAYER5_INTF_TYPE,
		XPAR_V_MIX_0_LAYER6_INTF_TYPE,
		XPAR_V_MIX_0_LAYER7_INTF_TYPE,
		XPAR_V_MIX_0_LAYER8_INTF_TYPE
		}},
		{{
		XPAR_V_MIX_0_LAYER1_VIDEO_FORMAT,
		XPAR_V_MIX_0_LAYER2_VIDEO_FORMAT,
		XPAR_V_MIX_0_LAYER3_VIDEO_FORMAT,
		XPAR_V_MIX_0_LAYER4_VIDEO_FORMAT,
		XPAR_V_MIX_0_LAYER5_VIDEO_FORMAT,
		XPAR_V_MIX_0_LAYER6_VIDEO_FORMAT,
		XPAR_V_MIX_0_LAYER7_VIDEO_FORMAT,
		XPAR_V_MIX_0_LAYER8_VIDEO_FORMAT
		}}

	}
};
