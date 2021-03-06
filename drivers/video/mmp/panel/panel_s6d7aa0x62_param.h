#ifndef __PANEL_ILI9881C_PARAM_H__
#define __PANEL_ILI9881C_PARAM_H__

#include <video/mipi_display.h>

#define HS_MODE 0
#define LP_MODE 1

#define S6D7AA0X62_720P_ID 0x59b810

static u8 s6d7aa0x62_pkt_size_cmd[] = {0x1};
static u8 s6d7aa0x62_read_id1[] = {0xda};
static u8 s6d7aa0x62_read_id2[] = {0xdb};
static u8 s6d7aa0x62_read_id3[] = {0xdc};

static struct mmp_dsi_cmd_desc s6d7aa0x62_read_id1_cmds[] = {
	{MIPI_DSI_SET_MAXIMUM_RETURN_PACKET_SIZE, 1, 0, sizeof(s6d7aa0x62_pkt_size_cmd),
		s6d7aa0x62_pkt_size_cmd},
	{MIPI_DSI_DCS_READ, 1, 0, sizeof(s6d7aa0x62_read_id1), s6d7aa0x62_read_id1},
};

static struct mmp_dsi_cmd_desc s6d7aa0x62_read_id2_cmds[] = {
	{MIPI_DSI_SET_MAXIMUM_RETURN_PACKET_SIZE, 1, 0, sizeof(s6d7aa0x62_pkt_size_cmd),
		s6d7aa0x62_pkt_size_cmd},
	{MIPI_DSI_DCS_READ, 1, 0, sizeof(s6d7aa0x62_read_id2), s6d7aa0x62_read_id2},
};

static struct mmp_dsi_cmd_desc s6d7aa0x62_read_id3_cmds[] = {
	{MIPI_DSI_SET_MAXIMUM_RETURN_PACKET_SIZE, 1, 0, sizeof(s6d7aa0x62_pkt_size_cmd),
		s6d7aa0x62_pkt_size_cmd},
	{MIPI_DSI_DCS_READ, 1, 0, sizeof(s6d7aa0x62_read_id3), s6d7aa0x62_read_id3},
};

static u8 s6d7aa0x62_sleep_in[] = {0x10};
static u8 s6d7aa0x62_disp_off[] = {0x28};

#define S6D7AA0X62_SLEEP_OUT_DELAY 120
#define S6D7AA0X62_DISP_ON_DELAY	40

#define S6D7AA0X62_DISP_OFF_DELAY 20
#define S6D7AA0X62_SLEEP_IN_DELAY 80

static u8 s6d7aa0x62_F0h[] = {0xF0, 0x5A, 0x5A};
static u8 s6d7aa0x62_F1h[] = {0xF1, 0x5A, 0x5A};
static u8 s6d7aa0x62_FCh[] = {0xFC, 0xA5, 0xA5};

static u8 s6d7aa0x62_exit_sleep[] = {0x11};
static u8 s6d7aa0x62_display_on[] = {0x29};

static u8 s6d7aa0x62_B1h[] = {0xB1, 0x12};
static u8 s6d7aa0x62_B2h[] = {0xB2, 0x14, 0x22, 0x2F, 0x04};
static u8 s6d7aa0x62_B3h[] = {0xB3, 0x04};
static u8 s6d7aa0x62_BAh[] = {0xBA, 0x03, 0x19, 0x19, 0x11, 0x03, 0x05, 0x18, 0x18, 0x77};
static u8 s6d7aa0x62_BCh[] = {0xBC, 0x00, 0x4E, 0x0A};
static u8 s6d7aa0x62_C0h[] = {0xC0, 0x80, 0x00, 0x00};
static u8 s6d7aa0x62_C1h[] = {0xC1, 0x03};
static u8 s6d7aa0x62_C2h[] = {0xC2, 0x00};
static u8 s6d7aa0x62_C3h[] = {0xC3, 0x40, 0x00, 0x28};
static u8 s6d7aa0x62_E1h[] = {0xE1, 0x03, 0x10, 0x1C, 0xA0, 0x10};
static u8 s6d7aa0x62_EEh[] = {0xEE, 0xA8, 0x00, 0x95, 0x00, 0xA8, 0x00, 0x95, 0x00};
static u8 s6d7aa0x62_F2h[] = {0xF2, 0x02, 0x10, 0x10, 0x44, 0x10};
static u8 s6d7aa0x62_F3h[] = {
	0xF3,
	0x01, 0x93, 0x20, 0x22, 0x80, 0x05, 0x25, 0x3C,
	0x26, 0x00
};
static u8 s6d7aa0x62_F4h[] = {
	0xF4,
	0x02, 0x02, 0x10, 0x26, 0x10, 0x02, 0x03, 0x03,
	0x03, 0x10, 0x16, 0x03, 0x00, 0x0C, 0x0C, 0x03,
	0x04, 0x05, 0x13, 0x1E, 0x09, 0x0A, 0x05, 0x05,
	0x01, 0x04, 0x02, 0x61, 0x74, 0x75, 0x72, 0x83,
	0x80, 0x80, 0x00, 0x00, 0x01, 0x01, 0x28, 0x04,
	0x03, 0x28, 0x01, 0xD1, 0x32,
};
static u8 s6d7aa0x62_F5h[] = {
	0xF5,
	0xA1, 0x1C, 0x34, 0x5F, 0xBC, 0x8B, 0x55, 0x0F,
	0x33, 0x33, 0x03, 0x59, 0x54, 0x52, 0x45, 0x57,
	0x60, 0x10, 0x60, 0x80, 0x27, 0x26, 0x52, 0x25,
	0x6F, 0x1B,
};

