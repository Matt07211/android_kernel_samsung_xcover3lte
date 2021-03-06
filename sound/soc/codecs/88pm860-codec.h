/*
 * 88pm860-codec.h -- audio driver for 88PM860
 * Copyright 2014 Marvell International Ltd.
 *
 * All right reserved
 *
 */

#ifndef _PM860_H
#define _PM860_H

#define TDM_CHO_DL(x)		((x))

#define TDM_CHI_DL(x)		((x))

#define PM860_TDM_MST		(1 << 5)

/* Power And Interrupt Registers */
#define PM860_REVISION_CTRL		0x00
#define PM860_MAIN_POWER_REG		0x01
#define PM860_INT_MANAGEMENT		0x02
#define PM860_INT_REG1			0x03
#define PM860_INT_REG2			0x04
#define PM860_INT_MASK_REG1		0x05
#define PM860_INT_MASK_REG2		0x06
#define PM860_SEQ_STATUS_REG1		0x07
#define PM860_SEQ_STATUS_REG2		0x08
#define PM860_SEQ_STATUS_REG3		0x09
#define PM860_SHORT_PROTECT		0x0a
#define PM860_LOAD_GROUND_DET1		0x0b
#define PM860_LOAD_GROUND_DET2		0x0c
#define PM860_LOAD_GROUND_DET3		0x0d
#define PM860_LOAD_GROUND_DET4		0x0e
#define PM860_LOAD_GROUND_DET5		0x0f
#define PM860_LOAD_GROUND_DET6		0x10
#define PM860_LOAD_GROUND_DET7		0x11

/* ADC/DMIC */
#define PM860_ADC_SETTINGS		0x20
#define PM860_ANALOG_MIC_GAIN1		0x21
#define PM860_ANALOG_MIC_GAIN2		0x22
#define PM860_DMIC_SETTINGS		0x23
#define PM860_DWS_SETTINGS1		0x24
#define PM860_DWS_SETTINGS2		0x25

/* DAC/PDM */
#define PM860_PDM_SETTINGS1		0x30
#define PM860_PDM_SETTINGS2		0x31
#define PM860_PDM_SETTINGS3		0x32
#define PM860_PDM_CONTROL1		0x33
#define PM860_PDM_CONTROL2		0x34
#define PM860_PDM_CONTROL3		0x35
#define PM860_HP_EP_SETTING		0x36
#define PM860_HP_SHRT_STATE		0x37

/* TDM */
#define PM860_TDM_SETTING1		0x40
#define PM860_TDM_SETTING2		0x41
#define PM860_TDM_SETTING3		0x42
#define PM860_TDM_SETTING5		0x43
#define PM860_TDM_SETTING6		0x44
#define PM860_TDM_SETTING7		0x45
#define PM860_TDM_SETTING8		0x46
#define PM860_TDM_SETTING9		0x47
#define PM860_TDM_SETTING10		0x48
#define PM860_TDM_SETTING11		0x49
#define PM860_TDM_SETTING12		0x4a
#define PM860_TDM_SETTING13		0x4b
#define PM860_TDM_SETTING14		0x4c
#define PM860_TDM_SETTING15		0x4d
#define PM860_TDM_SETTING17		0x4e
#define PM860_TDM_SETTING16		0x4f
#define PM860_TDM_SETTING17_1		0x50
#define PM860_TDM_INTERRUPT		0x51
#define PM860_TDM_FIFO_SIZE		0x52
#define PM860_TDM_PLL_DIV		0x53
#define PM860_FIFO_NUM_SAMPLE		0x54
#define PM860_FIFO_STATUS		0x55
#define PM860_TDM_APPLY_CONF		0x56

#define APPLY_TDM_CONF			(1 << 0)
#define APPLY_CKG_CONF			(1 << 1)
#define PM860_TDM_TEST			0x57
#define PM860_TDM_CHO_TEST1		0x58
#define PM860_TDM_CHO_TEST2		0x59

/* DIG/PROC */
#define PM860_DIG_BLOCK_EN_REG1		0x60
#define PM860_DIG_BLOCK_EN_REG2		0x61
#define PM860_VOLUME_CHANNEL		0x62
#define PM860_AUTOMUTE_PARAM		0x63
#define PM860_VOL_SEL_1			0x64
#define PM860_VOL_SEL_2			0x65
#define PM860_VOL_SEL_3			0x66
#define PM860_VOL_SEL_4			0x67
#define PM860_CLIP_BITS_REG1		0x68
#define PM860_CLIP_BITS_REG2		0x69
#define PM860_DRE_REG1			0x6a
#define PM860_DRE_REG2			0x6b
#define PM860_DRE_REG3			0x6c
#define PM860_DRE_REG4			0x6d

