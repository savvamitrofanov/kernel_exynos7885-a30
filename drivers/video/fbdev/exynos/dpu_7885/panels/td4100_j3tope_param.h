#ifndef __TD4100_PARAM_H__
#define __TD4100_PARAM_H__
#include <linux/types.h>
#include <linux/kernel.h>

#define EXTEND_BRIGHTNESS	306
#define UI_MAX_BRIGHTNESS	255
#define UI_DEFAULT_BRIGHTNESS	128

struct lcd_seq_info {
	unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

struct i2c_rom_data {
	u8 addr;
	u8 val;
};

static const struct i2c_rom_data LM3632_INIT[] = {
	{0x09, 0x41},
	{0x02, 0x50},
	{0x03, 0x8D},
	{0x04, 0x07},
	{0x05, 0xFF},
	{0x0A, 0x19},
	{0x0D, 0x1C},
	{0x0E, 0x1E},
	{0x0F, 0x1E},
	{0x0C, 0x1F},
};

static const unsigned char SEQ_TD4100_BLON[] = {
	0x53,
	0x0C,
};

static const unsigned char SEQ_TD4100_CABC_MIN[] = {
	0x5E,
	0x02,
};

static const unsigned char SEQ_TD4100_BL[] = {
	0x51,
	0xFF,
};

static const unsigned char SEQ_TD4100_ADDRESS[] = {
	0x36,
	0x40, 0x00
};

static const unsigned char SEQ_TEON_CTL[] = {
	0x35,
	0x01,
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11,
	0x00, 0x00
};

static const unsigned char SEQ_SLEEP_IN[] = {
	0x10,
	0x00, 0x00
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00, 0x00
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29,
	0x00, 0x00
};

static const unsigned char SEQ_TD4100_CABC_OFF[] = {
	0x55,
	0x00,
};

static const unsigned char SEQ_TD4100_B0[] = {
	0xB0,
	0x04,
};

static const unsigned char SEQ_TD4100_B3[] = {
	0xB3,
	0x31, 0x00, 0x06,
};

static const unsigned char SEQ_TD4100_B6[] = {
	0xB6,
	0x32, 0x53, 0x80, 0x00, 0x00, 0x07, 0x86,
};

static const unsigned char SEQ_TD4100_B8[] = {
	0xB8,
	0x00, 0x78, 0x64, 0x10, 0x64, 0xB4,
};

static const unsigned char SEQ_TD4100_B9[] = {
	0xB9,
	0x00, 0x78, 0x64, 0x10, 0x64, 0xB4,
};

static const unsigned char SEQ_TD4100_BA[] = {
	0xBA,
	0x07, 0x77, 0x4A, 0x0A, 0x38, 0x55,
};

static const unsigned char SEQ_TD4100_BB[] = {
	0xBB,
	0x00, 0xB4, 0xA0,
};

static const unsigned char SEQ_TD4100_BC[] = {
	0xBC,
	0x00, 0xB4, 0xA0,
};

static const unsigned char SEQ_TD4100_BD[] = {
	0xBD,
	0x00, 0xB4, 0xA0,
};

static const unsigned char SEQ_TD4100_BE[] = {
	0xBE,
	0x04
};

static const unsigned char SEQ_TD4100_C0[] = {
	0xC0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_TD4100_C1[] = {
	0xC1,
	0x04, 0x48, 0x01, 0x00, 0x10, 0x01, 0x11, 0x00, 0x11, 0x00,
	0x30, 0x29, 0x29, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDF, 0x00, 0x20, 0x80,
	0x01, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_TD4100_C2[] = {
	0xC2,
	0x02, 0xF0, 0x05, 0x00, 0x0A, 0x0A, 0x08, 0x00, 0x24, 0x09,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x01,
};

static const unsigned char SEQ_TD4100_C3[] = {
	0xC3,
	0x00, 0x05, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x02, 0x88, 0x00, 0x00, 0x00, 0x02, 0x89, 0x00, 0x00,
	0x01, 0x01, 0x03, 0x28, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00,
	0x40, 0x20, 0x00,
};

static const unsigned char SEQ_TD4100_C4[] = {
	0xC4,
	0x70, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01,
};

static const unsigned char SEQ_TD4100_C5[] = {
	0xC5,
	0x08, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x2D, 0x41,
};

static const unsigned char SEQ_TD4100_C6[] = {
	0xC6,
	0xB2, 0x08, 0xA0, 0x00, 0x00, 0x08, 0xA0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x80, 0xB2,
};

static const unsigned char SEQ_TD4100_C7[] = {
	0xC7,
	0x08, 0x25, 0x35, 0x48, 0x57, 0x62, 0x7A, 0x8A, 0x96, 0xA2,
	0x57, 0x65, 0x73, 0x7E, 0x86, 0x91, 0x9F, 0xAA, 0xBF, 0x08,
	0x25, 0x35, 0x48, 0x57, 0x62, 0x7A, 0x8A, 0x96, 0xA1, 0x4E,
	0x58, 0x63, 0x7E, 0x86, 0x91, 0x9F, 0xAA, 0xBF, 0x00, 0x97,
	0x00, 0x97, 0x00, 0x97, 0x00, 0x97,
};

static const unsigned char SEQ_TD4100_C8[] = {
	0xC8,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00,
};

static const unsigned char SEQ_TD4100_C9[] = {
	0xC9,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00,
};

static const unsigned char SEQ_TD4100_CA[] = {
	0xCA,
	0x1D, 0xFC, 0xFC, 0xFC, 0xF3, 0x06, 0xFE, 0x00, 0x20, 0xCD,
	0x00, 0x0A, 0x00, 0xE5, 0x00, 0xEA, 0x45, 0x2B, 0x00, 0x00,
	0xEA, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
};

static const unsigned char SEQ_TD4100_CC[] = {
	0xCC,
	0x00, 0x00, 0x72, 0x40, 0x00, 0x00, 0x70, 0x00, 0xC4, 0x10,
	0x14, 0xD2, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x02, 0xD2, 0x16, 0x12, 0xC4, 0x00, 0x70, 0x00, 0x00,
	0x42, 0x72, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_TD4100_CD[] = {
	0xCD,
	0x0D, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x7A,
	0x00, 0x82, 0x00, 0x6E, 0x00, 0x82, 0x01, 0x00, 0x00,
};

static const unsigned char SEQ_TD4100_CE[] = {
	0xCE,
	0x7D, 0x40, 0x48, 0x56, 0x67, 0x78, 0x88, 0x98, 0xA7, 0xB5,
	0xC3, 0xD1, 0xDE, 0xE9, 0xF2, 0xFA, 0xFF, 0x3C, 0x00, 0x01,
	0x03, 0x45, 0x00, 0x00,
};

static const unsigned char SEQ_TD4100_CF[] = {
	0xCF,
	0x48, 0x10
};

static const unsigned char SEQ_TD4100_D0[] = {
	0xD0,
	0x11, 0x03, 0x45, 0xC5, 0x03, 0x10, 0x10, 0x40, 0x19, 0x08,
	0x99, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_TD4100_D1[] = {
	0xD1,
	0x00
};

static const unsigned char SEQ_TD4100_D3[] = {
	0xD3,
	0xBB, 0x3B, 0x33, 0x3B, 0x44, 0x3B, 0x44, 0x3B, 0x00, 0x00,
	0xEC, 0x91, 0x91, 0x23, 0x22, 0xD4, 0xD4, 0x3B, 0xBB, 0x4F,
	0xD0, 0x3C, 0x10, 0x12, 0x10, 0x00, 0x10,
};

static const unsigned char SEQ_TD4100_D4[] = {
	0xD4,
	0x80, 0x04, 0x04, 0x33, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x90,
	0x05, 0x00, 0x64, 0x94,
};

static const unsigned char SEQ_TD4100_D6_C1[] = {
	0xD6,
	0xC1
};

static const unsigned char SEQ_TD4100_D6_01[] = {
	0xD6,
	0x01
};

static const unsigned char SEQ_TD4100_D7[] = {
	0xD7,
	0xF6, 0xFF, 0x03, 0x05, 0x43, 0x24, 0x80, 0x1F, 0xC7, 0x1F,
	0x1B, 0x00, 0x0F, 0x01, 0x20, 0x08, 0xF8, 0x3F, 0x00, 0x00,
	0x00, 0x40, 0xA4, 0x75, 0x00, 0x33, 0x02, 0xC0, 0xAF, 0xCB,
	0x60, 0x30, 0xF4, 0x03, 0x3D, 0x00,
};

static const unsigned char SEQ_TD4100_D8[] = {
	0xD8,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_TD4100_DD[] = {
	0xDD,
	0x30, 0x06, 0x23, 0x65,
};

static const unsigned char SEQ_TD4100_DE[] = {
	0xDE,
	0x00, 0xFF, 0xFF, 0x50,
};

/* platform brightness <-> bl reg */
static unsigned int brightness_table[EXTEND_BRIGHTNESS + 1] = {
	[0 ... 2]	=	0,
	[3 ... 4]	=	1,
	[5 ... 6]	=	2,
	[7 ... 8]	=	3,
	[9 ... 10]	=	4,
	[11 ... 12]	=	5,
	[13 ... 14]	=	6,
	[15 ... 16]	=	7,
	[17 ... 18]	=	8,
	[19 ... 20]	=	9,
	[21 ... 22]	=	10,
	[23 ... 24]	=	11,
	[25 ... 26]	=	12,
	[27 ... 28]	=	13,
	[29 ... 30]	=	14,
	[31 ... 32]	=	15,
	[33 ... 34]	=	16,
	[35 ... 36]	=	17,
	[37 ... 38]	=	18,
	[39 ... 40]	=	19,
	[41 ... 42]	=	20,
	[43 ... 44]	=	21,
	[45 ... 45]	=	22,
	[46 ... 47]	=	23,
	[48 ... 49]	=	24,
	[50 ... 51]	=	25,
	[52 ... 53]	=	26,
	[54 ... 55]	=	27,
	[56 ... 57]	=	28,
	[58 ... 59]	=	29,
	[60 ... 61]	=	30,
	[62 ... 63]	=	31,
	[64 ... 65]	=	32,
	[66 ... 67]	=	33,
	[68 ... 69]	=	34,
	[70 ... 71]	=	35,
	[72 ... 73]	=	36,
	[74 ... 75]	=	37,
	[76 ... 77]	=	38,
	[78 ... 79]	=	39,
	[80 ... 81]	=	40,
	[82 ... 83]	=	41,
	[84 ... 85]	=	42,
	[86 ... 86]	=	43,
	[87 ... 88]	=	44,
	[89 ... 90]	=	45,
	[91 ... 92]	=	46,
	[93 ... 94]	=	47,
	[95 ... 96]	=	48,
	[97 ... 98]	=	49,
	[99 ... 100]	=	50,
	[101 ... 102]	=	51,
	[103 ... 104]	=	52,
	[105 ... 106]	=	53,
	[107 ... 108]	=	54,
	[109 ... 110]	=	55,
	[111 ... 112]	=	56,
	[113 ... 114]	=	57,
	[115 ... 116]	=	58,
	[117 ... 118]	=	59,
	[119 ... 120]	=	60,
	[121 ... 122]	=	61,
	[123 ... 124]	=	62,
	[125 ... 126]	=	63,
	[127 ... 127]	=	64,
	[128 ... 129]	=	65,
	[130 ... 130]	=	66,
	[131 ... 131]	=	67,
	[132 ... 133]	=	68,
	[134 ... 134]	=	69,
	[135 ... 135]	=	70,
	[136 ... 136]	=	71,
	[137 ... 138]	=	72,
	[139 ... 139]	=	73,
	[140 ... 140]	=	74,
	[141 ... 141]	=	75,
	[142 ... 143]	=	76,
	[144 ... 144]	=	77,
	[145 ... 145]	=	78,
	[146 ... 147]	=	79,
	[148 ... 148]	=	80,
	[149 ... 149]	=	81,
	[150 ... 150]	=	82,
	[151 ... 152]	=	83,
	[153 ... 153]	=	84,
	[154 ... 154]	=	85,
	[155 ... 155]	=	86,
	[156 ... 157]	=	87,
	[158 ... 158]	=	88,
	[159 ... 159]	=	89,
	[160 ... 161]	=	90,
	[162 ... 162]	=	91,
	[163 ... 163]	=	92,
	[164 ... 164]	=	93,
	[165 ... 166]	=	94,
	[167 ... 167]	=	95,
	[168 ... 168]	=	96,
	[169 ... 169]	=	97,
	[170 ... 171]	=	98,
	[172 ... 172]	=	99,
	[173 ... 173]	=	100,
	[174 ... 174]	=	101,
	[175 ... 176]	=	102,
	[177 ... 177]	=	103,
	[178 ... 178]	=	104,
	[179 ... 180]	=	105,
	[181 ... 181]	=	106,
	[182 ... 182]	=	107,
	[183 ... 183]	=	108,
	[184 ... 185]	=	109,
	[186 ... 186]	=	110,
	[187 ... 187]	=	111,
	[188 ... 188]	=	112,
	[189 ... 190]	=	113,
	[191 ... 191]	=	114,
	[192 ... 192]	=	115,
	[193 ... 194]	=	116,
	[195 ... 195]	=	117,
	[196 ... 196]	=	118,
	[197 ... 197]	=	119,
	[198 ... 199]	=	120,
	[200 ... 200]	=	121,
	[201 ... 201]	=	122,
	[202 ... 202]	=	123,
	[203 ... 204]	=	124,
	[205 ... 205]	=	125,
	[206 ... 206]	=	126,
	[207 ... 208]	=	127,
	[209 ... 209]	=	128,
	[210 ... 210]	=	129,
	[211 ... 211]	=	130,
	[212 ... 213]	=	131,
	[214 ... 214]	=	132,
	[215 ... 215]	=	133,
	[216 ... 216]	=	134,
	[217 ... 218]	=	135,
	[219 ... 219]	=	136,
	[220 ... 220]	=	137,
	[221 ... 221]	=	138,
	[222 ... 223]	=	139,
	[224 ... 224]	=	140,
	[225 ... 225]	=	141,
	[226 ... 227]	=	142,
	[228 ... 228]	=	143,
	[229 ... 229]	=	144,
	[230 ... 230]	=	145,
	[231 ... 232]	=	146,
	[233 ... 233]	=	147,
	[234 ... 234]	=	148,
	[235 ... 235]	=	149,
	[236 ... 237]	=	150,
	[238 ... 238]	=	151,
	[239 ... 239]	=	152,
	[240 ... 241]	=	153,
	[242 ... 242]	=	154,
	[243 ... 243]	=	155,
	[244 ... 244]	=	156,
	[245 ... 246]	=	157,
	[247 ... 247]	=	158,
	[248 ... 248]	=	159,
	[249 ... 249]	=	160,
	[250 ... 251]	=	161,
	[252 ... 252]	=	162,
	[253 ... 253]	=	163,
	[254 ... 254]	=	164,
	[255 ... 305]	=	165,
	[306 ... 306]	=	190,
};

#endif /* __TD4100_PARAM_H__ */
