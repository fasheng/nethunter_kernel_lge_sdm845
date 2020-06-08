// Version Name : 00-00-0000
// Time Stamp : 2018/08/07 17:14:35

//#define	SELECT_GYRO			0	// --- gyro ---//
//									// 0 : InvenSense INVN_ICG-1020S
//									// 1 : ---
//									// 2 : ---
//									// 3 : ---
//#define	SELECT_ACT			2	// --- actuator ---//
//									// 0 : not use
//									// 1 : (LGIT  )LGIT N3
//									// 2 : (LGIT  )LGIT N3V02

#define CHECKSUM_COMMAND_DMB0_2			0x001001de

#define LC898124EP1_DMB_ByteSize0_2		0x0394
#define LC898124EP1_DMB_CheckSum0_2		0xAA99F2FE

#define LC898124EP1_PMCheckSum0_2		0x00051444
#define LC898124EP1_PMSize0_2			864

const unsigned char LC898124EP1_DM0_2[] = {
0x80, 0x00, 0x09, 0x0e, 0x00, 0x0b,
0x80, 0x04, 0x00, 0x00, 0x02, 0x00,
0x80, 0x0C, 0x00, 0x10, 0x01, 0xde,
0x80, 0x90, 0x7f, 0xff, 0xff, 0xff,
0x80, 0x94, 0x7f, 0xff, 0xff, 0xff,
0x80, 0x98, 0x80, 0x00, 0x00, 0x01,
0x80, 0x9C, 0x01, 0x34, 0xba, 0x49,
0x80, 0xA0, 0x7f, 0xf7, 0xdc, 0x40,
0x80, 0xA4, 0x01, 0x34, 0xba, 0x49,
0x80, 0xA8, 0xe1, 0x6d, 0x7f, 0xb3,
0x80, 0xAC, 0x7f, 0xc3, 0x00, 0x7c,
0x80, 0xB0, 0x1e, 0xcf, 0x7f, 0xd1,
0x80, 0xB4, 0x8a, 0x87, 0x5e, 0x17,
0x80, 0xB8, 0x6b, 0xdb, 0xa5, 0x0b,
0x80, 0xBC, 0x76, 0x63, 0x03, 0x23,
0x80, 0xC0, 0x86, 0x59, 0xfe, 0x01,
0x80, 0xC4, 0x77, 0xea, 0x8e, 0x2b,
0x80, 0xC8, 0x7e, 0x44, 0x8c, 0x2d,
0x80, 0xD8, 0x28, 0x7a, 0x26, 0xc5,
0x80, 0xDC, 0x7f, 0xff, 0xff, 0xff,
0x80, 0xE0, 0x7f, 0xff, 0xff, 0xff,
0x80, 0xE4, 0x7f, 0xff, 0xff, 0xff,
0x80, 0xE8, 0x7f, 0xff, 0xff, 0xff,
0x80, 0xEC, 0x7f, 0xff, 0xff, 0xff,
0x80, 0xF0, 0x30, 0x00, 0xf4, 0x57,
0x80, 0xF4, 0x7f, 0xff, 0xff, 0xff,
0x80, 0xF8, 0x0f, 0xb1, 0xac, 0xeb,
0x80, 0xFC, 0x60, 0x9c, 0xa6, 0x2b,
0x81, 0x00, 0x0f, 0xb1, 0xac, 0xeb,
0x81, 0x04, 0x92, 0x6e, 0x5c, 0x4b,
0x81, 0x08, 0x6d, 0x91, 0xa3, 0xb3,
0x81, 0x0C, 0x38, 0xf6, 0xe2, 0x2e,
0x81, 0x10, 0xcc, 0x54, 0x61, 0xd3,
0x81, 0x14, 0x3a, 0xb4, 0xbb, 0xfd,
0x81, 0x18, 0x9e, 0x97, 0xcd, 0xd7,
0x81, 0x1C, 0x61, 0x68, 0x32, 0x29,
0x81, 0x20, 0x33, 0x45, 0x21, 0x5d,
0x81, 0x24, 0xd7, 0x96, 0x1d, 0x67,
0x81, 0x28, 0x35, 0x24, 0xc1, 0x3d,
0x81, 0x2C, 0x7f, 0xff, 0xff, 0xff,
0x81, 0x30, 0x7f, 0xff, 0xff, 0xff,
0x81, 0x34, 0x80, 0x00, 0x00, 0x01,
0x81, 0x38, 0x01, 0x34, 0xba, 0x49,
0x81, 0x3C, 0x7f, 0xf7, 0xdc, 0x40,
0x81, 0x40, 0x01, 0x34, 0xba, 0x49,
0x81, 0x44, 0xe1, 0x6d, 0x7f, 0xb3,
0x81, 0x48, 0x7f, 0xc3, 0x00, 0x7c,
0x81, 0x4C, 0x1e, 0xcf, 0x7f, 0xd1,
0x81, 0x50, 0x8a, 0x87, 0x5e, 0x17,
0x81, 0x54, 0x6b, 0xdb, 0xa5, 0x0b,
0x81, 0x58, 0x76, 0x63, 0x03, 0x23,
0x81, 0x5C, 0x86, 0x59, 0xfe, 0x01,
0x81, 0x60, 0x77, 0xea, 0x8e, 0x2b,
0x81, 0x64, 0x7e, 0x44, 0x8c, 0x2d,
0x81, 0x74, 0x28, 0x7a, 0x26, 0xc5,
0x81, 0x78, 0x7f, 0xff, 0xff, 0xff,
0x81, 0x7C, 0x7f, 0xff, 0xff, 0xff,
0x81, 0x80, 0x7f, 0xff, 0xff, 0xff,
0x81, 0x84, 0x7f, 0xff, 0xff, 0xff,
0x81, 0x88, 0x7f, 0xff, 0xff, 0xff,
0x81, 0x8C, 0x30, 0x00, 0xf4, 0x57,
0x81, 0x90, 0x7f, 0xff, 0xff, 0xff,
0x81, 0x94, 0x0f, 0xb1, 0xac, 0xeb,
0x81, 0x98, 0x60, 0x9c, 0xa6, 0x2b,
0x81, 0x9C, 0x0f, 0xb1, 0xac, 0xeb,
0x81, 0xA0, 0x92, 0x6e, 0x5c, 0x4b,
0x81, 0xA4, 0x6d, 0x91, 0xa3, 0xb3,
0x81, 0xA8, 0x38, 0xf6, 0xe2, 0x2e,
0x81, 0xAC, 0xcc, 0x54, 0x61, 0xd3,
0x81, 0xB0, 0x3a, 0xb4, 0xbb, 0xfd,
0x81, 0xB4, 0x9e, 0x97, 0xcd, 0xd7,
0x81, 0xB8, 0x61, 0x68, 0x32, 0x29,
0x81, 0xBC, 0x33, 0x45, 0x21, 0x5d,
0x81, 0xC0, 0xd7, 0x96, 0x1d, 0x67,
0x81, 0xC4, 0x35, 0x24, 0xc1, 0x3d,
0x81, 0xC8, 0x7f, 0xff, 0xff, 0xff,
0x81, 0xCC, 0x80, 0x00, 0x00, 0x01,
0x81, 0xD0, 0x7f, 0xff, 0xff, 0xff,
0x81, 0xD4, 0x80, 0x00, 0x00, 0x01,
0x81, 0xD8, 0x7f, 0xff, 0xff, 0xff,
0x81, 0xDC, 0x80, 0x00, 0x00, 0x01,
0x81, 0xE0, 0x7f, 0xff, 0xff, 0xff,
0x81, 0xE4, 0x80, 0x00, 0x00, 0x01,
0x81, 0xE8, 0x7f, 0xff, 0xff, 0xff,
0x81, 0xEC, 0x80, 0x00, 0x00, 0x01,
0x81, 0xF0, 0x7f, 0xff, 0xff, 0xff,
0x81, 0xF4, 0x80, 0x00, 0x00, 0x01,
0x81, 0xF8, 0x03, 0x04, 0x02, 0x00,
0x81, 0xFC, 0x02, 0x00, 0x01, 0x01,
0x82, 0x00, 0x01, 0x01, 0x03, 0x04,
0x82, 0x04, 0x00, 0x12, 0x74, 0x74,
0x82, 0x14, 0x7f, 0xff, 0xff, 0xff,
0x82, 0x1C, 0x7f, 0xff, 0xff, 0xff,
0x82, 0x28, 0xff, 0x62, 0xff, 0x6f,
0x82, 0x2C, 0xf5, 0x4e, 0xff, 0x51,
0x82, 0x30, 0xff, 0x24, 0xff, 0x31,
0x82, 0x34, 0x1b, 0xc6, 0x46, 0xcd,
0x82, 0x3C, 0x3c, 0x28, 0x18, 0x42,
0x82, 0x40, 0xfe, 0x5c, 0xfc, 0x8b,
0x82, 0x44, 0x01, 0x81, 0x00, 0x00,
0x82, 0x48, 0xff, 0x6f, 0x02, 0xe4,
0x82, 0x4C, 0xff, 0x51, 0xff, 0x62,
0x82, 0x50, 0xff, 0x31, 0xf5, 0x4e,
0x82, 0x54, 0x46, 0xcd, 0xff, 0x24,
0x82, 0x58, 0x00, 0x00, 0x1b, 0xc6,
0x82, 0x5C, 0x18, 0x42, 0x00, 0x00,
0x82, 0x60, 0xfc, 0x8b, 0x3c, 0x28,
0x82, 0x64, 0x00, 0x00, 0xfe, 0x5c,
0x82, 0x68, 0x02, 0xe4, 0x01, 0x81,
0x82, 0x6C, 0x00, 0x07, 0xff, 0xff,
0x82, 0x70, 0x7f, 0xff, 0xff, 0xff,
0x82, 0x78, 0x5d, 0x0c, 0x72, 0xd3,
0x82, 0x7C, 0x24, 0x84, 0x59, 0x71,
0x82, 0x80, 0x8b, 0x86, 0xae, 0xbf,
0x82, 0x84, 0x63, 0xb6, 0xd1, 0x29,
0x82, 0x88, 0x79, 0x6c, 0x74, 0xe5,
0x82, 0x8C, 0xb8, 0x3e, 0x2f, 0x47,
0x82, 0x90, 0x7f, 0xf9, 0xe5, 0x23,
0x82, 0x94, 0x47, 0xc7, 0xeb, 0x95,
0x82, 0x98, 0x7f, 0xff, 0xff, 0xff,
0x82, 0xA0, 0x7f, 0xfb, 0x00, 0x00,
0x82, 0xA4, 0x06, 0x70, 0x30, 0x9d,
0x82, 0xA8, 0x00, 0x65, 0x71, 0x75,
0x82, 0xAC, 0x7f, 0x35, 0x1d, 0x15,
0x82, 0xB0, 0x00, 0x65, 0x71, 0x75,
0x82, 0xB4, 0x7f, 0xff, 0xff, 0xff,
0x82, 0xB8, 0x7f, 0xff, 0xff, 0xff,
0x82, 0xBC, 0x40, 0x26, 0xe7, 0x3d,
0x82, 0xC0, 0x11, 0x26, 0x6b, 0x8b,
0x82, 0xC4, 0x6a, 0x2e, 0xd5, 0x8d,
0x82, 0xC8, 0x11, 0x26, 0x6b, 0x8b,
0x82, 0xD0, 0x7f, 0xff, 0xff, 0xff,
0x82, 0xD8, 0x5d, 0x0c, 0x72, 0xd3,
0x82, 0xDC, 0x24, 0x84, 0x59, 0x71,
0x82, 0xE0, 0x8b, 0x86, 0xae, 0xbf,
0x82, 0xE4, 0x63, 0xb6, 0xd1, 0x29,
0x82, 0xE8, 0x79, 0x6c, 0x74, 0xe5,
0x82, 0xEC, 0xb8, 0x3e, 0x2f, 0x47,
0x82, 0xF0, 0x7f, 0xf9, 0xe5, 0x23,
0x82, 0xF4, 0x47, 0xc7, 0xeb, 0x95,
0x82, 0xF8, 0x7f, 0xff, 0xff, 0xff,
0x83, 0x00, 0x7f, 0xfb, 0x00, 0x00,
0x83, 0x04, 0x06, 0x70, 0x30, 0x9d,
0x83, 0x08, 0x00, 0x65, 0x71, 0x75,
0x83, 0x0C, 0x7f, 0x35, 0x1d, 0x15,
0x83, 0x10, 0x00, 0x65, 0x71, 0x75,
0x83, 0x14, 0x7f, 0xff, 0xff, 0xff,
0x83, 0x18, 0x7f, 0xff, 0xff, 0xff,
0x83, 0x1C, 0x40, 0x26, 0xe7, 0x3d,
0x83, 0x20, 0x11, 0x26, 0x6b, 0x8b,
0x83, 0x24, 0x6a, 0x2e, 0xd5, 0x8d,
0x83, 0x28, 0x11, 0x26, 0x6b, 0x8b,
0x83, 0x38, 0x00, 0x00, 0x03, 0x01,
0x83, 0x3C, 0x00, 0x00, 0x03, 0x01,
0x83, 0x40, 0x00, 0x05, 0x16, 0x4d,
0x83, 0x44, 0x7f, 0xf5, 0xd3, 0x65,
0x83, 0x48, 0x00, 0x05, 0x16, 0x4d,
0x83, 0x60, 0x24, 0xeb, 0x48, 0x54,
0x83, 0x64, 0x10, 0x00, 0x00, 0x00,
0x83, 0x68, 0x24, 0xeb, 0x48, 0x54,
0x83, 0x6C, 0x24, 0xeb, 0x48, 0x54,
0x83, 0x70, 0x7f, 0xff, 0xff, 0xff,
0x83, 0x74, 0x7f, 0xff, 0xff, 0xff,
0x83, 0xB0, 0x00, 0x64, 0x00, 0x05,
0x83, 0xC8, 0x00, 0x00, 0x02, 0x20,
0x83, 0xE0, 0x00, 0x00, 0x02, 0x44,
0x83, 0xF0, 0x80, 0x00, 0x00, 0x01,
0x83, 0xF4, 0x7f, 0xff, 0xff, 0xff,
0x83, 0xF8, 0x7f, 0xff, 0xff, 0xff,
0x84, 0x00, 0x00, 0x15, 0xd2, 0xf3,
0x84, 0x04, 0x0c, 0xc9, 0x9a, 0x66,
0x84, 0x08, 0x00, 0x00, 0x00, 0x1e,
0x84, 0x0C, 0x00, 0x00, 0x00, 0x01,
0x84, 0x10, 0x00, 0x04, 0x00, 0x00,
0x84, 0x14, 0x00, 0x00, 0x00, 0x80,
0x84, 0x18, 0x06, 0x90, 0xea, 0xe1,
0x84, 0x1C, 0x00, 0x10, 0x00, 0x00,
0x84, 0x20, 0x03, 0x00, 0x00, 0x00,
0x84, 0x24, 0x00, 0x00, 0x40, 0x00,
0x84, 0x2C, 0x00, 0x00, 0x03, 0xe8,
0x84, 0x30, 0x00, 0x00, 0x00, 0x14,
0x84, 0x34, 0x00, 0x00, 0x32, 0x00,
0x84, 0x38, 0x0a, 0x3d, 0x00, 0x00,
0x84, 0x44, 0x24, 0xeb, 0x48, 0x54,
0x84, 0x5C, 0x7f, 0xfb, 0x00, 0x00,
0x84, 0x60, 0x00, 0x00, 0x81, 0xe4,
0x84, 0x64, 0x6f, 0xf5, 0x91, 0x38,
0x84, 0x68, 0x00, 0x00, 0x00, 0x40,
0x84, 0x70, 0x00, 0x00, 0x13, 0x88,
0x84, 0x78, 0xb9, 0xb9, 0x1c, 0x0b,
0x84, 0x7C, 0x7e, 0x6b, 0x7a, 0xc1,
0x84, 0x80, 0x47, 0xdb, 0x69, 0x33,
0x84, 0x84, 0x00, 0x00, 0x01, 0x3b,
0x84, 0x88, 0x00, 0x00, 0x17, 0xf8,
0x84, 0x8C, 0xb8, 0x3e, 0x2f, 0x47,
0x84, 0x90, 0x47, 0xc7, 0xeb, 0x95,
0x84, 0x94, 0x7f, 0xf3, 0x00, 0x00,
0x84, 0x98, 0x00, 0x00, 0x13, 0x88,
0x84, 0x9C, 0x7f, 0xff, 0xff, 0xff,
0x84, 0xA4, 0x24, 0xeb, 0x48, 0x54,
0x84, 0xA8, 0x7f, 0xff, 0x00, 0x00,
0x84, 0xAC, 0x00, 0x00, 0x00, 0x80,
0x84, 0xB4, 0x00, 0x60, 0x00, 0x00,
0x84, 0xB8, 0x00, 0x2b, 0x00, 0x00,
0x84, 0xBC, 0x00, 0x4b, 0x00, 0x00,
0x84, 0xC0, 0x00, 0x4b, 0x00, 0x00,
0x84, 0xD4, 0x0c, 0xcc, 0xcc, 0xcc,
0x84, 0xD8, 0x19, 0x99, 0x99, 0x99,
0x84, 0xDC, 0x33, 0x33, 0x33, 0x33,
0x84, 0xE0, 0x3f, 0xff, 0xff, 0xff,
0x84, 0xE4, 0x66, 0x66, 0x66, 0x66,
0x84, 0xE8, 0x5f, 0xff, 0xff, 0xff,
0x84, 0xEC, 0x7f, 0xff, 0xff, 0xff,
0x84, 0xF0, 0x46, 0x66, 0x66, 0x65,
0x84, 0xF4, 0x2a, 0xaa, 0xaa, 0xaa,
0x84, 0xF8, 0x80, 0x00, 0x00, 0x00,
0x84, 0xFC, 0x04, 0x00, 0x00, 0x00,
0x85, 0x00, 0x73, 0x33, 0x33, 0x32,
0x85, 0x04, 0x7a, 0xe1, 0x47, 0xad,
0x85, 0x08, 0x46, 0x40, 0x00, 0x00,
0x85, 0x0C, 0x46, 0x00, 0x00, 0x00,
0x85, 0x10, 0x00, 0x00, 0x01, 0x51,
0x85, 0x44, 0x5f, 0x37, 0x59, 0xdf,
0x85, 0x48, 0x5f, 0xff, 0xff, 0xff,
0x85, 0x58, 0x00, 0xc8, 0x00, 0xc8,
0x85, 0x5C, 0x06, 0x00, 0x00, 0x00,
0x85, 0x68, 0x00, 0x10, 0x06, 0x44,
0x85, 0x88, 0x00, 0x10, 0x06, 0x80,
0x85, 0xA0, 0x00, 0x10, 0x05, 0xfe,
};