/* Advanced setting */
#define PM860_ANALOG_BLOCK_EN		0x70
#define PM860_ANALOG_BLOCK_STATUS	0x71
#define PM860_ANALOG_BLOCK_SETTING	0x72
#define PM860_PAD_SETTING1		0x73
#define PM860_PAD_SETTING2		0x74
#define PM860_SDM_BLOCK_EN1		0x75
#define PM860_SDM_BLOCK_EN2		0x76
#define PM860_POWER_APMLIFIER		0x77
#define PM860_ADC_BLOCK_EN		0x78
#define PM860_CLOCK_SETTINGS		0x79
#define PM860_REFGEN_SETTING		0x7a
#define PM860_CHARGE_PUMP_REG1		0x7b
#define PM860_CHARGE_PUMP_REG2		0x7c
#define PM860_CHARGE_PUMP_REG3		0x7d
#define PM860_SPECTRUM_SETTINGS1	0x7e
#define PM860_SPECTRUM_SETTINGS2	0x7f
#define PM860_SPECTRUM_SETTINGS3	0x80
#define PM860_FLL_STATUS		0x81
#define PM860_AUTO_SEQUENCER_1		0x82
#define PM860_AUTO_SEQUENCER_2		0x83
#define PM860_RECONSTRUCTION_FILTER	0x84
#define PM860_DWA_SETTINGS		0x85
#define PM860_VOLUME_OUT_SETTING	0x86
#define PM860_AUTOMUTE_SETTING		0x87
#define PM860_POWER_AMPLIFIER		0x88
#define PM860_ADC_SETTING1		0x89
#define PM860_ADC_SETTING2		0x8a
#define PM860_ADC_SETTING3		0x8b
#define PM860_ADC_SETTING4		0x8c
#define PM860_ADC_SETTING5		0x8d
#define PM860_SPARE_BITS		0x8e
#define PM860_HP_GAIN			0x8f

/* Test region */
#define PM860_TEST_ID_REG		0xa0
#define PM860_CHARGE_PUMP_1		0xa1
#define PM860_CHARGE_PUMP_PLL		0xa2
#define PM860_ADC_SETTING_6		0xa3
#define PM860_ADC_SPARE_BIT		0xa4
#define PM860_PAD_SETTING		0xa5
#define PM860_MIC_BIAS_SETTING		0xa6
#define PM860_REFERENCE_GROUP		0xa7
#define PM860_PLL_REG			0xa8
#define PM860_DIG_TEST_MODE1		0xa9
#define PM860_DAC_DWA_TEST		0xaa
#define PM860_DWA_TEST_SETTING		0xab
#define PM860_PDM_OVS_DWS		0xac
#define PM860_DIGITAL_TEST		0xad
#define PM860_AUTOMUTE_TO_ANALOG	0xae
#define PM860_DIG_TEST_MODE2		0xaf
#define PM860_DIG_TEST_MODE3		0xb0
#define PM860_TEST_SETTING		0xb1
#define PM860_SINUSOIDAL_WAVE_REG1	0xb2
#define PM860_SINUSOIDAL_WAVE_REG2	0xb3
#define PM860_SINUSOIDAL_WAVE_REG3	0xb4
#define PM860_SINUSOIDAL_WAVE_REG4	0xb5
#define PM860_SINUSOIDAL_WAVE_REG5	0xb6
#define PM860_SINUSOIDAL_WAVE_REG6	0xb7
#define PM860_SINUSOIDAL_WAVE_REG7	0xb8
#define PM860_SINUSOIDAL_WAVE_REG8	0xb9
#define PM860_SINUSOIDAL_WAVE_REG9	0xba
#define PM860_SINUSOIDAL_WAVE_REG10	0xbb
#define PM860_IO_TEST_SETTING_REG1	0xbc
#define PM860_IO_TEST_SETTING_REG2	0xbd
#define PM860_IO_TEST_SETTING_REG5	0xbe
#define PM860_IO_TEST_SETTING_REG6	0xbf
#define PM860_FLL_SETTINGS_REG1		0xc0
#define PM860_FLL_SETTINGS_REG2		0xc1
#define PM860_DIGITAL_TEST_OUT		0xc2
#define PM860_MEMORY_CONTROL1		0xc3
#define PM860_MEMORY_CONTROL2		0xc4
#define PM860_MEMORY_CONTROL3		0xc5

#define PM860_CODEC_REG_SIZE			0xf7

/* PMIC access index base start from 0xff */
#define PMIC_INDEX			PM860_CODEC_REG_SIZE

#define PM822_CLASS_D_1				PMIC_INDEX
#define PM822_MIS_CLASS_D_1			(PMIC_INDEX + 1)
#define PM822_MIS_CLASS_D_2			(PMIC_INDEX + 2)

#define CODEC_TOTAL_REG_SIZE			(PMIC_INDEX + 3)

#define PM822_CLASS_D_REG_BASE			0x48
#define PM822_MIS_CLASS_D_REG_1			0x61
#define PM822_MIS_CLASS_D_REG_2			0x62

#define SAMPLE_RATE_8000        0
#define SAMPLE_RATE_12000       1
#define SAMPLE_RATE_16000       2
#define SAMPLE_RATE_24000       3
#define SAMPLE_RATE_32000       4
#define SAMPLE_RATE_48000       5
#define SAMPLE_RATE_96000       6
#define SAMPLE_RATE_192000	7
#define SAMPLE_RATE_11025       8
#define SAMPLE_RATE_22050       9
#define SAMPLE_RATE_44100       10
#define SAMPLE_RATE_88200       11
#define SAMPLE_RATE_176400	12

#define PM860_CACHE_SIZE	0xda

#endif