static u8 s6d7aa0x62_F7h[] = {
	0xF7,
	0x01, 0x1B, 0x08, 0x0C, 0x09, 0x0D, 0x01, 0x01,
	0x01, 0x04, 0x06, 0x01, 0x01, 0x00, 0x00, 0x1A,
	0x01, 0x1B, 0x0A, 0x0E, 0x0B, 0x0F, 0x01, 0x01,
	0x01, 0x05, 0x07, 0x01, 0x01, 0x00, 0x00, 0x1A,
};

static u8 s6d7aa0x62_EFh[] = {
	0xEF,
	0x34, 0x12, 0x98, 0xBA, 0x10, 0x80, 0x24, 0x80,
	0x80, 0x80, 0x00, 0x00, 0x00, 0x44, 0xA0, 0x82,
	0x00,
};

static u8 s6d7aa0x62_F6h[] = {0xF6, 0x60, 0x25, 0x05, 0x00, 0x00, 0x03};
static u8 s6d7aa0x62_FDh[] = {0xFD, 0x16, 0x10, 0x11, 0x23, 0x09};
static u8 s6d7aa0x62_FEh[] = {0xFE, 0x00, 0x0D, 0x03, 0x21, 0x80, 0x78};

static u8 s6d7aa0x62_FAh[] = {0xFA,
	0x00, 0x3F, 0x06, 0x0C, 0x03, 0x09, 0x0F, 0x0E,
	0x12, 0x1C, 0x20, 0x1F, 0x21, 0x21, 0x21, 0x26,
	0x2F,
};
static u8 s6d7aa0x62_FBh[] = {0xFB,
	0x00, 0x3F, 0x06, 0x0D, 0x04, 0x09, 0x0F, 0x0E,
	0x12, 0x1C, 0x20, 0x1F, 0x21, 0x21, 0x21, 0x26,
	0x2F,
};

static u8 s6d7aa0x62_36h[] = {0x36, 0x1C};
static u8 s6d7aa0x62_51h[] = {0x51, 0xFF};
static u8 s6d7aa0x62_53h[] = {0x53, 0x2C};
static u8 s6d7aa0x62_55h[] = {0x55, 0xff};

static struct mmp_dsi_cmd_desc s6d7aa0x62_display_on_cmds[] = {
	/*100ms delay after video on, then send init sequence*/
	
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_F0h), s6d7aa0x62_F0h},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_F1h), s6d7aa0x62_F1h},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_FCh), s6d7aa0x62_FCh},
	{MIPI_DSI_DCS_SHORT_WRITE, HS_MODE, 120, sizeof(s6d7aa0x62_exit_sleep), s6d7aa0x62_exit_sleep},

	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_B1h), s6d7aa0x62_B1h},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_B2h), s6d7aa0x62_B2h},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_B3h), s6d7aa0x62_B3h},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_BAh), s6d7aa0x62_BAh},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_BCh), s6d7aa0x62_BCh},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_C0h), s6d7aa0x62_C0h},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_C1h), s6d7aa0x62_C1h},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_C2h), s6d7aa0x62_C2h},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_C3h), s6d7aa0x62_C3h},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_E1h), s6d7aa0x62_E1h},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_EEh), s6d7aa0x62_EEh},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_F2h), s6d7aa0x62_F2h},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_F2h), s6d7aa0x62_F2h},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_F3h), s6d7aa0x62_F3h},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_F4h), s6d7aa0x62_F4h},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_F5h), s6d7aa0x62_F5h},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_F7h), s6d7aa0x62_F7h},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_EFh), s6d7aa0x62_EFh},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_F6h), s6d7aa0x62_F6h},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_FDh), s6d7aa0x62_FDh},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_FEh), s6d7aa0x62_FEh},

	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_FAh), s6d7aa0x62_FAh},
	{MIPI_DSI_GENERIC_LONG_WRITE, HS_MODE, 0, sizeof(s6d7aa0x62_FBh), s6d7aa0x62_FBh},

	{MIPI_DSI_DCS_SHORT_WRITE_PARAM, HS_MODE, 0, sizeof(s6d7aa0x62_36h), s6d7aa0x62_36h},
	{MIPI_DSI_DCS_SHORT_WRITE_PARAM, HS_MODE, 0, sizeof(s6d7aa0x62_51h), s6d7aa0x62_51h},
	{MIPI_DSI_DCS_SHORT_WRITE_PARAM, HS_MODE, 0, sizeof(s6d7aa0x62_53h), s6d7aa0x62_53h},
	{MIPI_DSI_DCS_SHORT_WRITE_PARAM, HS_MODE, 0, sizeof(s6d7aa0x62_55h), s6d7aa0x62_55h},

	{MIPI_DSI_DCS_SHORT_WRITE, HS_MODE, 20, sizeof(s6d7aa0x62_display_on), s6d7aa0x62_display_on},
};

static struct mmp_dsi_cmd_desc s6d7aa0x62_display_off_cmds[] = {
	{MIPI_DSI_DCS_SHORT_WRITE, LP_MODE,S6D7AA0X62_DISP_OFF_DELAY, sizeof(s6d7aa0x62_disp_off),s6d7aa0x62_disp_off},
	{MIPI_DSI_DCS_SHORT_WRITE, LP_MODE, S6D7AA0X62_SLEEP_IN_DELAY, sizeof(s6d7aa0x62_sleep_in),s6d7aa0x62_sleep_in},
};

#endif /*__PANEL_ILI9881C_PARAM_H__*/