const unsigned char LC898124EP1_PM0_2[] = {
0x5c, 0x00, 0x6a, 0xc0, 0x20,
0x68, 0x34, 0x00, 0x0c, 0x20,
0x6c, 0x70, 0x28, 0x06, 0x49,
0x5c, 0x00, 0xe0, 0x40, 0x49,
0x5c, 0x02, 0xf2, 0x00, 0x20,
0x5c, 0xbe, 0x08, 0x00, 0x49,
0x5c, 0x04, 0x00, 0x40, 0x49,
0xa0, 0x46, 0x05, 0xc0, 0x4a,
0x00, 0x24, 0x8b, 0x06, 0x22,
0x68, 0x34, 0x04, 0x04, 0x24,
0x5c, 0x0e, 0x10, 0x40, 0x52,
0x86, 0x04, 0xaa, 0x02, 0x80,
0xb1, 0xdf, 0x6a, 0xbf, 0xd0,
0x9e, 0x08, 0x48, 0x40, 0x4a,
0x88, 0x06, 0x48, 0x20, 0x50,
0x86, 0x04, 0x9a, 0x00, 0x80,
0xb1, 0x81, 0xd8, 0x00, 0x49,
0x68, 0x34, 0x08, 0x4a, 0x24,
0xb0, 0x80, 0xd8, 0x40, 0x49,
0xa2, 0x02, 0x08, 0x60, 0x7a,
0x80, 0x07, 0xa8, 0x00, 0x48,
0xac, 0x7e, 0x08, 0x00, 0x48,
0xac, 0x58, 0x06, 0x80, 0x00,
0x01, 0xb2, 0x48, 0x02, 0x48,
0xb0, 0x60, 0x48, 0x60, 0x09,
0x52, 0x05, 0x6a, 0xc4, 0x00,
0x80, 0x24, 0x86, 0x80, 0x40,
0x1a, 0x02, 0xc6, 0xc4, 0x00,
0x2c, 0x46, 0xc8, 0x60, 0x49,
0x40, 0x00, 0x00, 0x40, 0x48,
0x66, 0x00, 0x40, 0xa8, 0xe0,
0x66, 0x00, 0x40, 0x34, 0xa0,
0x66, 0x00, 0x41, 0x60, 0x00,
0x68, 0x00, 0x00, 0xd7, 0x20,
0x66, 0x00, 0x41, 0x6c, 0xc0,
0x66, 0x00, 0x41, 0x28, 0x40,
0x5c, 0x08, 0x2a, 0x40, 0x80,
0x6c, 0x40, 0x03, 0x24, 0x00,
0x6c, 0x40, 0x03, 0x20, 0x08,
0x24, 0x14, 0x02, 0x41, 0x66,
0x6c, 0x40, 0x03, 0x24, 0x50,
0x6c, 0x40, 0x03, 0x20, 0x4a,
0x66, 0x00, 0x40, 0x70, 0x68,
0x5c, 0x00, 0x6b, 0x00, 0x84,
0xa4, 0x08, 0x09, 0x40, 0x2c,
0xb0, 0x7b, 0xe3, 0x01, 0xa0,
0xbc, 0x32, 0x93, 0x80, 0x0d,
0x66, 0x00, 0x40, 0x70, 0x68,
0x40, 0x00, 0x03, 0x03, 0xbc,
0x68, 0x38, 0x1c, 0x02, 0x20,
0x5c, 0x04, 0x23, 0x03, 0x35,
0x5c, 0x00, 0x60, 0x40, 0x48,
0xa0, 0x02, 0x08, 0x40, 0x49,
0x98, 0xe8, 0x96, 0x00, 0x06,
0x00, 0x06, 0x78, 0x40, 0xc8,
0x40, 0x00, 0x02, 0x40, 0x80,
0x6c, 0x70, 0x38, 0x00, 0x08,
0x3a, 0x10, 0x42, 0x81, 0x2d,
0x3a, 0x14, 0x59, 0x40, 0x2e,
0x6c, 0x00, 0x00, 0x36, 0x00,
0x30, 0x17, 0x0b, 0xc1, 0x29,
0x38, 0x1d, 0xc6, 0xe4, 0x00,
0x00, 0x83, 0xd6, 0x80, 0x02,
0x00, 0x00, 0xa2, 0x89, 0xad,
0x32, 0x02, 0x85, 0x24, 0x82,
0x3c, 0x0c, 0x96, 0xc0, 0x00,
0x03, 0x64, 0x83, 0x81, 0xd5,
0x6c, 0x00, 0x00, 0x36, 0x08,
0x24, 0x16, 0x56, 0xc0, 0x00,
0x03, 0x64, 0x9b, 0xc0, 0x37,
0x24, 0x10, 0x56, 0xc0, 0x00,
0x03, 0x64, 0x93, 0x81, 0xd6,
0x6c, 0x00, 0x00, 0x36, 0x09,
0x25, 0x9a, 0x8b, 0xc0, 0x48,
0x38, 0x1c, 0x42, 0x49, 0x2d,
0x6c, 0x00, 0x00, 0x36, 0x49,
0x68, 0x04, 0x00, 0x89, 0x20,
0x6c, 0x00, 0x01, 0x4a, 0x60,
0x66, 0x01, 0x00, 0x19, 0xc0,
0x5c, 0x09, 0xe8, 0x80, 0x20,
0x6c, 0x00, 0x02, 0x1e, 0x7a,
0x68, 0x00, 0x00, 0x00, 0xf9,
0x5c, 0x00, 0x20, 0x40, 0x0a,
0x24, 0x17, 0x58, 0x40, 0x49,
0x6e, 0x00, 0x02, 0xaa, 0x74,
0x66, 0x00, 0x40, 0xf3, 0x00,
0x6c, 0x40, 0x02, 0xa6, 0x09,
0x5c, 0x0a, 0xb3, 0x01, 0x5c,
0x52, 0x4d, 0x72, 0xc0, 0x20,
0x68, 0x00, 0x01, 0x56, 0x20,
0x68, 0x03, 0x00, 0x00, 0x24,
0x52, 0x49, 0xa3, 0x01, 0x65,
0x52, 0x4b, 0x28, 0x00, 0x64,
0x5c, 0x0b, 0x60, 0x40, 0xfa,
0x52, 0x49, 0x68, 0x40, 0x7a,
0x6c, 0x40, 0x02, 0xa6, 0x49,
0x68, 0x00, 0x00, 0x1b, 0x24,
0x5c, 0x0e, 0xa2, 0xc0, 0xa8,
0x68, 0x01, 0x06, 0xba, 0x20,
0x40, 0x00, 0x03, 0xc0, 0x4f,
0x5c, 0x96, 0x0b, 0x00, 0x1d,
0x40, 0x00, 0x03, 0x80, 0x00,
0x6c, 0x00, 0x02, 0x1e, 0x0a,
0x32, 0xa3, 0x0b, 0xff, 0xa1,
0xa2, 0x00, 0x18, 0x22, 0x8a,
0x6c, 0x00, 0x02, 0x1e, 0x7a,
0x25, 0x93, 0x0b, 0xc0, 0xa9,
0x88, 0x06, 0x42, 0x49, 0x34,
0x68, 0x00, 0x00, 0xa4, 0x64,
0x6c, 0x40, 0x03, 0x1e, 0x49,
0x42, 0x02, 0x78, 0x0a, 0xc8,
0x40, 0x00, 0x00, 0x48, 0x60,
0x68, 0x00, 0x00, 0xa4, 0x64,
0x38, 0x13, 0xd9, 0x62, 0x0c,
0x25, 0x96, 0x0b, 0xc2, 0x68,
0x88, 0x0e, 0x46, 0x80, 0x40,
0x08, 0x92, 0x06, 0xc7, 0x01,
0x01, 0xc0, 0x93, 0x28, 0xa8,
0xbc, 0x04, 0x99, 0x88, 0x09,
0x38, 0x02, 0xc6, 0xc7, 0x01,
0x01, 0xc4, 0x80, 0x00, 0x00,
0x6c, 0x00, 0x01, 0x4a, 0x08,
0x30, 0x16, 0x0b, 0xc0, 0xa8,
0x68, 0x38, 0x08, 0x10, 0x20,
0x5c, 0x00, 0x6b, 0x06, 0x1c,
0x6c, 0x70, 0x10, 0x06, 0x48,
0x68, 0x38, 0x08, 0x03, 0x20,
0xbc, 0x0d, 0xf8, 0x41, 0xc9,
0x6c, 0x70, 0x10, 0x20, 0x09,
0x5c, 0xb6, 0x02, 0x00, 0x20,
0x68, 0x00, 0x00, 0x96, 0x24,
0x5c, 0x00, 0x60, 0x00, 0x0a,
0x6c, 0x00, 0x01, 0x2c, 0x49,
0x86, 0x0c, 0xa8, 0x40, 0x48,
0x66, 0x00, 0x40, 0xcb, 0x20,
0x88, 0x02, 0x00, 0x00, 0x00,
0x84, 0x02, 0x0b, 0xa0, 0x80,
0x68, 0x00, 0x00, 0x57, 0x20,
0x5c, 0x8c, 0x03, 0x01, 0x0d,
0x94, 0x20, 0xc2, 0x59, 0x60,
0x40, 0x00, 0x03, 0xc0, 0x69,
0x68, 0x00, 0x00, 0x6b, 0x24,
0x6c, 0x00, 0x00, 0x5a, 0x08,
0x6c, 0x00, 0x00, 0x96, 0x48,
0x68, 0x34, 0x08, 0x00, 0x21,
0x96, 0x20, 0xc2, 0x59, 0x60,
0xbc, 0x05, 0x93, 0x90, 0xe0,
0x6c, 0x00, 0x00, 0x82, 0x09,
0x6c, 0x00, 0x00, 0xbe, 0x49,
0x5c, 0x98, 0x0a, 0x09, 0x01,
0x80, 0x20, 0x95, 0x14, 0x36,
0x88, 0x1e, 0x06, 0xc6, 0x81,
0x00, 0x04, 0x90, 0x00, 0x00,
0x6c, 0x00, 0x01, 0x4a, 0x20,
0x82, 0x20, 0x85, 0x14, 0x32,
0x08, 0x16, 0x44, 0x60, 0x44,
0x00, 0x8c, 0x88, 0x80, 0x61,
0x40, 0x00, 0x03, 0x80, 0x00,
0x68, 0x00, 0x01, 0x11, 0x24,
0x5c, 0x81, 0x00, 0x80, 0x20,
0x82, 0x02, 0x18, 0x60, 0xa5,
0x84, 0x80, 0x98, 0x20, 0x21,
0x80, 0x04, 0x90, 0x00, 0x00,
0x84, 0x80, 0x9a, 0x00, 0x01,
0x80, 0x04, 0x90, 0x00, 0x00,
0x86, 0x80, 0x98, 0x60, 0xa4,
0x84, 0x8c, 0x90, 0x00, 0x00,
0x86, 0x00, 0x96, 0xc0, 0x00,
0x19, 0x42, 0x4b, 0xa0, 0xc8,
0x84, 0x0c, 0x90, 0x00, 0x00,
0x68, 0x00, 0x00, 0xc2, 0x20,
0x68, 0x20, 0x00, 0xe0, 0x24,
0x68, 0x00, 0x00, 0xc6, 0x21,
0x68, 0x20, 0x00, 0xe6, 0x25,
0x68, 0x00, 0x00, 0xac, 0x22,
0x66, 0x00, 0x40, 0xc1, 0xe0,
0x66, 0x00, 0x40, 0xf3, 0xc0,
0x68, 0x00, 0x00, 0xd7, 0x20,
0x66, 0x00, 0x41, 0x6e, 0x60,
0x5c, 0x88, 0x00, 0x80, 0xa0,
0x5c, 0x87, 0x10, 0x81, 0x24,
0x5c, 0x81, 0x08, 0x02, 0x09,
0x68, 0x00, 0x00, 0x6d, 0x21,
0x5c, 0x08, 0x78, 0x01, 0x08,
0x57, 0x0b, 0x10, 0x60, 0x0a,
0x80, 0xa8, 0x85, 0x70, 0xd0,
0x18, 0xe4, 0x85, 0x24, 0xf0,
0x80, 0x20, 0x95, 0xc8, 0x08,
0x18, 0x08, 0x85, 0x16, 0x13,
0x04, 0x00, 0x85, 0x70, 0xb1,
0x08, 0x1a, 0x56, 0x80, 0x00,
0x15, 0x32, 0x08, 0x68, 0x09,
0x84, 0x80, 0x35, 0x70, 0xad,
0x94, 0x05, 0x69, 0xa0, 0x02,
0x51, 0x61, 0xb1, 0x80, 0xc8,
0x51, 0x61, 0x21, 0x40, 0x56,
0x51, 0x61, 0x71, 0x40, 0xf4,
0x98, 0x47, 0x99, 0x40, 0x56,
0x98, 0xe4, 0x95, 0x20, 0xf6,
0x14, 0x0b, 0xd5, 0x50, 0x34,
0x18, 0x23, 0x99, 0x40, 0xf0,
0x68, 0x00, 0x00, 0x1b, 0x24,
0x68, 0x01, 0x06, 0xba, 0x20,
0x46, 0x0e, 0x03, 0x80, 0x00,
0x40, 0x00, 0x03, 0xf2, 0xcf,
0x5c, 0x0e, 0xa2, 0xc0, 0xa8,
0x68, 0x34, 0x00, 0x17, 0x20,
0x5c, 0x0b, 0x3b, 0x01, 0x06,
0x5c, 0xbd, 0x10, 0x40, 0x7a,
0x5c, 0x00, 0x62, 0x00, 0x80,
0x5c, 0x8c, 0x08, 0x40, 0x00,
0x52, 0x4e, 0x02, 0x03, 0x21,
0x5c, 0x82, 0x18, 0x40, 0x50,
0x68, 0x38, 0x08, 0x0f, 0x22,
0x5c, 0x81, 0x00, 0x48, 0x00,
0x52, 0x0c, 0x03, 0x04, 0x05,
0x5c, 0x06, 0xc0, 0x48, 0x50,
0x5c, 0x8b, 0x11, 0xd1, 0x01,
0x5c, 0x04, 0x08, 0x40, 0x03,
0x52, 0x0e, 0xdb, 0x00, 0x12,
0x84, 0x05, 0x3a, 0x05, 0xa0,
0x84, 0x07, 0xa8, 0x50, 0x48,
0x80, 0xac, 0xb5, 0xc8, 0x81,
0x80, 0x9c, 0x98, 0x08, 0x7a,
0x84, 0x85, 0x08, 0x09, 0x51,
0x80, 0xbd, 0x28, 0x08, 0x48,
0x40, 0x00, 0x03, 0x80, 0x00,
0x6c, 0x70, 0x10, 0x0e, 0x00,
0x25, 0x98, 0x0b, 0xff, 0xc1,
0x5c, 0x02, 0x70, 0x09, 0xc8,
0x5c, 0x02, 0x30, 0x48, 0x4a,
0x5c, 0x01, 0x42, 0x0c, 0x61,
0x5c, 0x82, 0x08, 0x0a, 0xca,
0x80, 0x8f, 0xa8, 0x08, 0x7a,
0xb0, 0x61, 0xe8, 0x09, 0x4a,
0x80, 0xbd, 0x08, 0x48, 0x48,
0x80, 0x07, 0xa4, 0x60, 0xa4,
0x04, 0x07, 0xa8, 0x44, 0x7a,
0x40, 0x00, 0x03, 0x80, 0x00,
0x68, 0x00, 0x00, 0x06, 0xe1,
0x5c, 0x80, 0x43, 0x00, 0xf8,
0x94, 0x80, 0xe5, 0xb4, 0xc1,
0x18, 0xeb, 0x53, 0x70, 0x85,
0x2e, 0x14, 0x56, 0x20, 0x00,
0x00, 0x02, 0x55, 0x04, 0xa9,
0x30, 0x03, 0x45, 0xb4, 0x80,
0x2b, 0xfe, 0x02, 0xf8, 0x12,
0x55, 0xcd, 0x80, 0x80, 0x76,
0x32, 0x00, 0x0b, 0xc0, 0x2b,
0x98, 0x38, 0xa3, 0x61, 0x86,
0xba, 0x11, 0x10, 0x88, 0x00,
0x98, 0x32, 0x89, 0xc8, 0x01,
0x98, 0x84, 0x86, 0x80, 0x00,
0x00, 0x70, 0xa4, 0x20, 0xf7,
0x88, 0x0c, 0x84, 0x60, 0x80,
0x98, 0x2a, 0x19, 0x48, 0x0c,
0x55, 0x5f, 0x31, 0x48, 0x0c,
0x51, 0x91, 0x81, 0x88, 0x0a,
0x54, 0x08, 0x20, 0x81, 0x61,
0x28, 0x1a, 0x49, 0x82, 0x20,
0x40, 0x00, 0x00, 0x81, 0xe0,
0x66, 0x00, 0x41, 0x7d, 0xe0,
0x5c, 0x08, 0x20, 0x81, 0xa1,
0x6c, 0x00, 0x02, 0xa0, 0x0a,
0x50, 0xc9, 0x80, 0x48, 0x0a,
0x50, 0xc9, 0x90, 0x81, 0x21,
0x54, 0x04, 0x00, 0x80, 0x88,
0x5b, 0xc0, 0x02, 0x08, 0x21,
0x6c, 0x00, 0x02, 0xa0, 0x4c,
0x98, 0x84, 0xa3, 0x01, 0x30,
0x68, 0x20, 0x00, 0x00, 0x20,
0xbf, 0xe0, 0xa3, 0x90, 0x08,
0x88, 0x03, 0x6b, 0xa1, 0x48,
0xa8, 0x02, 0x00, 0x00, 0x00,
0x68, 0x00, 0x00, 0x9e, 0x20,
0x5c, 0x81, 0x03, 0x01, 0x04,
0x5c, 0x00, 0x38, 0x00, 0x09,
0x55, 0x01, 0xd2, 0x00, 0xa1,
0x94, 0x82, 0x85, 0x2c, 0x80,
0x2b, 0xfc, 0x08, 0x40, 0x0a,
0xa0, 0xd4, 0x14, 0x20, 0x3c,
0x88, 0x2f, 0x65, 0x50, 0x1e,
0x08, 0x26, 0x16, 0x80, 0x00,
0x09, 0x62, 0x00, 0x00, 0x00,
0x84, 0x08, 0x28, 0x40, 0x0b,
0x38, 0x10, 0x92, 0x58, 0x40,
0xbc, 0x06, 0x92, 0xa0, 0x20,
0x68, 0x00, 0x00, 0x98, 0x20,
0x00, 0x00, 0x08, 0x40, 0x80,
0x84, 0x00, 0x83, 0x61, 0x41,
0x28, 0x1c, 0x93, 0x61, 0x83,
0x14, 0xc0, 0xa6, 0x80, 0x00,
0x15, 0x12, 0x05, 0x40, 0x08,
0x98, 0x04, 0x86, 0xc4, 0x00,
0x13, 0xe0, 0xa4, 0x41, 0x00,
0x04, 0x04, 0x89, 0x80, 0x48,
0x6e, 0x40, 0x01, 0x9d, 0x21,
0x6c, 0x40, 0x02, 0x56, 0x09,
0x50, 0x02, 0x00, 0x40, 0xc8,
0x51, 0x8b, 0x52, 0x08, 0x00,
0x6c, 0x40, 0x01, 0x6e, 0x0a,
0x6c, 0x00, 0x01, 0x4c, 0x0b,
0x6e, 0x40, 0x01, 0x9f, 0x21,
0x44, 0x10, 0x00, 0x08, 0x40,
0x58, 0x05, 0xc0, 0x83, 0x61,
0x50, 0x02, 0x03, 0xc0, 0x8d,
0x84, 0x84, 0x02, 0x29, 0xac,
0x2e, 0x13, 0xc6, 0xc0, 0x00,
0x14, 0xc4, 0x82, 0x29, 0x64,
0x6c, 0x40, 0x02, 0x0a, 0x48,
0x68, 0x20, 0x00, 0x9c, 0x24,
0x66, 0x00, 0x41, 0x27, 0x80,
0x68, 0x20, 0x00, 0xdc, 0x23,
0x68, 0x20, 0x00, 0xd3, 0x2c,
0x68, 0x20, 0x00, 0xdf, 0x2d,
0x88, 0x16, 0x36, 0x82, 0x00,
0x0d, 0xe2, 0x66, 0xc0, 0x00,
0x11, 0x24, 0x86, 0x80, 0x00,
0x08, 0x42, 0x06, 0x80, 0x00,
0x07, 0x02, 0x16, 0x82, 0x00,
0x09, 0xc2, 0x46, 0x82, 0x00,
0x0c, 0xe2, 0x56, 0x80, 0x00,
0x0a, 0x82, 0x28, 0x80, 0x6c,
0x88, 0x0e, 0xd8, 0x81, 0xe6,
0x68, 0x00, 0x01, 0x57, 0x23,
0x66, 0x01, 0x00, 0x43, 0xe0,
0x88, 0x22, 0x18, 0x83, 0x20,
0x68, 0x20, 0x00, 0xb4, 0x24,
0x66, 0x00, 0x41, 0x27, 0x80,
0x68, 0x20, 0x00, 0xd5, 0x2c,
0x68, 0x00, 0x01, 0x57, 0x21,
0x88, 0x06, 0xca, 0x08, 0x23,
0x68, 0x20, 0x00, 0xdf, 0xac,
0x68, 0x20, 0x00, 0xdd, 0x2d,
0x68, 0x20, 0x00, 0xde, 0xa6,
0x6c, 0x00, 0x01, 0x24, 0x48,
0x68, 0x00, 0x00, 0x8d, 0x20,
0x68, 0x00, 0x00, 0x7a, 0x21,
0x68, 0x20, 0x00, 0xb4, 0x24,
0x68, 0x20, 0x00, 0xcf, 0x25,
0x68, 0x00, 0x00, 0xaa, 0x22,
0x88, 0x0e, 0xc8, 0x81, 0x6d,
0x40, 0x00, 0x00, 0x81, 0xe6,
0x66, 0x01, 0x00, 0x43, 0xe0,
0x68, 0x20, 0x00, 0x9c, 0x21,
0x6c, 0x40, 0x02, 0x46, 0x08,
0x84, 0xb8, 0xa5, 0x80, 0x98,
0x33, 0x87, 0xe6, 0xc4, 0x00,
0x2a, 0x60, 0x96, 0x82, 0x00,
0x0b, 0x42, 0x1b, 0xc0, 0x38,
0x28, 0x9a, 0xe3, 0x81, 0x25,
0x24, 0x17, 0x68, 0x4b, 0x89,
0x30, 0x12, 0x8b, 0xc0, 0x20,
0x38, 0x12, 0xc2, 0x41, 0x36,
0x6c, 0x40, 0x01, 0xb8, 0x08,
0x6c, 0x40, 0x01, 0xfa, 0x09,
0x30, 0x16, 0x0b, 0xc0, 0x20,
0x38, 0x13, 0x42, 0x41, 0x36,
0x6c, 0x40, 0x01, 0xba, 0x08,
0x30, 0x16, 0x0b, 0xc0, 0x20,
0x38, 0x13, 0xc2, 0x41, 0x36,
0x5c, 0x00, 0x60, 0x82, 0xb6,
0x6c, 0x40, 0x02, 0xa6, 0x4a,
0x6c, 0x00, 0x02, 0x8e, 0x48,
0x68, 0x04, 0x00, 0xb7, 0xa1,
0xba, 0x14, 0x86, 0xc0, 0x00,
0x14, 0xa6, 0x1a, 0x80, 0x40,
0xab, 0xfe, 0x08, 0x80, 0x76,
0x68, 0x00, 0x00, 0x84, 0x20,
0x68, 0x00, 0x00, 0x70, 0x21,
0x68, 0x20, 0x00, 0x9c, 0x24,
0x66, 0x01, 0x00, 0x57, 0x48,
0x6c, 0x00, 0x01, 0x14, 0x08,
0x68, 0x00, 0x00, 0x8d, 0x20,
0x68, 0x00, 0x00, 0x7a, 0x21,
0x68, 0x20, 0x00, 0xb4, 0x24,
0x66, 0x01, 0x00, 0x57, 0x48,
0x6c, 0x00, 0x01, 0x26, 0x08,
0x68, 0x20, 0x00, 0x9c, 0x24,
0x6c, 0x40, 0x02, 0x2e, 0x09,
0x86, 0x60, 0x26, 0xc4, 0x00,
0x2a, 0x60, 0x33, 0x01, 0x50,
0xbc, 0x05, 0xa3, 0x81, 0x04,
0x52, 0x48, 0xe3, 0xc0, 0x6f,
0x6c, 0x40, 0x02, 0xa6, 0x48,
0x52, 0x08, 0xe3, 0x80, 0x00,
0x6c, 0x40, 0x02, 0xa6, 0x48,
0x68, 0x20, 0x00, 0xb4, 0x20,
0x6c, 0x40, 0x02, 0xa6, 0x08,
0x84, 0x60, 0x33, 0x01, 0x58,
0xbc, 0x05, 0xa3, 0x81, 0x0a,
0x52, 0x45, 0x2b, 0xc0, 0x6f,
0x6c, 0x40, 0x02, 0xa6, 0x49,
0x52, 0x05, 0x2b, 0x80, 0x00,
0x6c, 0x40, 0x02, 0xa6, 0x49,
0x68, 0x00, 0x00, 0x84, 0x20,
0x68, 0x00, 0x00, 0x70, 0x21,
0x68, 0x20, 0x01, 0xa4, 0x25,
0x66, 0x00, 0x41, 0x18, 0x00,
0x68, 0x00, 0x00, 0xa0, 0x21,
0x68, 0x00, 0x00, 0x8d, 0x20,
0x40, 0x00, 0x00, 0x48, 0x48,
0x68, 0x00, 0x00, 0x7a, 0x21,
0x68, 0x20, 0x00, 0xb4, 0x24,
0x68, 0x20, 0x01, 0xa4, 0x25,
0x66, 0x00, 0x41, 0x18, 0x00,
0x5c, 0x81, 0x00, 0x80, 0xc8,
0x68, 0x00, 0x00, 0xa0, 0x23,
0x68, 0x20, 0x00, 0xd7, 0x24,
0xa1, 0x80, 0x2c, 0x60, 0x80,
0x5d, 0x0c, 0x28, 0x58, 0x48,
0x51, 0x85, 0x68, 0x81, 0x63,
0x98, 0x26, 0x89, 0xe0, 0x00,
0x84, 0x00, 0x96, 0x82, 0x00,
0x0c, 0xc2, 0x06, 0x82, 0x00,
0x0c, 0xd2, 0x18, 0x40, 0x49,
0x84, 0x84, 0x98, 0x81, 0xd0,
0x66, 0x00, 0x41, 0x20, 0xc0,
0x32, 0x02, 0x0b, 0xc0, 0x88,
0x40, 0x00, 0x00, 0x81, 0x88,
0x6c, 0x40, 0x02, 0x4a, 0x09,
0x6c, 0x40, 0x01, 0x50, 0x49,
0x6c, 0x40, 0x01, 0x80, 0x49,
0x5b, 0x48, 0x23, 0x27, 0x9a,
0x6c, 0x00, 0x01, 0x40, 0x09,
0x5b, 0x4a, 0x18, 0x81, 0x20,
0x30, 0x0e, 0x06, 0xc4, 0x00,
0x2a, 0x60, 0x35, 0x44, 0x4d,
0x04, 0x00, 0x84, 0x20, 0x1e,
0x88, 0x08, 0x38, 0x80, 0xc8,
0x38, 0x11, 0x62, 0x41, 0x92,
0x36, 0x8c, 0x33, 0x69, 0x04,
0x30, 0x11, 0x8b, 0xc0, 0x25,
0x38, 0x11, 0xc2, 0x41, 0x12,
0x6e, 0x40, 0x01, 0xbc, 0x3c,
0x38, 0x17, 0xb2, 0x58, 0xe0,
0xbc, 0x03, 0x13, 0x81, 0x44,
0x52, 0x08, 0x93, 0x80, 0x00,
0x6e, 0x40, 0x01, 0xbd, 0x3c,
0x25, 0x8e, 0x0b, 0xc0, 0x21,
0x38, 0x14, 0xc2, 0x41, 0x12,
0x6c, 0x40, 0x02, 0xa6, 0x52,
0x68, 0x00, 0x00, 0x84, 0x20,
0x68, 0x00, 0x00, 0x70, 0x21,
0x68, 0x20, 0x00, 0x9c, 0x24,
0x68, 0x20, 0x00, 0xce, 0x25,
0x66, 0x00, 0x41, 0x19, 0x48,
0x98, 0x24, 0x88, 0x81, 0x20,
0x68, 0x00, 0x00, 0x7a, 0x21,
0x84, 0x00, 0x86, 0x80, 0x00,
0x08, 0xd2, 0x06, 0x82, 0x00,
0x0b, 0x42, 0x46, 0x82, 0x00,
0x0c, 0xf2, 0x56, 0x60, 0x04,
0x11, 0x94, 0x88, 0x80, 0x89,
0x5c, 0x08, 0xa8, 0x81, 0x20,
0x00, 0x00, 0x09, 0x46, 0x2c,
0x25, 0x96, 0x0b, 0xc0, 0x40,
0x6c, 0x00, 0x01, 0x18, 0x7a,
0x6c, 0x00, 0x01, 0x2a, 0x7a,
0x38, 0x13, 0x52, 0x59, 0x60,
0xbc, 0x0f, 0x06, 0x80, 0x00,
0x0d, 0xf2, 0x06, 0xc4, 0x00,
0x1f, 0xa0, 0x95, 0xc8, 0x10,
0x18, 0xe8, 0x89, 0x42, 0x44,
0x6c, 0x40, 0x02, 0x50, 0x7a,
0x6c, 0x40, 0x01, 0x5a, 0x49,
0x6c, 0x40, 0x01, 0x8a, 0x49,
0x42, 0x1c, 0x38, 0x40, 0x7a,
0x68, 0x00, 0x00, 0x88, 0x20,
0x68, 0x00, 0x00, 0x91, 0x21,
0x66, 0x00, 0x41, 0x2b, 0xc0,
0x6e, 0x00, 0x01, 0xbe, 0x25,
0x32, 0x06, 0x8b, 0xc1, 0x61,
0x68, 0x20, 0x01, 0x00, 0x21,
0x68, 0x20, 0x00, 0xad, 0x20,
0xa0, 0xc2, 0x28, 0x80, 0xe2,
0x66, 0x00, 0x41, 0x30, 0xc0,
0x40, 0x00, 0x00, 0x80, 0xa2,
0x68, 0x20, 0x00, 0xc5, 0x20,
0x68, 0x20, 0x01, 0x00, 0x21,
0x66, 0x00, 0x41, 0x30, 0xc0,
0x6c, 0x40, 0x02, 0x38, 0x09,
0x6c, 0x40, 0x02, 0x50, 0x49,
0x40, 0x00, 0x03, 0xc1, 0x87,
0x68, 0x20, 0x00, 0xad, 0x20,
0x68, 0x20, 0x01, 0x01, 0x21,
0x68, 0x20, 0x00, 0xfe, 0x22,
0x66, 0x00, 0x41, 0x30, 0xc0,
0x68, 0x20, 0x00, 0xfe, 0x22,
0x68, 0x20, 0x00, 0xc5, 0x20,
0x66, 0x00, 0x41, 0x30, 0xc8,
0x40, 0x00, 0x02, 0x10, 0x61,
0x6c, 0x40, 0x02, 0x50, 0x09,
0x32, 0x02, 0x8b, 0xc0, 0x40,
0x2a, 0x7e, 0xd6, 0xc4, 0x00,
0x25, 0x04, 0x90, 0x00, 0x00,
0x6c, 0x40, 0x02, 0x0a, 0x09,
0x6c, 0x40, 0x02, 0x56, 0x08,
0x30, 0x12, 0x8b, 0xc4, 0xe0,
0x6e, 0x00, 0x01, 0xbe, 0x25,
0x32, 0x06, 0x8b, 0xc4, 0xa0,
0x6c, 0x00, 0x01, 0x14, 0x09,
0x32, 0x02, 0x8b, 0xc0, 0x6b,
0x38, 0x10, 0x46, 0xc0, 0x00,
0x14, 0xe0, 0x22, 0x41, 0x14,
0x6c, 0x00, 0x01, 0x4e, 0x48,
0x32, 0x02, 0x8b, 0xc0, 0x8d,
0x38, 0x10, 0xd6, 0xc0, 0x00,
0x14, 0xe0, 0x82, 0x41, 0x65,
0x6c, 0x00, 0x01, 0x4e, 0x49,
0x40, 0x00, 0x03, 0x80, 0x00,
0x6c, 0x00, 0x01, 0x26, 0x09,
0x32, 0x02, 0x8b, 0xc0, 0x63,
0x6c, 0x00, 0x01, 0x4e, 0x08,
0x38, 0x12, 0x22, 0x40, 0xa4,
0x6c, 0x00, 0x01, 0x4e, 0x48,
0x32, 0x02, 0x8b, 0xc0, 0x85,
0x6c, 0x00, 0x01, 0x4e, 0x09,
0x38, 0x12, 0xc2, 0x41, 0x2d,
0x6c, 0x00, 0x01, 0x4e, 0x49,
0x40, 0x00, 0x03, 0x80, 0x00,
0x6c, 0x00, 0x01, 0x4e, 0x09,
0x2a, 0x8e, 0xc3, 0x20, 0xe0,
0xbc, 0x03, 0x0b, 0xc0, 0x6f,
0x6c, 0x40, 0x01, 0x5a, 0x7a,
0x6c, 0x40, 0x01, 0xfa, 0x08,
0x6c, 0x40, 0x01, 0x5a, 0x48,
0x38, 0x18, 0x42, 0x89, 0x2d,
0x30, 0x12, 0x86, 0xc0, 0x00,
0x10, 0x80, 0x2b, 0xc0, 0x58,
0x6c, 0x00, 0x01, 0x52, 0x52,
0xbc, 0x08, 0xf6, 0xc4, 0x00,
0x18, 0xa7, 0xa0, 0x00, 0x00,
0x6c, 0x40, 0x01, 0xfa, 0x09,
0x6c, 0x40, 0x01, 0x8a, 0x49,
0x00, 0x00, 0x00, 0x00, 0x00,
0x6c, 0x00, 0x01, 0x1a, 0x09,
0x6c, 0x00, 0x01, 0x56, 0x49,
0x6c, 0x00, 0x02, 0x8e, 0x7a,
0x68, 0x04, 0x00, 0x89, 0x20,
0x88, 0x03, 0x6b, 0xa1, 0x48,
0x6c, 0x00, 0x01, 0x4a, 0x60,
0x40, 0x00, 0x02, 0x80, 0x20,
0xab, 0xfc, 0x08, 0x80, 0x64,
0xa2, 0x28, 0x48, 0x80, 0xe1,
0xa0, 0x90, 0x18, 0x81, 0x64,
0x88, 0x1e, 0x38, 0x82, 0x62,
0x88, 0x2e, 0x58, 0x83, 0x60,
0x40, 0x00, 0x00, 0x83, 0xf6,
0x66, 0x00, 0x40, 0xb8, 0x68,
0x55, 0x01, 0x2a, 0x08, 0x00,
0x5c, 0x86, 0x00, 0x80, 0x20,
0x88, 0x32, 0x4a, 0x00, 0x82,
0xa2, 0x0e, 0x58, 0x2a, 0x48,
0x88, 0x06, 0x50, 0x00, 0x00,
0x88, 0x0a, 0x08, 0x81, 0x24,
0x40, 0x00, 0x00, 0x80, 0xe2,
0x66, 0x00, 0x40, 0xb9, 0x48,
0x55, 0x01, 0x2a, 0x26, 0x04,
0x5c, 0x82, 0x00, 0x82, 0xa4,
0x88, 0x52, 0x09, 0x60, 0x25,
0x50, 0x0b, 0x10, 0x40, 0x09,
0x98, 0x08, 0xa4, 0x44, 0x90,
0x08, 0x02, 0x49, 0x80, 0x89,
0x82, 0x04, 0x98, 0x80, 0x64,
0x68, 0x20, 0x00, 0xd0, 0x24,
0x40, 0x00, 0x00, 0x82, 0x20,
0x66, 0x00, 0x40, 0xb8, 0x60,
0x5c, 0x83, 0x00, 0x80, 0x24,
0x5c, 0x86, 0x08, 0x80, 0xa3,
0x82, 0x24, 0x86, 0x82, 0x00,
0x12, 0xd2, 0x28, 0x20, 0x8a,
0x6c, 0x40, 0x01, 0xae, 0x09,
0x5d, 0x0a, 0x28, 0x85, 0xa0,
0x57, 0x0d, 0x12, 0x18, 0x65,
0x51, 0x85, 0x69, 0x80, 0x8b,
0x5b, 0x4e, 0x29, 0x82, 0x69,
0x9d, 0x08, 0x28, 0x50, 0x01,
0x6c, 0x40, 0x01, 0xfa, 0x08,
0x58, 0x03, 0x41, 0x40, 0x3a,
0x42, 0x03, 0x52, 0x18, 0xa1,
0x82, 0x20, 0x96, 0xe0, 0x00,
0x14, 0x82, 0x83, 0x81, 0x2b,
0x25, 0x8c, 0x0b, 0xc7, 0xb0,
0x88, 0x4a, 0x68, 0x84, 0x22,
0x97, 0x02, 0xf5, 0x90, 0x3c,
0x05, 0x07, 0xa0, 0x00, 0x00,
0x42, 0x08, 0x48, 0x82, 0x22,
0x88, 0x32, 0x78, 0x50, 0x8b,
0x30, 0x1b, 0x8b, 0xc0, 0x7b,
0x87, 0x88, 0xb3, 0x01, 0xf0,
0xbc, 0x09, 0x49, 0x8e, 0x8b,
0x85, 0x0c, 0xa9, 0x70, 0x67,
0xbc, 0x05, 0x73, 0x01, 0xf0,
0xbc, 0x03, 0xa9, 0x8e, 0x8b,
0x97, 0x06, 0x78, 0x50, 0xca,
0x00, 0x00, 0x08, 0x59, 0x81,
0x6c, 0x40, 0x02, 0x46, 0x0b,
0x30, 0x1c, 0x8b, 0xc2, 0x58,
0x39, 0x02, 0x16, 0x82, 0x00,
0x12, 0x12, 0x75, 0xc8, 0x21,
0x05, 0xa8, 0x18, 0x38, 0x80,
0x57, 0x00, 0x5a, 0x08, 0x06,
0x59, 0x00, 0x00, 0x0b, 0x53,
0x00, 0x00, 0x08, 0x78, 0x01,
0x84, 0x80, 0x05, 0x70, 0x20,
0x07, 0x90, 0x18, 0x48, 0x50,
0xbc, 0x06, 0xc8, 0x5a, 0x80,
0x30, 0x04, 0x0b, 0xc0, 0x82,
0x85, 0x9c, 0xb8, 0x69, 0x51,
0xbc, 0x05, 0x73, 0x00, 0x40,
0xbc, 0x03, 0x48, 0x59, 0xcb,
0x86, 0x95, 0x10, 0x00, 0x00,
0x84, 0x80, 0x16, 0xc4, 0x00,
0x24, 0xe0, 0xb5, 0x70, 0x3c,
0x83, 0x28, 0xb5, 0x70, 0xe4,
0x88, 0x52, 0x5b, 0xc0, 0x3f,
0x87, 0x04, 0x18, 0x85, 0x25,
0x00, 0x00, 0x00, 0x00, 0x00,
0x86, 0x80, 0xb3, 0x01, 0x38,
0xbc, 0x0b, 0x36, 0xc4, 0x00,
0x23, 0x00, 0x12, 0x80, 0x7f,
0x30, 0x93, 0x8b, 0xc0, 0x34,
0xbc, 0x06, 0xf5, 0xc0, 0xbe,
0x06, 0x84, 0xbb, 0xc0, 0x3f,
0x5c, 0x0b, 0xe0, 0x68, 0x48,
0x38, 0x17, 0xc2, 0x59, 0x10,
0xbc, 0x02, 0x83, 0x81, 0x67,
0xbc, 0x02, 0x72, 0x59, 0xd0,
0xbc, 0x13, 0x12, 0x59, 0x10,
0xbc, 0x02, 0x0b, 0xc5, 0x2f,
0x38, 0x17, 0x42, 0x59, 0xd0,
0xbc, 0x4f, 0x93, 0x81, 0x74,
0x25, 0x91, 0x0b, 0xc0, 0x39,
0x98, 0xe8, 0x83, 0x20, 0x28,
0xbc, 0x05, 0x43, 0x81, 0x77,
0x25, 0x9d, 0x0b, 0xc4, 0x60,
0x32, 0x02, 0x8b, 0xc4, 0x43,
0x94, 0x07, 0x4b, 0xc4, 0x27,
0x38, 0x17, 0x42, 0x59, 0x10,
0xbc, 0x02, 0x13, 0x20, 0x28,
0xbc, 0x05, 0x23, 0x81, 0x74,
0x25, 0x91, 0x0b, 0xc3, 0xa0,
0x32, 0x02, 0x8b, 0xc3, 0x85,
0x24, 0x1d, 0x29, 0x40, 0x72,
0xbc, 0x35, 0x73, 0x20, 0x38,
0xbc, 0x04, 0xc8, 0x82, 0x22,
0x57, 0x03, 0x8b, 0xc0, 0x4f,
0x85, 0x0c, 0x12, 0x81, 0x89,
0x40, 0x00, 0x00, 0x50, 0xc1,
0x68, 0x20, 0x01, 0x26, 0x23,
0x5c, 0x88, 0x08, 0x84, 0x21,
0x81, 0xa8, 0xb8, 0x48, 0x01,
0x55, 0x02, 0x48, 0x84, 0xa6,
0x58, 0x0e, 0x40, 0x48, 0x51,
0x42, 0x02, 0xeb, 0x00, 0x09,
0x5c, 0x81, 0x09, 0x70, 0x61,
0xbc, 0x03, 0xf5, 0xc0, 0xbf,
0x84, 0x84, 0xb3, 0x81, 0x7f,
0x52, 0xce, 0x82, 0xc0, 0xe2,
0x81, 0x88, 0x18, 0x18, 0x80,
0x82, 0x8d, 0x18, 0x68, 0x50,
0x00, 0x00, 0x08, 0x1b, 0x01,
0x88, 0x52, 0x18, 0x58, 0x00,
0x42, 0x06, 0xc0, 0x68, 0xd1,
0x5c, 0x00, 0x10, 0x48, 0x50,
0x24, 0x1d, 0x73, 0x20, 0x28,
0x5d, 0x4e, 0x3b, 0xc0, 0x5c,
0x5c, 0x0b, 0x91, 0x40, 0x77,
0x52, 0x45, 0xd3, 0xc0, 0x3f,
0x94, 0x07, 0x22, 0x40, 0xba,
0x94, 0x07, 0x28, 0x59, 0x48,
0x98, 0xe8, 0x25, 0x50, 0x08,
0x85, 0x08, 0xb8, 0x22, 0x4b,
0x88, 0x06, 0x46, 0x60, 0x04,
0x11, 0xa4, 0x82, 0xa0, 0x08,
0x88, 0x02, 0x48, 0x81, 0xa0,
0x86, 0x04, 0x80, 0x00, 0x00,
0x6c, 0x00, 0x02, 0xac, 0x09,
0x84, 0x00, 0xa5, 0x40, 0xb9,
0x08, 0x32, 0x59, 0x80, 0x82,
0x30, 0x0a, 0x0b, 0xc0, 0x15,
0x86, 0x85, 0x22, 0xe1, 0x72,
0x98, 0x08, 0x88, 0x60, 0x09,
0x30, 0x12, 0x8b, 0xc0, 0x13,
0x86, 0x84, 0x80, 0x00, 0x00,
0x84, 0x00, 0x98, 0x60, 0x08,
0x6c, 0x40, 0x02, 0x0a, 0x02,
0x30, 0x16, 0x0b, 0xc0, 0x3b,
0x22, 0x95, 0x52, 0xe1, 0x72,
0x84, 0x04, 0x20, 0x00, 0x00,
0x84, 0x00, 0x88, 0x60, 0x02,
0x30, 0x11, 0x0b, 0xc0, 0x25,
0x28, 0x17, 0x28, 0x40, 0x42,
0x00, 0x00, 0x08, 0x60, 0x89,
0x86, 0x00, 0xa5, 0x70, 0xd5,
0x08, 0x3b, 0x6b, 0xa1, 0x48,
0x86, 0x34, 0x2a, 0x80, 0x40,
0x55, 0x01, 0x2a, 0xbf, 0xd0,
0xa2, 0x16, 0x4a, 0x08, 0x81,
0x88, 0x06, 0x4a, 0x20, 0x64,
0x88, 0x0e, 0x1a, 0x08, 0x41,
0x88, 0x16, 0x48, 0x81, 0xc9,
0x88, 0x26, 0x08, 0x82, 0xf6,
0x66, 0x00, 0x40, 0xb8, 0x68,
0x40, 0x00, 0x02, 0x08, 0x00,
0x5c, 0x82, 0x00, 0x82, 0x20,
0x5c, 0x09, 0x68, 0x81, 0x24,
0xa0, 0x08, 0x18, 0x61, 0x8a,
0x88, 0x18, 0xb6, 0xe0, 0x00,
0x14, 0x82, 0x84, 0x47, 0x10,
0x00, 0xa4, 0x85, 0x2c, 0xa0,
0x04, 0x84, 0x20, 0x00, 0x00,
0x88, 0x0a, 0x0b, 0xc0, 0x78,
0xa0, 0x02, 0x08, 0x80, 0x20,
0x6c, 0x40, 0x02, 0x2e, 0x08,
0x84, 0x0c, 0x8b, 0xc4, 0x2f,
0x88, 0x0a, 0x43, 0x81, 0x24,
0x25, 0x90, 0x0b, 0xc3, 0x80,
0x66, 0x00, 0x41, 0x2a, 0x60,
0x88, 0x02, 0x00, 0x00, 0x00,
0x84, 0x08, 0x93, 0x01, 0x28,
0xbc, 0x2e, 0x46, 0xc4, 0x00,
0x1a, 0xe0, 0xa3, 0x20, 0x30,
0xbc, 0x1f, 0x86, 0xe0, 0x00,
0x1b, 0xe2, 0x73, 0x20, 0x78,
0xbc, 0x19, 0x06, 0xc4, 0x00,
0x22, 0xe0, 0x83, 0x01, 0x60,
0xbc, 0x13, 0x88, 0x80, 0xa4,
0x3a, 0x18, 0x75, 0x18, 0x5f,
0x86, 0x08, 0xa6, 0x82, 0x00,
0x0d, 0x82, 0x15, 0xb4, 0xc3,
0x18, 0x2e, 0x89, 0xc8, 0x01,
0x84, 0x80, 0xb3, 0x01, 0xf0,
0xbc, 0x05, 0x46, 0xc4, 0x00,
0x23, 0x40, 0xa2, 0x81, 0xa8,
0x98, 0x00, 0x92, 0xf1, 0x2d,
0x40, 0x00, 0x01, 0x82, 0x48,
0x42, 0x0b, 0x38, 0x40, 0xc8,
0xbc, 0x15, 0xf8, 0x80, 0xa4,
0x88, 0x0a, 0x46, 0xc4, 0x00,
0x20, 0xe0, 0x98, 0x60, 0x8a,
0x36, 0x98, 0x63, 0x01, 0xa8,
0xbc, 0x0d, 0x53, 0x20, 0x78,
0xbc, 0x0b, 0x08, 0x40, 0xc8,
0xbc, 0x09, 0x78, 0x40, 0xc8,
0xbc, 0x07, 0xf8, 0x80, 0xa4,
0x66, 0x00, 0x41, 0x2a, 0x60,
0x88, 0x02, 0x08, 0x80, 0xa4,
0x84, 0x0c, 0x80, 0x00, 0x00,
0x6e, 0x00, 0x01, 0xbe, 0x24,
0x32, 0x06, 0x0b, 0xc0, 0x91,
0x86, 0x08, 0x86, 0xc4, 0x00,
0x21, 0x00, 0x93, 0x69, 0x04,
0x30, 0x12, 0x8b, 0xc0, 0x35,
0x6c, 0x40, 0x02, 0x4e, 0x08,
0x84, 0x0c, 0x80, 0x00, 0x00,
0x88, 0x2b, 0x6b, 0xa1, 0x48,
0xa8, 0x03, 0x00, 0x00, 0x00,
0x6e, 0x00, 0x01, 0x48, 0x2c,
0x38, 0x12, 0x62, 0x59, 0xa0,
0xbc, 0x0a, 0x08, 0x63, 0x88,
0x6c, 0x40, 0x02, 0x46, 0x0a,
0x30, 0x1a, 0x0b, 0xc0, 0x50,
0x84, 0x10, 0x86, 0xc4, 0x00,
0x23, 0x60, 0xa0, 0x82, 0x00,
0x84, 0x14, 0x0b, 0xa1, 0x40,
0x6e, 0x00, 0x00, 0x0e, 0x2c,
0xb0, 0x70, 0x63, 0x01, 0xa0,
0xbc, 0x02, 0x16, 0x40, 0x10,
0x06, 0x06, 0x7b, 0xa1, 0x40,
0x6e, 0x00, 0x00, 0x0e, 0xac,
0x59, 0x03, 0x02, 0xbf, 0xf0,
0xbc, 0x19, 0x88, 0x80, 0x76,
0x32, 0x0a, 0x0b, 0xc1, 0x31,
0x68, 0x00, 0x01, 0x53, 0x20,
0x68, 0x00, 0x00, 0x07, 0x21,
0x66, 0x00, 0x41, 0x7e, 0xc0,
0x68, 0x00, 0x01, 0x53, 0x20,
0x68, 0x00, 0x00, 0x07, 0x21,
0xa0, 0x04, 0x06, 0x60, 0x10,
0x06, 0x3a, 0x8a, 0x08, 0x21,
0x88, 0x03, 0x6b, 0x00, 0x34,
0x64, 0x00, 0x41, 0x7d, 0x4f,
0xa8, 0x01, 0x0b, 0xc1, 0x5f,
0x40, 0x00, 0x00, 0x80, 0x36,
0x68, 0x00, 0x01, 0x54, 0x20,
0x68, 0x00, 0x00, 0x07, 0x21,
0x66, 0x00, 0x41, 0x7e, 0xc0,
0x68, 0x00, 0x01, 0x54, 0x20,
0x68, 0x00, 0x00, 0x07, 0x21,
0xa0, 0x02, 0x06, 0x60, 0x10,
0x06, 0x3a, 0x8a, 0x08, 0x21,
0x88, 0x03, 0x6b, 0x00, 0x34,
0x64, 0x00, 0x41, 0x7d, 0x4f,
0xa8, 0x01, 0x0b, 0xa1, 0x48,
0xa8, 0x01, 0x00, 0x00, 0x00,
0x94, 0x03, 0x85, 0x15, 0x02,
0x30, 0x7f, 0xa2, 0x88, 0xa1,
0x54, 0x44, 0x01, 0x48, 0x61,
0xba, 0x14, 0x89, 0x48, 0xe0,
0x40, 0x00, 0x03, 0x80, 0x00,
0x68, 0x00, 0x00, 0x07, 0x21,
0xab, 0xfd, 0x09, 0x48, 0x28,
0x55, 0x5e, 0x02, 0x08, 0x08,
0x51, 0x90, 0x01, 0x40, 0x2a,
0x54, 0x04, 0x22, 0x04, 0x11,
0x94, 0x82, 0x85, 0x90, 0x40,
0x08, 0x07, 0x6b, 0xc2, 0x08,
0x98, 0x22, 0x03, 0x20, 0xc0,
0xbc, 0x19, 0x86, 0x80, 0x00,
0x00, 0x7a, 0x12, 0xa7, 0x82,
0x51, 0x44, 0xb3, 0xc0, 0xef,
0x5c, 0x00, 0x00, 0x80, 0xca,
0x98, 0x22, 0x08, 0x82, 0x48,
0x66, 0x00, 0x41, 0x7d, 0xe0,
0x88, 0x20, 0x05, 0x50, 0x82,
0x08, 0x1a, 0x18, 0x81, 0x00,
0x55, 0x02, 0x02, 0x08, 0x21,
0x40, 0x00, 0x00, 0x80, 0x8a,
0x58, 0x0c, 0x00, 0x81, 0xe1,
0xbf, 0xf1, 0xa8, 0x81, 0x50,
0x40, 0x00, 0x03, 0xc0, 0xd7,
0x6e, 0x00, 0x00, 0x0f, 0x28,
0x42, 0x04, 0xb9, 0x40, 0x60,
0x68, 0x00, 0x00, 0x07, 0x21,
0x66, 0x00, 0x41, 0x7e, 0xc0,
0x88, 0x03, 0x6b, 0x00, 0x24,
0x64, 0x00, 0x41, 0x7d, 0x4f,
0xa8, 0x03, 0x08, 0x80, 0x36,
0xba, 0x14, 0x8a, 0x80, 0x30,
0x40, 0x00, 0x03, 0x80, 0x00,
0x68, 0x00, 0x00, 0x07, 0x21,
0x68, 0x20, 0x00, 0x00, 0x20,
0x94, 0x82, 0x85, 0x55, 0xe0,
0x20, 0x80, 0x95, 0x19, 0x00,
0x14, 0x82, 0xa5, 0x40, 0x42,
0x18, 0x80, 0x05, 0x40, 0x12,
0x20, 0xc1, 0x19, 0x48, 0x28,
0x59, 0x04, 0x02, 0xbf, 0xd0,
0x42, 0x10, 0x40, 0x80, 0x76,
0x98, 0x22, 0x03, 0x20, 0xc0,
0xbc, 0x19, 0x86, 0x80, 0x00,
0x00, 0x7a, 0x12, 0xa7, 0x82,
0x51, 0x44, 0xb3, 0xc0, 0xef,
0x5c, 0x00, 0x00, 0x80, 0xca,
0x98, 0x22, 0x08, 0x82, 0x48,
0x66, 0x00, 0x41, 0x7d, 0xe0,
0x88, 0x20, 0x05, 0x50, 0x82,
0x08, 0x1a, 0x18, 0x81, 0x00,
0x55, 0x02, 0x02, 0x08, 0x21,
0x40, 0x00, 0x00, 0x80, 0x8a,
0x58, 0x0c, 0x00, 0x81, 0xe1,
0xbf, 0xf1, 0xa8, 0x81, 0x50,
0x40, 0x00, 0x03, 0xc0, 0xd7,
0x6e, 0x00, 0x00, 0x0f, 0x28,
0x42, 0x04, 0xb9, 0x40, 0x60,
0x68, 0x00, 0x00, 0x07, 0x21,
0x66, 0x00, 0x41, 0x7e, 0xc0,
0x88, 0x03, 0x6b, 0x00, 0x24,
0x64, 0x00, 0x41, 0x7d, 0x4f,
0xa8, 0x03, 0x08, 0x80, 0x36,
0xba, 0x14, 0x8a, 0x80, 0x30,
0x40, 0x00, 0x03, 0x80, 0x00,
};
