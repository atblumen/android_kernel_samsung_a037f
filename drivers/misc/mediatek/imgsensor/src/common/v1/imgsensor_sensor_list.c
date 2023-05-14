// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (c) 2019 MediaTek Inc.
 */

#include "kd_imgsensor.h"
#include "imgsensor_sensor_list.h"

/* Add Sensor Init function here
 * Note:
 * 1. Add by the resolution from ""large to small"", due to large sensor
 *    will be possible to be main sensor.
 *    This can avoid I2C error during searching sensor.
 * 2. This should be the same as
 *     mediatek\custom\common\hal\imgsensor\src\sensorlist.cpp
 */
struct IMGSENSOR_INIT_FUNC_LIST kdSensorList[MAX_NUM_OF_SUPPORT_SENSOR] = {
/* A03s code for SR-AL5625-01-247 by lisizhou at 2021/04/20 start */
/* A03s code for SR-AL5625-01-324 by xuxianwei at 2021/05/13 start */
#if defined(HI1336_TXD_MIPI_RAW)
	{HI1336_TXD_SENSOR_ID,
	SENSOR_DRVNAME_HI1336_TXD_MIPI_RAW,
	HI1336_TXD_MIPI_RAW_SensorInit},
#endif
#if defined(GC13053_LY_MIPI_RAW)
	{GC13053_LY_SENSOR_ID,
	SENSOR_DRVNAME_GC13053_LY_MIPI_RAW,
	GC13053_LY_MIPI_RAW_SensorInit},
#endif
#if defined(S5K3L6_OFILM_MIPI_RAW)
	{S5K3L6_OFILM_SENSOR_ID,
	SENSOR_DRVNAME_S5K3L6_OFILM_MIPI_RAW,
	S5K3L6_OFILM_MIPI_RAW_SensorInit},
#endif
#if defined(OV13B10_DD_MIPI_RAW)
	{OV13B10_DD_SENSOR_ID,
	SENSOR_DRVNAME_OV13B10_DD_MIPI_RAW,
	OV13B10_DD_MIPI_RAW_SensorInit},
#endif
#if defined(OV13B10_QT_MIPI_RAW)
	{OV13B10_QT_SENSOR_ID,
	SENSOR_DRVNAME_OV13B10_QT_MIPI_RAW,
	OV13B10_QT_MIPI_RAW_SensorInit},
#endif
#if defined(OV13B10_XL_MIPI_RAW)
	{OV13B10_XL_SENSOR_ID,
	SENSOR_DRVNAME_OV13B10_XL_MIPI_RAW,
	OV13B10_XL_MIPI_RAW_SensorInit},
#endif
#if defined(HI1336_HLT_MIPI_RAW)
	{HI1336_HLT_SENSOR_ID,
	SENSOR_DRVNAME_HI1336_HLT_MIPI_RAW,
	HI1336_HLT_MIPI_RAW_SensorInit},
#endif
/* A03s code for SR-AL5625-01-247 by lisizhou at 2021/04/20 end */
/* A03s code for SR-AL5625-01-324 by xuxianwei at 2021/04/22 start */
#if defined(HI556_TXD_MIPI_RAW)
	{HI556_TXD_SENSOR_ID,
	SENSOR_DRVNAME_HI556_TXD_MIPI_RAW,
	HI556_TXD_MIPI_RAW_SensorInit},
#endif
#if defined(HI556_OFILM_MIPI_RAW)
	{HI556_OFILM_SENSOR_ID,
	SENSOR_DRVNAME_HI556_OFILM_MIPI_RAW,
	HI556_OFILM_MIPI_RAW_SensorInit},
#endif
#if defined(GC5035_DD_MIPI_RAW)
	{GC5035_DD_SENSOR_ID,
	SENSOR_DRVNAME_GC5035_DD_MIPI_RAW,
	GC5035_DD_MIPI_RAW_SensorInit},
#endif
#if defined(GC5035_LY_MIPI_RAW)
	{GC5035_LY_SENSOR_ID,
	SENSOR_DRVNAME_GC5035_LY_MIPI_RAW,
	GC5035_LY_MIPI_RAW_SensorInit},
#endif
/* A03s code for SR-AL5625-01-332 by xuxianwei at 2021/05/21 start */
#if defined(GC5035_XL_MIPI_RAW)
	{GC5035_XL_SENSOR_ID,
	SENSOR_DRVNAME_GC5035_XL_MIPI_RAW,
	GC5035_XL_MIPI_RAW_SensorInit},
#endif
/* A03s code for SR-AL5625-01-332 by xuxianwei at 2021/05/21 end */
/* A03s code for SR-AL5625-01-324 by xuxianwei at 2021/05/13 end */
/* A03s code for SR-AL5625-01-324 by xuxianwei at 2021/04/22 end */
/* A03s code for SR-AL5625-01-324 by wuwenjie at 2021/04/25 start */
#if defined(GC2375H_CXT_MIPI_RAW)
	{GC2375H_CXT_SENSOR_ID,
	SENSOR_DRVNAME_GC2375H_CXT_MIPI_RAW,
	GC2375H_CXT_MIPI_RAW_SensorInit},
#endif
/* A03s code for SR-AL5625-01-324 by wuwenjie at 2021/04/25 end */
/* A03s code for SR-AL5625-01-324 by wuwenjie at 2021/04/27 start */
#if defined(GC02M1B_LY_MIPI_RAW)
	{GC02M1B_LY_SENSOR_ID,
	SENSOR_DRVNAME_GC02M1B_LY_MIPI_RAW,
	GC02M1B_LY_MIPI_RAW_SensorInit},
#endif
/* A03s code for SR-AL5625-01-324 by wuwenjie at 2021/04/27 end */
/* A03s code for SR-AL5625-01-324 by wuwenjie at 2021/05/12 start */
#if defined(OV02B1B_JK_MIPI_RAW)
	{OV02B1B_JK_SENSOR_ID,
	SENSOR_DRVNAME_OV02B1B_JK_MIPI_RAW,
	OV02B1B_JK_MIPI_RAW_SensorInit},
#endif
#if defined(GC2375H_SJC_MIPI_RAW)
	{GC2375H_SJC_SENSOR_ID,
	SENSOR_DRVNAME_GC2375H_SJC_MIPI_RAW,
	GC2375H_SJC_MIPI_RAW_SensorInit},
#endif
#if defined(GC02M1_JK_MIPI_RAW)
	{GC02M1_JK_SENSOR_ID,
	SENSOR_DRVNAME_GC02M1_JK_MIPI_RAW,
	GC02M1_JK_MIPI_RAW_SensorInit},
#endif
#if defined(GC02M1_HLT_MIPI_RAW)
	{GC02M1_HLT_SENSOR_ID,
	SENSOR_DRVNAME_GC02M1_HLT_MIPI_RAW,
	GC02M1_HLT_MIPI_RAW_SensorInit},
#endif
/* A03s code for SR-AL5625-01-324 by wuwenjie at 2021/05/12 end */
/* A03s code for SR-AL5625-01-324 by gaozhenyu at 2021/04/24 start */
#if defined(GC02M1_CXT_MIPI_RAW)
	{GC02M1_CXT_SENSOR_ID,
	SENSOR_DRVNAME_GC02M1_CXT_MIPI_RAW,
	GC02M1_CXT_MIPI_RAW_SensorInit},
#endif
#if defined(OV02B10_LY_MIPI_RAW)
	{OV02B10_LY_SENSOR_ID,
	SENSOR_DRVNAME_OV02B10_LY_MIPI_RAW,
	OV02B10_LY_MIPI_RAW_SensorInit},
#endif

/* A03s code for SR-AL5625-01-324 by gaozhenyu at 2021/04/24 end */
	/*IMX*/
#if defined(IMX519_MIPI_RAW)
	{IMX519_SENSOR_ID,
	SENSOR_DRVNAME_IMX519_MIPI_RAW,
	IMX519_MIPI_RAW_SensorInit},
#endif
#if defined(IMX499_MIPI_RAW)
		{IMX499_SENSOR_ID,
		SENSOR_DRVNAME_IMX499_MIPI_RAW,
		IMX499_MIPI_RAW_SensorInit},
#endif
#if defined(IMX499_MIPI_RAW_13M)
		{IMX499_SENSOR_ID,
		SENSOR_DRVNAME_IMX499_MIPI_RAW_13M,
		IMX499_MIPI_RAW_SensorInit},
#endif
#if defined(IMX486_MIPI_RAW)
	{IMX486_SENSOR_ID,
	SENSOR_DRVNAME_IMX486_MIPI_RAW,
	IMX486_MIPI_RAW_SensorInit},
#endif
#if defined(IMX398_MIPI_RAW)
	{IMX398_SENSOR_ID,
	SENSOR_DRVNAME_IMX398_MIPI_RAW,
	IMX398_MIPI_RAW_SensorInit},
#endif
#if defined(IMX386_MIPI_RAW)
	{IMX386_SENSOR_ID,
	SENSOR_DRVNAME_IMX386_MIPI_RAW,
	IMX386_MIPI_RAW_SensorInit},
#endif
#if defined(IMX386_MIPI_MONO)
	{IMX386_MONO_SENSOR_ID,
	SENSOR_DRVNAME_IMX386_MIPI_MONO,
	IMX386_MIPI_MONO_SensorInit},
#endif
#if defined(IMX362_MIPI_RAW)
	{IMX362_SENSOR_ID,
	SENSOR_DRVNAME_IMX362_MIPI_RAW,
	IMX362_MIPI_RAW_SensorInit},
#endif
#if defined(IMX338_MIPI_RAW)
	{IMX338_SENSOR_ID,
	SENSOR_DRVNAME_IMX338_MIPI_RAW,
	IMX338_MIPI_RAW_SensorInit},
#endif
#if defined(IMX318_MIPI_RAW)
	{IMX318_SENSOR_ID,
	SENSOR_DRVNAME_IMX318_MIPI_RAW,
	IMX318_MIPI_RAW_SensorInit},
#endif
#if defined(IMX377_MIPI_RAW)
	{IMX377_SENSOR_ID,
	SENSOR_DRVNAME_IMX377_MIPI_RAW,
	IMX377_MIPI_RAW_SensorInit},
#endif
#if defined(IMX230_MIPI_RAW)
	{IMX230_SENSOR_ID,
	SENSOR_DRVNAME_IMX230_MIPI_RAW,
	IMX230_MIPI_RAW_SensorInit},
#endif
#if defined(IMX220_MIPI_RAW)
	{IMX220_SENSOR_ID,
	SENSOR_DRVNAME_IMX220_MIPI_RAW,
	IMX220_MIPI_RAW_SensorInit},
#endif
#if defined(IMX219_MIPI_RAW)
	{IMX219_SENSOR_ID,
	SENSOR_DRVNAME_IMX219_MIPI_RAW,
	IMX219_MIPI_RAW_SensorInit},
#endif
#if defined(IMX214_MIPI_RAW)
	{IMX214_SENSOR_ID,
	SENSOR_DRVNAME_IMX214_MIPI_RAW,
	IMX214_MIPI_RAW_SensorInit},
#endif
#if defined(IMX214_MIPI_MONO)
	{IMX214_MONO_SENSOR_ID,
	SENSOR_DRVNAME_IMX214_MIPI_MONO,
	IMX214_MIPI_MONO_SensorInit},
#endif
#if defined(IMX179_MIPI_RAW)
	{IMX179_SENSOR_ID,
	SENSOR_DRVNAME_IMX179_MIPI_RAW,
	IMX179_MIPI_RAW_SensorInit},
#endif
#if defined(IMX178_MIPI_RAW)
	{IMX178_SENSOR_ID,
	SENSOR_DRVNAME_IMX178_MIPI_RAW,
	IMX178_MIPI_RAW_SensorInit},
#endif
#if defined(IMX132_MIPI_RAW)
	{IMX132MIPI_SENSOR_ID,
	SENSOR_DRVNAME_IMX132_MIPI_RAW,
	IMX132_MIPI_RAW_SensorInit},
#endif
#if defined(IMX135_MIPI_RAW)
	{IMX135_SENSOR_ID,
	SENSOR_DRVNAME_IMX135_MIPI_RAW,
	IMX135_MIPI_RAW_SensorInit},
#endif
#if defined(IMX105_MIPI_RAW)
	{IMX105_SENSOR_ID,
	SENSOR_DRVNAME_IMX105_MIPI_RAW,
	IMX105_MIPI_RAW_SensorInit},
#endif
#if defined(IMX073_MIPI_RAW)
	{IMX073_SENSOR_ID,
	SENSOR_DRVNAME_IMX073_MIPI_RAW,
	IMX073_MIPI_RAW_SensorInit},
#endif
#if defined(IMX258_MIPI_RAW)
	{IMX258_SENSOR_ID,
	SENSOR_DRVNAME_IMX258_MIPI_RAW,
	IMX258_MIPI_RAW_SensorInit},
#endif
#if defined(IMX258_MIPI_MONO)
	{IMX258_MONO_SENSOR_ID,
	SENSOR_DRVNAME_IMX258_MIPI_MONO,
	IMX258_MIPI_MONO_SensorInit},
#endif
	/*OV (OmniVision)*/
#if defined(OV16880_MIPI_RAW)
	{OV16880_SENSOR_ID,
	SENSOR_DRVNAME_OV16880_MIPI_RAW,
	OV16880MIPISensorInit},
#endif
#if defined(OV16825_MIPI_RAW)
	{OV16825MIPI_SENSOR_ID,
	SENSOR_DRVNAME_OV16825_MIPI_RAW,
	OV16825MIPISensorInit},
#endif
#if defined(OV13855_MIPI_RAW)
	{OV13855_SENSOR_ID,
	SENSOR_DRVNAME_OV13855_MIPI_RAW,
	OV13855_MIPI_RAW_SensorInit},
#endif
#if defined(OV13B10_MIPI_RAW)
	{OV13B10_SENSOR_ID,
	SENSOR_DRVNAME_OV13B10_MIPI_RAW,
	OV13B10_MIPI_RAW_SensorInit},
#endif
#if defined(OV13870_MIPI_RAW)
	{OV13870_SENSOR_ID, SENSOR_DRVNAME_OV13870_MIPI_RAW,
		OV13870_MIPI_RAW_SensorInit},
#endif
#if defined(OV13850_MIPI_RAW)
	{OV13850_SENSOR_ID,
	SENSOR_DRVNAME_OV13850_MIPI_RAW,
	OV13850_MIPI_RAW_SensorInit},
#endif
#if defined(OV12A10_MIPI_RAW)
	{OV12A10_SENSOR_ID,
	SENSOR_DRVNAME_OV12A10_MIPI_RAW,
	OV12A10_MIPI_RAW_SensorInit},
#endif
#if defined(OV12830_MIPI_RAW)
	{OV12830_SENSOR_ID,
	SENSOR_DRVNAME_OV12830_MIPI_RAW,
	OV12830_MIPI_RAW_SensorInit},
#endif
#if defined(OV9760_MIPI_RAW)
	{OV9760MIPI_SENSOR_ID,
	SENSOR_DRVNAME_OV9760_MIPI_RAW,
	OV9760MIPI_RAW_SensorInit},
#endif
#if defined(OV9740_MIPI_YUV)
	{OV9740MIPI_SENSOR_ID,
	SENSOR_DRVNAME_OV9740_MIPI_YUV,
	OV9740_MIPI_YUV_SensorInit},
#endif
#if defined(OV9726_RAW)
	{OV9726_SENSOR_ID,
	SENSOR_DRVNAME_0V9726_RAW,
	OV9726_RAW_SensorInit},
#endif
#if defined(OV9726_MIPI_RAW)
	{OV9726MIPI_SENSOR_ID,
	SENSOR_DRVNAME_OV9726_MIPI_RAW,
	OV9726MIPI_RAW_SensorInit},
#endif
#if defined(OV8865_MIPI_RAW)
	{OV8865_SENSOR_ID,
	SENSOR_DRVNAME_OV8865_MIPI_RAW,
	OV8865_MIPI_RAW_SensorInit},
#endif
#if defined(OV8858_MIPI_RAW)
	{OV8858_SENSOR_ID,
	SENSOR_DRVNAME_OV8858_MIPI_RAW,
	OV8858_MIPI_RAW_SensorInit},
#endif
#if defined(OV8856_MIPI_RAW)
	{OV8856_SENSOR_ID,
	SENSOR_DRVNAME_OV8856_MIPI_RAW,
	OV8856_MIPI_RAW_SensorInit},
#endif
#if defined(OV8830_RAW)
	{OV8830_SENSOR_ID,
	SENSOR_DRVNAME_OV8830_RAW,
	OV8830SensorInit},
#endif
#if defined(OV8825_MIPI_RAW)
	{OV8825_SENSOR_ID,
	SENSOR_DRVNAME_OV8825_MIPI_RAW,
	OV8825_MIPI_RAW_SensorInit},
#endif
#if defined(OV7675_YUV)
	{OV7675_SENSOR_ID,
	SENSOR_DRVNAME_OV7675_YUV,
	OV7675_YUV_SensorInit},
#endif
#if defined(OV5693_MIPI_RAW)
	{OV5693_SENSOR_ID,
	SENSOR_DRVNAME_OV5693_MIPI_RAW,
	OV5693_MIPI_RAW_SensorInit},
#endif
#if defined(OV5670_MIPI_RAW)
	{OV5670MIPI_SENSOR_ID,
	SENSOR_DRVNAME_OV5670_MIPI_RAW,
	OV5670_MIPI_RAW_SensorInit},
#endif
#if defined(OV5670_MIPI_RAW_2)
	{OV5670MIPI_SENSOR_ID_2,
	SENSOR_DRVNAME_OV5670_MIPI_RAW_2,
	OV5670_MIPI_RAW_SensorInit_2},
#endif
#if defined(OV5650_RAW)
	{OV5650_SENSOR_ID,
	SENSOR_DRVNAME_OV5650_RAW,
	OV5650SensorInit},
#endif
#if defined(OV5650MIPI_RAW)
	{OV5650MIPI_SENSOR_ID,
	SENSOR_DRVNAME_OV5650MIPI_RAW,
	OV5650MIPISensorInit},
#endif
#if defined(OV5648_MIPI_RAW)
	{OV5648MIPI_SENSOR_ID,
	SENSOR_DRVNAME_OV5648_MIPI_RAW,
	OV5648MIPISensorInit},
#endif
#if defined(OV5647_MIPI_RAW)
	{OV5647MIPI_SENSOR_ID,
	SENSOR_DRVNAME_OV5647MIPI_RAW,
	OV5647MIPISensorInit},
#endif
#if defined(OV5647_RAW)
	{OV5647_SENSOR_ID,
	SENSOR_DRVNAME_OV5647_RAW,
	OV5647SensorInit},
#endif
#if defined(OV5645_MIPI_YUV)
	{OV5645MIPI_SENSOR_ID,
	SENSOR_DRVNAME_OV5645_MIPI_YUV,
	OV5645_MIPI_YUV_SensorInit},
#endif
#if defined(OV5642_RAW)
	{OV5642_SENSOR_ID,
	SENSOR_DRVNAME_OV5642_RAW,
	OV5642_RAW_SensorInit},
#endif
#if defined(OV5642_MIPI_YUV)
	{OV5642_SENSOR_ID,
	SENSOR_DRVNAME_OV5642_MIPI_YUV,
	OV5642_MIPI_YUV_SensorInit},
#endif
#if defined(OV5642_MIPI_RGB)
	{OV5642_SENSOR_ID,
	SENSOR_DRVNAME_OV5642_MIPI_RGB,
	OV5642_MIPI_RGB_SensorInit},
#endif
#if defined(OV5642_MIPI_JPG)
	{OV5642_SENSOR_ID,
	SENSOR_DRVNAME_OV5642_MIPI_JPG,
	OV5642_MIPI_JPG_SensorInit},
#endif
#if defined(OV5642_YUV)
	{OV5642_SENSOR_ID,
	SENSOR_DRVNAME_OV5642_YUV,
	OV5642_YUV_SensorInit},
#endif
#if defined(OV4688_MIPI_RAW)
	{OV4688MIPI_SENSOR_ID,
	SENSOR_DRVNAME_OV4688_MIPI_RAW,
	OV4688_MIPI_RAW_SensorInit},
#endif
#if defined(OV3640_RAW)
	{OV3640_SENSOR_ID
	, SENSOR_DRVNAME_OV3640_RAW,
	OV3640SensorInit},
#endif
#if defined(OV3640_YUV)
	{OV3640_SENSOR_ID,
	SENSOR_DRVNAME_OV3640_YUV,
	OV3640_YUV_SensorInit},
#endif
#if defined(OV3640_YUV_AF)
	{OV3640_SENSOR_ID,
	SENSOR_DRVNAME_OV3640_YUV,
	OV3640_YUV_SensorInit},
#endif
#if defined(OV2680_MIPI_RAW)
	{OV2680MIPI_SENSOR_ID,
	SENSOR_DRVNAME_OV2680_MIPI_RAW,
	OV2680MIPISensorInit},
#endif
#if defined(OV2722_MIPI_RAW)
	{OV2722MIPI_SENSOR_ID,
	SENSOR_DRVNAME_OV2722_MIPI_RAW,
	OV2722MIPI_RAW_SensorInit},
#endif
#if defined(OV2659_YUV)
	{OV2659_SENSOR_ID,
	SENSOR_DRVNAME_OV2659_YUV,
	OV2659_YUV_SensorInit},
#endif
#if defined(OV2655_YUV)
	{OV2650_SENSOR_ID,
	SENSOR_DRVNAME_OV2655_YUV,
	OV2655_YUV_SensorInit},
#endif
#if defined(OV2650_RAW)
	{OV2650_SENSOR_ID,
	SENSOR_DRVNAME_OV2650_RAW,
	OV2650SensorInit},
#endif
#if defined(OV23850_MIPI_RAW)
	{OV23850_SENSOR_ID,
	SENSOR_DRVNAME_OV23850_MIPI_RAW,
	OV23850_MIPI_RAW_SensorInit},
#endif
#if defined(OV20880_MIPI_RAW)
	{OV20880MIPI_SENSOR_ID,
	SENSOR_DRVNAME_OV20880_MIPI_RAW,
	OV20880_MIPI_RAW_SensorInit},
#endif
	/*S5K*/
#if defined(S5K3P8SP_MIPI_RAW)
	{S5K3P8SP_SENSOR_ID,
	SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW,
	S5K3P8SP_MIPI_RAW_SensorInit},
#endif
#if defined(S5K2T7SP_MIPI_RAW)
	{S5K2T7SP_SENSOR_ID,
	SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW,
	S5K2T7SP_MIPI_RAW_SensorInit},
#endif
#if defined(S5K2T7SP_MIPI_RAW_5M)
	{S5K2T7SP_SENSOR_ID,
	SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW_5M,
	S5K2T7SP_MIPI_RAW_SensorInit},
#endif
#if defined(S5K4E6_MIPI_RAW)
	{S5K4E6_SENSOR_ID,
	SENSOR_DRVNAME_S5K4E6_MIPI_RAW,
	S5K4E6_MIPI_RAW_SensorInit},
#endif
#if defined(S5K2L7_MIPI_RAW)
	{S5K2L7_SENSOR_ID,
	SENSOR_DRVNAME_S5K2L7_MIPI_RAW,
	S5K2L7_MIPI_RAW_SensorInit},
#endif
#if defined(S5K3L6_MIPI_RAW)
	{S5K3L6_SENSOR_ID,
	SENSOR_DRVNAME_S5K3L6_MIPI_RAW,
	S5K3L6_MIPI_RAW_SensorInit},
#endif
#if defined(S5K3L8_MIPI_RAW)
	{S5K3L8_SENSOR_ID,
	SENSOR_DRVNAME_S5K3L8_MIPI_RAW,
	S5K3L8_MIPI_RAW_SensorInit},
#endif
#if defined(S5K3M3_MIPI_RAW)
	{S5K3M3_SENSOR_ID,
	SENSOR_DRVNAME_S5K3M3_MIPI_RAW,
	S5K3M3_MIPI_RAW_SensorInit},
#endif
#if defined(S5K2P6_MIPI_RAW)
	{S5K2P6_SENSOR_ID,
	SENSOR_DRVNAME_S5K2P6_MIPI_RAW,
	S5K2P6_MIPI_RAW_SensorInit},
#endif
#if defined(S5K2P7_MIPI_RAW)
	{S5K2P7_SENSOR_ID,
	SENSOR_DRVNAME_S5K2P7_MIPI_RAW,
	S5K2P7_MIPI_RAW_SensorInit},
#endif
#if defined(S5K2P8_MIPI_RAW)
	{S5K2P8_SENSOR_ID,
	SENSOR_DRVNAME_S5K2P8_MIPI_RAW,
	S5K2P8_MIPI_RAW_SensorInit},
#endif
#if defined(S5K3P3SX_MIPI_RAW)
	{S5K3P3SX_SENSOR_ID,
	SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW,
	S5K3P3SX_MIPI_RAW_SensorInit},
#endif
#if defined(S5K2X8_MIPI_RAW)
	{S5K2X8_SENSOR_ID,
	SENSOR_DRVNAME_S5K2X8_MIPI_RAW,
	S5K2X8_MIPI_RAW_SensorInit},
#endif
#if defined(S5K3M2_MIPI_RAW)
	{S5K3M2_SENSOR_ID,
	SENSOR_DRVNAME_S5K3M2_MIPI_RAW,
	S5K3M2_MIPI_RAW_SensorInit},
#endif
#if defined(S5K3H2YX_MIPI_RAW)
	{S5K3H2YX_SENSOR_ID,
	SENSOR_DRVNAME_S5K3H2YX_MIPI_RAW,
	S5K3H2YX_MIPI_RAW_SensorInit},
#endif
#if defined(S5K3H7Y_MIPI_RAW)
	{S5K3H7Y_SENSOR_ID,
	SENSOR_DRVNAME_S5K3H7Y_MIPI_RAW,
	S5K3H7Y_MIPI_RAW_SensorInit},
#endif
#if defined(S5K4H5YC_MIPI_RAW)
	{S5K4H5YC_SENSOR_ID,
	SENSOR_DRVNAME_S5K4H5YC_MIPI_RAW,
	S5K4H5YC_MIPI_RAW_SensorInit},
#endif
#if defined(S5K4H5YX_2LANE_MIPI_RAW)
	{S5K4H5YX_2LANE_SENSOR_ID,
	SENSOR_DRVNAME_S5K4H5YX_2LANE_MIPI_RAW,
	S5K4H5YX_2LANE_MIPI_RAW_SensorInit},
#endif
#if defined(S5K5E2YA_MIPI_RAW)
	{S5K5E2YA_SENSOR_ID,
	SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW,
	S5K5E2YA_MIPI_RAW_SensorInit},
#endif
#if defined(S5K5CAGX_YUV)
	{S5K5CAGX_SENSOR_ID,
	SENSOR_DRVNAME_S5K5CAGX_YUV,
	S5K5CAGX_YUV_SensorInit},
#endif
#if defined(S5K4E1GA_MIPI_RAW)
	{S5K4E1GA_SENSOR_ID,
	SENSOR_DRVNAME_S5K4E1GA_MIPI_RAW,
	S5K4E1GA_MIPI_RAW_SensorInit},
#endif
#if defined(S5K4ECGX_YUV)
	{S5K4ECGX_SENSOR_ID,
	SENSOR_DRVNAME_S5K4ECGX_YUV,
	S5K4ECGX_YUV_SensorInit},
#endif
#if defined(S5K4ECGX_MIPI_YUV)
	{S5K4ECGX_SENSOR_ID,
	SENSOR_DRVNAME_S5K4ECGX_MIPI_YUV,
	S5K4ECGX_MIPI_YUV_SensorInit},
#endif
#if defined(S5K4ECGX_MIPI_JPG)
	{S5K4ECGX_SENSOR_ID,
	SENSOR_DRVNAME_S5K4ECGX_MIPI_JPG,
	S5K4ECGX_MIPI_JPG_SensorInit},
#endif
#if defined(S5K8AAYX_MIPI_YUV)
	{S5K8AAYX_MIPI_SENSOR_ID,
	SENSOR_DRVNAME_S5K8AAYX_MIPI_YUV,
	S5K8AAYX_MIPI_YUV_SensorInit},
#endif
#if defined(S5K8AAYX_YUV)
	{S5K8AAYX_MIPI_SENSOR_ID,
	SENSOR_DRVNAME_S5K8AAYX_YUV,
	S5K8AAYX_PVI_YUV_SensorInit},
#endif
#if defined(S5K5E8YX_MIPI_RAW)
	{S5K5E8YX_SENSOR_ID,
	SENSOR_DRVNAME_S5K5E8YX_MIPI_RAW,
	S5K5E8YX_MIPI_RAW_SensorInit},
#endif
#if defined(S5K5E8YXREAR2_MIPI_RAW)
	{S5K5E8YXREAR2_SENSOR_ID,
	SENSOR_DRVNAME_S5K5E8YXREAR2_MIPI_RAW,
	S5K5E8YXREAR2_MIPI_RAW_SensorInit},
#endif
#if defined(S5KGM2_MIPI_RAW)
	{S5KGM2_SENSOR_ID,
	SENSOR_DRVNAME_S5KGM2_MIPI_RAW,
	S5KGM2_MIPI_RAW_SensorInit},
#endif
	/*HI*/
#if defined(HI841_MIPI_RAW)
	{HI841_SENSOR_ID,
	SENSOR_DRVNAME_HI841_MIPI_RAW,
	HI841_MIPI_RAW_SensorInit},
#endif
#if defined(HI707_YUV)
	{HI707_SENSOR_ID,
	SENSOR_DRVNAME_HI707_YUV,
	HI707_YUV_SensorInit},
#endif
#if defined(HI704_YUV)
	{HI704_SENSOR_ID,
	SENSOR_DRVNAME_HI704_YUV,
	HI704_YUV_SensorInit},
#endif
#if defined(HI556_MIPI_RAW)
	{HI556_SENSOR_ID,
	SENSOR_DRVNAME_HI556_MIPI_RAW,
	HI556_MIPI_RAW_SensorInit},
#endif
#if defined(HI551_MIPI_RAW)
	{HI551_SENSOR_ID,
	SENSOR_DRVNAME_HI551_MIPI_RAW,
	HI551_MIPI_RAW_SensorInit},
#endif
#if defined(HI545_MIPI_RAW)
	{HI545MIPI_SENSOR_ID,
	SENSOR_DRVNAME_HI545_MIPI_RAW,
	HI545_MIPI_RAW_SensorInit},
#endif
#if defined(HI544_MIPI_RAW)
	{HI544MIPI_SENSOR_ID,
	SENSOR_DRVNAME_HI544_MIPI_RAW,
	HI544_MIPI_RAW_SensorInit},
#endif
#if defined(HI542_RAW)
	{HI542_SENSOR_ID,
	SENSOR_DRVNAME_HI542_RAW,
	HI542_RAW_SensorInit},
#endif
#if defined(HI542_MIPI_RAW)
	{HI542MIPI_SENSOR_ID,
	SENSOR_DRVNAME_HI542MIPI_RAW,
	HI542_MIPI_RAW_SensorInit},
#endif
#if defined(HI253_YUV)
	{HI253_SENSOR_ID,
	SENSOR_DRVNAME_HI253_YUV,
	HI253_YUV_SensorInit},
#endif
#if defined(HI191_MIPI_RAW)
	{HI191MIPI_SENSOR_ID,
	SENSOR_DRVNAME_HI191_MIPI_RAW,
	HI191MIPI_RAW_SensorInit},
#endif
	/*MT*/
#if defined(MT9P012_RAW)
	{MT9P012_SENSOR_ID,
	SENSOR_DRVNAME_MT9P012_RAW,
	MT9P012SensorInit},
#endif
#if defined(MT9P015_RAW)
	{MT9P015_SENSOR_ID,
	SENSOR_DRVNAME_MT9P015_RAW,
	MT9P015SensorInit},
#endif
#if defined(MT9P017_RAW)
	{MT9P017_SENSOR_ID,
	SENSOR_DRVNAME_MT9P017_RAW,
	MT9P017SensorInit},
#endif
#if defined(MT9P017_MIPI_RAW)
	{MT9P017MIPI_SENSOR_ID,
	SENSOR_DRVNAME_MT9P017_MIPI_RAW,
	MT9P017MIPISensorInit},
#endif
#if defined(MT9T113_YUV)
	{MT9T113_SENSOR_ID,
	SENSOR_DRVNAME_MT9T113_YUV,
	MT9T113_YUV_SensorInit},
#endif
#if defined(MT9T113_MIPI_YUV)
	{MT9T113MIPI_SENSOR_ID,
	SENSOR_DRVNAME_MT9T113_MIPI_YUV,
	MT9T113MIPI_YUV_SensorInit},
#endif
#if defined(MT9V113_YUV)
	{MT9V113_SENSOR_ID,
	SENSOR_DRVNAME_MT9V113_YUV,
	MT9V113_YUV_SensorInit},
#endif
#if defined(MT9V114_YUV)
	{MT9V114_SENSOR_ID,
	SENSOR_DRVNAME_MT9V114_YUV,
	MT9V114_YUV_SensorInit},
#endif
#if defined(MT9D115_MIPI_RAW)
	{MT9D115_SENSOR_ID,
	SENSOR_DRVNAME_MT9D115_MIPI_RAW,
	MT9D115MIPISensorInit},
#endif
#if defined(MT9V115_YUV)
	{MT9V115_SENSOR_ID,
	SENSOR_DRVNAME_MT9V115_YUV,
	MT9V115_YUV_SensorInit},
#endif
#if defined(SR846_MIPI_RAW)
	{SR846_SENSOR_ID,
	SENSOR_DRVNAME_SR846_MIPI_RAW,
	SR846_MIPI_RAW_SensorInit},
#endif
#if defined(SR846D_MIPI_RAW)
	{SR846D_SENSOR_ID,
	SENSOR_DRVNAME_SR846D_MIPI_RAW,
	SR846D_MIPI_RAW_SensorInit},
#endif
	/*GC*/
#if defined(GC8054_MIPI_RAW)
	{GC8054_SENSOR_ID,
	SENSOR_DRVNAME_GC8054_MIPI_RAW,
	GC8054_MIPI_RAW_SensorInit},
#endif
#if defined(GC5035_MIPI_RAW)
	{GC5035_SENSOR_ID,
	SENSOR_DRVNAME_GC5035_MIPI_RAW,
	GC5035_MIPI_RAW_SensorInit},
#endif
#if defined(GC02M1B_MIPI_MONO)
	{GC02M1B_SENSOR_ID,
	SENSOR_DRVNAME_GC02M1B_MIPI_MONO,
	GC02M1B_MIPI_MONO_SensorInit},
#endif
#if defined(GC02M1_MIPI_RAW)
	{GC02M1_SENSOR_ID,
	SENSOR_DRVNAME_GC02M1_MIPI_RAW,
	GC02M1_MIPI_RAW_SensorInit},
#endif

#if defined(GC2375H_MIPI_RAW)
	{GC2375H_SENSOR_ID,
	SENSOR_DRVNAME_GC2375H_MIPI_RAW,
	GC2375H_MIPI_RAW_SensorInit},
#endif
#if defined(GC2365_MIPI_RAW)
	{GC2365_SENSOR_ID, SENSOR_DRVNAME_GC2365_MIPI_RAW,
		GC2365_MIPI_RAW_SensorInit},
#endif
#if defined(GC2366_MIPI_RAW)
	{GC2366_SENSOR_ID, SENSOR_DRVNAME_GC2366_MIPI_RAW,
		GC2366_MIPI_RAW_SensorInit},
#endif
#if defined(GC2355_MIPI_RAW)
	{GC2355_SENSOR_ID,
	SENSOR_DRVNAME_GC2355_MIPI_RAW,
	GC2355_MIPI_RAW_SensorInit},
#endif
#if defined(GC2235_RAW)
	{GC2235_SENSOR_ID,
	SENSOR_DRVNAME_GC2235_RAW,
	GC2235_RAW_SensorInit},
#endif
#if defined(GC2035_YUV)
	{GC2035_SENSOR_ID,
	SENSOR_DRVNAME_GC2035_YUV,
	GC2035_YUV_SensorInit},
#endif
#if defined(GC0330_YUV)
	{GC0330_SENSOR_ID,
	SENSOR_DRVNAME_GC0330_YUV,
	GC0330_YUV_SensorInit},
#endif
#if defined(GC0329_YUV)
	{GC0329_SENSOR_ID,
	SENSOR_DRVNAME_GC0329_YUV,
	GC0329_YUV_SensorInit},
#endif
#if defined(GC0313_MIPI_YUV)
	{GC0313MIPI_YUV_SENSOR_ID,
	SENSOR_DRVNAME_GC0313MIPI_YUV,
	GC0313MIPI_YUV_SensorInit},
#endif
#if defined(GC0310_YUV)
	{GC0310_SENSOR_ID,
	SENSOR_DRVNAME_GC0310_YUV,
	GC0310_YUV_SensorInit},
#endif
#if defined(GC8C34_MIPI_RAW)
	{GC8C34_SENSOR_ID,
	SENSOR_DRVNAME_GC8C34_MIPI_RAW,
	GC8C34_MIPI_RAW_SensorInit},
#endif
#if defined(GC8034_MIPI_RAW)
	{GC8034_SENSOR_ID,
	SENSOR_DRVNAME_GC8034_MIPI_RAW,
	GC8034_MIPI_RAW_SensorInit},
#endif
	/*SP*/
#if defined(SP250A_MIPI_RAW)
	{SP250A_SENSOR_ID,
	SENSOR_DRVNAME_SP250A_MIPI_RAW,
	SP250A_MIPI_RAW_SensorInit},
#endif
#if defined(SP0A19_YUV)
	{SP0A19_YUV_SENSOR_ID,
	SENSOR_DRVNAME_SP0A19_YUV,
	SP0A19_YUV_SensorInit},
#endif
	/*A*/
#if defined(A5141_MIPI_RAW)
	{A5141MIPI_SENSOR_ID,
	SENSOR_DRVNAME_A5141_MIPI_RAW,
	A5141_MIPI_RAW_SensorInit},
#endif
#if defined(A5142_MIPI_RAW)
	{A5142MIPI_SENSOR_ID,
	SENSOR_DRVNAME_A5142_MIPI_RAW,
	A5142_MIPI_RAW_SensorInit},
#endif
	/*HM*/
#if defined(HM3451_RAW)
	{HM3451_SENSOR_ID,
	SENSOR_DRVNAME_HM3451_RAW,
	HM3451SensorInit},
#endif
	/*AR*/
#if defined(AR0833_MIPI_RAW)
	{AR0833_SENSOR_ID,
	SENSOR_DRVNAME_AR0833_MIPI_RAW,
	AR0833_MIPI_RAW_SensorInit},
#endif
	/*SIV*/
#if defined(SIV120B_YUV)
	{SIV120B_SENSOR_ID,
	SENSOR_DRVNAME_SIV120B_YUV,
	SIV120B_YUV_SensorInit},
#endif
#if defined(SIV121D_YUV)
	{SIV121D_SENSOR_ID,
	SENSOR_DRVNAME_SIV121D_YUV,
	SIV121D_YUV_SensorInit},
#endif
	/*PAS (PixArt Image)*/
#if defined(PAS6180_SERIAL_YUV)
	{PAS6180_SENSOR_ID,
	SENSOR_DRVNAME_PAS6180_SERIAL_YUV,
	PAS6180_SERIAL_YUV_SensorInit},
#endif
	/*Panasoic*/
#if defined(MN34152_MIPI_RAW)
	{MN34152_SENSOR_ID,
	SENSOR_DRVNAME_MN34152_MIPI_RAW,
	MN34152_MIPI_RAW_SensorInit},
#endif
	/*Toshiba*/
#if defined(T4K28_YUV)
	{T4K28_SENSOR_ID,
	SENSOR_DRVNAME_T4K28_YUV,
	T4K28_YUV_SensorInit},
#endif
#if defined(T4KA7_MIPI_RAW)
	{T4KA7_SENSOR_ID,
	SENSOR_DRVNAME_T4KA7_MIPI_RAW,
	T4KA7_MIPI_RAW_SensorInit},
#endif
	/*Others*/
#if defined(ISX012_MIPI_YUV)
	{ISX012MIPI_SENSOR_ID,
	SENSOR_DRVNAME_ISX012_MIPI_YUV,
	ISX012_MIPI_YUV_SensorInit},
#endif
#if defined(T8EV5_YUV)
	{T8EV5_SENSOR_ID,
	SENSOR_DRVNAME_T8EV5_YUV,
	T8EV5_YUV_SensorInit},
#endif
	/*Test*/
#if defined(OV8856_MIPI_RAW_5MP)
	{OV8856_SENSOR_ID, SENSOR_DRVNAME_OV8856_MIPI_RAW_5MP,
		OV8856_MIPI_RAW_SensorInit},
#endif

	/*  ADD sensor driver before this line */
	{0, {0}, NULL}, /* end of list */
};
/* e_add new sensor driver here */

