/* Lite-On LTR-558ALS Linux Driver
*
* Copyright (C) 2011 Lite-On Technology Corp (Singapore)
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
*/
#ifndef _LTR558_H
#define _LTR558_H

struct ltr558_platform_data {
	int intr;
};

/* LTR-558 Registers */
#define LTR558_ALS_CONTR		0x80
#define LTR558_PS_CONTR			0x81
#define LTR558_PS_LED			0x82
#define LTR558_PS_N_PULSES		0x83
#define LTR558_PS_MEAS_RATE		0x84
#define LTR558_ALS_MEAS_RATE		0x85
#define LTR558_MANUFACTURER_ID		0x87

#define LTR558_INTERRUPT		0x8F
#define LTR558_PS_THRES_UP_0		0x90
#define LTR558_PS_THRES_UP_1		0x91
#define LTR558_PS_THRES_LOW_0		0x92
#define LTR558_PS_THRES_LOW_1		0x93

#define LTR558_ALS_THRES_UP_0		0x97
#define LTR558_ALS_THRES_UP_1		0x98
#define LTR558_ALS_THRES_LOW_0		0x99
#define LTR558_ALS_THRES_LOW_1		0x9A
#define LTR558_INTERRUPT_PERSIST	0x9E

/* 558's Read Only Registers */
#define LTR558_ALS_DATA_CH1_0		0x88
#define LTR558_ALS_DATA_CH1_1		0x89
#define LTR558_ALS_DATA_CH0_0		0x8A
#define LTR558_ALS_DATA_CH0_1		0x8B
#define LTR558_ALS_PS_STATUS		0x8C
#define LTR558_PS_DATA_0		0x8D
#define LTR558_PS_DATA_1		0x8E

/* Basic Operating Modes */
#define MODE_ALS_ON_Range1		0x0B
#define MODE_ALS_ON_Range2		0x03
#define MODE_ALS_StdBy			0x00
#define MODE_PS_ON_Gain1		0x03
#define MODE_PS_ON_Gain2		0x07
#define MODE_PS_ON_Gain4		0x0B
#define MODE_PS_ON_Gain8		0x0C
#define MODE_PS_StdBy			0x00

#define PS_RANGE1			1
#define PS_RANGE2			2
#define PS_RANGE4			4
#define PS_RANGE8			8
#define ALS_RANGE1_320			1
#define ALS_RANGE2_64K			2

//11-bit effective resolution    0--2047 
#define PS_DETECTED_THRES		160   //0x00E0
#define PS_UNDETECTED_THRES	120	//0x0046
#define PS_CALI_DET_DISPERSION  35

/* Power On response time in ms */
#define PON_DELAY			600
#define WAKEUP_DELAY			10


//linxc 2012-08-04 
// #define  EnableLTRMsg 1

#ifdef EnableLTRMsg
#define LTR558Msg(arg...) printk(arg)
#else
#define LTR558Msg(arg...)
#endif

#endif
