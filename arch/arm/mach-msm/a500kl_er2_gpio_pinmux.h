#ifndef __a500kl_er2_GPIO_PINMUX_H
#define __a500kl_er2_GPIO_PINMUX_H

#include "asus_gpio_pinmux_setting.h"

static struct msm_gpiomux_config a500kl_er2_msm8926_gpio_configs[] __initdata= {
	{
		.gpio      = 0,		/* MAIN_CAM_ID1 */
		.settings = {
			[GPIOMUX_ACTIVE] = &NC_cfg,
			[GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 1,		/* SUB_CAM_PWDN */
        .settings = {
            [GPIOMUX_ACTIVE] = &cam_settings[6],
            [GPIOMUX_SUSPENDED] = &cam_settings[6],
        },
	},
	{
		.gpio      = 2,		/* SUB_CAM_RST */
        .settings = {
            [GPIOMUX_ACTIVE] = &cam_settings[6],
            [GPIOMUX_SUSPENDED] = &cam_settings[6],
        },
	},
	{
		.gpio      = 3,		/* CAM2_ID */
		.settings = {
			[GPIOMUX_ACTIVE] = &cam_settings[8],
			[GPIOMUX_SUSPENDED] = &cam_settings[8],
		},
	},
	{
		.gpio      = 4,		/* HW_ID0 */
		.settings = {
			[GPIOMUX_ACTIVE] = &gpio_hw_id_config,
			[GPIOMUX_SUSPENDED] = &gpio_hw_id_config,
		},
	},
	{
		.gpio      = 5,		/* HW_ID1 */
		.settings = {
			[GPIOMUX_ACTIVE] = &gpio_hw_id_config,
			[GPIOMUX_SUSPENDED] = &gpio_hw_id_config,
		},
	},
	{
		.gpio      = 6,		/* I2C2_SDA_SENS ?*/
		.settings = {
			[GPIOMUX_ACTIVE] = &gpio_i2c_sens_config,
			[GPIOMUX_SUSPENDED] = &gpio_i2c_sens_config,
		},
	},
	{
		.gpio      = 7,		/* I2C2_SCL_SENS ?*/
		.settings = {
			[GPIOMUX_ACTIVE] = &gpio_i2c_sens_config,
			[GPIOMUX_SUSPENDED] = &gpio_i2c_sens_config,
		},
	},
	{
		.gpio      = 8,		/* UART3_TX ?*/
		.settings = {
			[GPIOMUX_ACTIVE] = &gpio_uart_config,
			[GPIOMUX_SUSPENDED] = &gpio_uart_config,
		},
	},
	{
		.gpio      = 9,		/* UART3_RX ?*/
		.settings = {
			[GPIOMUX_ACTIVE] = &gpio_uart_config,
			[GPIOMUX_SUSPENDED] = &gpio_uart_config,
		},
	},
	{
		.gpio      = 10,		/*  */
		.settings = {
			[GPIOMUX_ACTIVE] = &NC_cfg,
			[GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 11,		/*  */
		.settings = {
			[GPIOMUX_ACTIVE] = &NC_cfg,
			[GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 12,		/* HW_ID2 */
		.settings = {
			[GPIOMUX_ACTIVE] = &gpio_hw_id_config,
			[GPIOMUX_SUSPENDED] = &gpio_hw_id_config,
		},
	},
	{
		.gpio      = 13,		/* HW_ID3 */
		.settings = {
			[GPIOMUX_ACTIVE] = &gpio_hw_id_config,
			[GPIOMUX_SUSPENDED] = &gpio_hw_id_config,
		},
	},
	{
		.gpio      = 14,		/* HW_ID4 */
		.settings = {
			[GPIOMUX_ACTIVE] = &gpio_hw_id_config,
			[GPIOMUX_SUSPENDED] = &gpio_hw_id_config,
		},
	},
	{
		.gpio      = 15,		/* PANEL_BKLTEN */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_panel_config[0],
            [GPIOMUX_SUSPENDED] = &gpio_panel_config[0],
		},
	},
	{
		.gpio = 16,
		.settings = {
			[GPIOMUX_ACTIVE] = &synaptics_reset_act_cfg,
			[GPIOMUX_SUSPENDED] = &synaptics_reset_sus_cfg,
		},
	},
	
	/*{
		.gpio      = 16,		//TOUCH_RST_N /
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_touch_rst_config[1],
		},
	},

	{
		.gpio      = 17,		// TOUCH_INT_N /
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_touch_int_config,
		},
	},*/
	{
		.gpio = 17,
		.settings = {
			[GPIOMUX_ACTIVE] = &synaptics_int_act_cfg,
			[GPIOMUX_SUSPENDED] = &synaptics_int_sus_cfg,
		},
	},	
	{
		.gpio      = 18,		/* I2C5_SDA_CTP ?*/
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_i2c_ctp_config,
            [GPIOMUX_SUSPENDED] = &gpio_i2c_ctp_config,
		},
	},
	{
		.gpio      = 19,		/* I2C5_SCL_CTP ?*/
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_i2c_ctp_config,
            [GPIOMUX_SUSPENDED] = &gpio_i2c_ctp_config,
		},
	},
	{
		.gpio      = 20,		/* SW_OPT1 */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_sw_opt_config,
            [GPIOMUX_SUSPENDED] = &gpio_sw_opt_config,
		},
	},
	{
		.gpio      = 21,		/* Hall_Det# */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_hall_det_config,
            [GPIOMUX_SUSPENDED] = &gpio_hall_det_config,
		},
	},
	{
		.gpio      = 22,		/* SW_OPT2 */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_sw_opt_config,
            [GPIOMUX_SUSPENDED] = &gpio_sw_opt_config,
		},
	},
	{
		.gpio      = 23,		/* CAM_A2V85_EN */
		.settings = {
            [GPIOMUX_ACTIVE] = &cam_settings[6],
            [GPIOMUX_SUSPENDED] = &cam_settings[6],
		},
	},
	{
		.gpio      = 24,		/* CAM1_1V8_EN */
		.settings = {
            [GPIOMUX_ACTIVE] = &cam_settings[6],
            [GPIOMUX_SUSPENDED] = &cam_settings[6],
		},
	},
	{
		.gpio      = 25,		// DISP_RST_N /
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_disp_rst_config[0],
            [GPIOMUX_SUSPENDED] = &gpio_disp_rst_config[1],
		},
	},
	/*{
		.gpio      = 26,		// MAIN_CAM_MCLK /
		.settings = {
            [GPIOMUX_ACTIVE] = &cam_settings[0],
		},
	},*/

	{
		.gpio = 26, /* CAM_MCLK0 */
		.settings = {
			[GPIOMUX_ACTIVE]    = &cam_settings[0],
			[GPIOMUX_SUSPENDED] = &cam_settings[1],
		},
	},
	{
		.gpio      = 27,		/* SUB_CAM_MCLK */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 28,		/* LCM_ID */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_lcm_id_config,
            [GPIOMUX_SUSPENDED] = &gpio_lcm_id_config,
		},
	},
	/*{
		.gpio      = 29,		// CAM_I2C_SDA /
		.settings = {
            [GPIOMUX_ACTIVE] = &cam_settings[0],
		},
	},
	{
		.gpio      = 30,		// CAM_I2C_SCL /
		.settings = {
            [GPIOMUX_ACTIVE] = &cam_settings[0],
		},
	},*/
	{
		.gpio = 29, /* CCI_I2C_SDA0 */
		.settings = {
			[GPIOMUX_ACTIVE]    = &cam_settings[0],
			[GPIOMUX_SUSPENDED] = &gpio_suspend_config[0],
		},
	},
	{
		.gpio = 30, /* CCI_I2C_SCL0 */
		.settings = {
			[GPIOMUX_ACTIVE]    = &cam_settings[0],
			[GPIOMUX_SUSPENDED] = &gpio_suspend_config[0],
		},
	},	
	{
		.gpio      = 31,		/* SD_CARD_DET_N */
		.settings = {
			[GPIOMUX_ACTIVE]    = &sd_card_det_active_config,
			[GPIOMUX_SUSPENDED] = &sd_card_det_sleep_config,
		},
	},
	{
		.gpio      = 32,	/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 33,		/* CDC_HS_DET */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_cdc_hs_det_config,
            [GPIOMUX_SUSPENDED] = &gpio_cdc_hs_det_config,
		},
	},
	{
		.gpio = 34, /* HW_ID5 */
		.settings = {
			[GPIOMUX_ACTIVE] = &gpio_hw_id_config,
			[GPIOMUX_SUSPENDED] = &gpio_hw_id_config,
		},
	},
	{
		.gpio      = 35,		/* KYPD_PWR_MSM */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_kypd_pwr_config,
            [GPIOMUX_SUSPENDED] = &gpio_kypd_pwr_config,
		},
	},
	{
		.gpio      = 36,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 37,		/* HW_ID6 */
		.settings = {
			[GPIOMUX_ACTIVE] = &gpio_hw_id_config,
			[GPIOMUX_SUSPENDED] = &gpio_hw_id_config,
		},
	},
	{
		.gpio      = 38,		/* MAIN_CAM_RST */
		.settings = {
            [GPIOMUX_ACTIVE] = &cam_settings[6],
            [GPIOMUX_SUSPENDED] = &cam_settings[6],
		},
	},
	{
		.gpio      = 49,		/* HS_HOOK_DET */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_hs_hook_det_config,
            [GPIOMUX_SUSPENDED] = &gpio_hs_hook_det_config,
		},
	},
	{
		.gpio      = 50,		/* MIC2_BIAS_EN */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_mic_bias_config[1],
            [GPIOMUX_SUSPENDED] = &gpio_mic_bias_config[1],
		},
	},
	{
		.gpio      = 51,		/* HS_PATH_EN */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_hs_path_config[1],
            [GPIOMUX_SUSPENDED] = &gpio_hs_path_config[1],
		},
	},
	{
		.gpio      = 52,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 53,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 54,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 55,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 56,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 62,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	// ASUS_BSP +++ yan_sun "[A500KL][Sensor][NA][Spec] Porting gsensor kxtj2"
	{
		.gpio      = 63,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_acc_int_config,
            [GPIOMUX_SUSPENDED] = &gpio_acc_int_config,
		},
	},
	// ASUS_BSP --- yan_sun "[A500KL][Sensor][NA][Spec] Porting gsensor kxtj2"
	{
		.gpio      = 64,		/* */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	/*
	{
		.gpio      = 64,		// GYRO_INT_N /
		.settings = {
			[GPIOMUX_SUSPENDED] = &gpio_gyro_int_config,
			[GPIOMUX_ACTIVE] = &gpio_gyro_int_config,
		},
	},*/
	/*
	{
		.gpio      = 65,		// PROXM_INT /
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_proxm_int_config,
		},
	},*/
	/*{
		.gpio = 65,
		.settings = {
			[GPIOMUX_SUSPENDED] = &auxpcm_sus_cfg,
			[GPIOMUX_ACTIVE] = &auxpcm_act_cfg,
		},
	},*/
	// ASUS_BSP +++ eric_gong "Proximity/Light Sensor Porting"
	{
			.gpio = 65,
			.settings = {
					[GPIOMUX_SUSPENDED] = &proxm_interrupt,
					[GPIOMUX_ACTIVE]    = &proxm_interrupt,
			},
	},
	// ASUS_BSP --- eric_gong "Proximity/Light Sensor Porting"
	{
		.gpio      = 66,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &tp_cfg,
            [GPIOMUX_SUSPENDED] = &tp_cfg,
		},
	},
	{
		.gpio = 67,
		.settings = {
            [GPIOMUX_ACTIVE] = &tp_cfg,
            [GPIOMUX_SUSPENDED] = &tp_cfg,
		},
	},
	{
		.gpio      = 68,		/* CODEC_INT */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_codec_int_config,
            [GPIOMUX_SUSPENDED] = &gpio_codec_int_config,
		},
	},
	{
		.gpio      = 69,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 70,		/* CODEC_SLIMBUS_CLK */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_codec_slimbus_config,
            [GPIOMUX_SUSPENDED] = &gpio_codec_slimbus_config,
		},
	},
	{
		.gpio      = 71,		/* CODEC_SLIMBUS_DATA */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_codec_slimbus_config,
            [GPIOMUX_SUSPENDED] = &gpio_codec_slimbus_config,
		},
	},
	{
		.gpio      = 72,		/* CODEC_RST_N*/
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_codec_rst_config[1],
            [GPIOMUX_SUSPENDED] = &gpio_codec_rst_config[1],
		},
	},
	{
		.gpio      = 73,		/* RFFE1_CLK */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_rffe_config,
            [GPIOMUX_SUSPENDED] = &gpio_rffe_config,
		},
	},
	{
		.gpio      = 74,		/* RFFE1_DATA */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_rffe_config,
            [GPIOMUX_SUSPENDED] = &gpio_rffe_config,
		},
	},
	{
		.gpio      = 76,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 80,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 81,		/* WDOG_DIS */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_wdog_config,
            [GPIOMUX_SUSPENDED] = &gpio_wdog_config,
		},
	},
	{
		.gpio      = 82,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 83,		/* */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 85,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 86,		/* */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 88,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 89,		/* */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 90,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 91,		/* */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 92,		/* */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 94,		/* */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 97,		/* */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 98,		/* */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 103,		/* */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 104,		/* */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 105,	/* GPS_EXT_CTL */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_gps_config[1],
            [GPIOMUX_SUSPENDED] = &gpio_gps_config[1],
		},
	},
	{
		.gpio      = 106,	/* MSM_VOL_UP */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_msm_vol_config[1],
            [GPIOMUX_SUSPENDED] = &gpio_msm_vol_config[1],
		},
	},
	{
		.gpio      = 107,	/* MSM_VOL_DOWN */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_msm_vol_config[1],
            [GPIOMUX_SUSPENDED] = &gpio_msm_vol_config[1],
		},
	},
	{
		.gpio      = 108,		/* SW_OPT1 */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_sw_opt_config,
            [GPIOMUX_SUSPENDED] = &gpio_sw_opt_config,
		},
	},
	{
		.gpio      = 109,		/* SW_OPT2 */
		.settings = {
            [GPIOMUX_ACTIVE] = &gpio_sw_opt_config,
            [GPIOMUX_SUSPENDED] = &gpio_sw_opt_config,
		},
	},
	{
		.gpio      = 110,	/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 111,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 112,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 113,		/* FORCE_USB_BOOT */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 114,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 115,		/* */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 119,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
	{
		.gpio      = 120,		/*  */
		.settings = {
            [GPIOMUX_ACTIVE] = &NC_cfg,
            [GPIOMUX_SUSPENDED] = &NC_cfg,
		},
	},
};

#endif  /* __a500kl_er2_GPIO_PINMUX_H  */
