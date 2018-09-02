#ifndef _GT9XX_CONFIG_H_
#define _GT9XX_CONFIG_H_

/*STEP_1(REQUIRED):Change config table.*/
/*TODO: puts the config info corresponded to your TP here, the following is just
a sample config, send this config should cause the chip cannot work normally*/
#define CTP_CFG_GROUP1 {\
0x48,0xD0,0x02,0x00,0x05,0x05,0x34,0x01,0x02,0x44,\
	0x28,0x05,0x50,0x32,0x03,0x07,0x00,0x00,0xFF,0x7F,\
	0x00,0x00,0x00,0x17,0x19,0x1D,0x14,0x8C,0x2E,0x0E,\
	0x31,0x33,0x31,0x0D,0x0F,0x0F,0x00,0x02,0x33,0x1D,\
	0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x7A,0x14,0x46,0x94,0xC5,0x02,0x07,0x00,0x19,0x04,\
	0xF1,0x16,0x00,0xC0,0x1D,0x00,0x9D,0x25,0x00,0x81,\
	0x30,0x00,0x6D,0x3E,0x00,0x6D,0x13,0x40,0x65,0x00,\
	0xF7,0x4A,0x3A,0xFF,0xFF,0x27,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,\
	0x10,0x42,0xF8,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00,\
	0x50,0x32,0x0E,0x10,0x12,0x14,0x16,0x18,0x1A,0x1C,\
	0x0C,0x0A,0x08,0x06,0x02,0x04,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x1C,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x24,\
	0x26,0x28,0x29,0x2A,0x16,0x18,0x04,0x06,0x02,0x00,\
	0x08,0x13,0x12,0x10,0x0F,0x0C,0x0A,0x14,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x00,0xB3,0x01\
}

#define CTP_CFG_GROUP1_CHARGER {\
0x48,0xD0,0x02,0x00,0x05,0x05,0x34,0x01,0x02,0x44,\
	0x28,0x05,0x50,0x32,0x03,0x07,0x00,0x00,0xFF,0x7F,\
	0x00,0x00,0x00,0x17,0x19,0x1D,0x14,0x8C,0x2E,0x0E,\
	0x31,0x33,0x31,0x0D,0x0F,0x0F,0x00,0x02,0x33,0x1D,\
	0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x7A,0x14,0x46,0x94,0xC5,0x02,0x07,0x00,0x19,0x04,\
	0xF1,0x16,0x00,0xC0,0x1D,0x00,0x9D,0x25,0x00,0x81,\
	0x30,0x00,0x6D,0x3E,0x00,0x6D,0x13,0x40,0x65,0x00,\
	0xF7,0x4A,0x3A,0xFF,0xFF,0x27,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,\
	0x10,0x42,0xF8,0x0F,0x00,0x00,0x0F,0x0F,0x00,0x00,\
	0x50,0x32,0x0E,0x10,0x12,0x14,0x16,0x18,0x1A,0x1C,\
	0x0C,0x0A,0x08,0x06,0x02,0x04,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x1C,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x24,\
	0x26,0x28,0x29,0x2A,0x16,0x18,0x04,0x06,0x02,0x00,\
	0x08,0x13,0x12,0x10,0x0F,0x0C,0x0A,0x14,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x00,0xB3,0x01\
}

/*TODO puts your group2 config info here,if need.*/
#define CTP_CFG_GROUP2 {\
}

/*TODO puts your group2 config info here,if need.*/
#define CTP_CFG_GROUP2_CHARGER {\
}

/*TODO puts your group3 config info here,if need.*/
#define CTP_CFG_GROUP3 {\
}

/*TODO puts your group3 config info here,if need.*/
#define CTP_CFG_GROUP3_CHARGER {\
}
/* TODO: define your config for Sensor_ID == 3 here, if needed*/
#define CTP_CFG_GROUP4 {\
}

/* TODO: define your config for Sensor_ID == 4 here, if needed*/
#define CTP_CFG_GROUP5 {\
}

/* TODO: define your config for Sensor_ID == 5 here, if needed*/
#define CTP_CFG_GROUP6 {\
}

#endif				/* _GT9XX_CONFIG_H_ */