#ifndef BAGHET_H_
#define BAGHET_H_


#define table_len_BGT 14
byte finger_table_BGT[table_len_BGT][2] =
{
	{ B00000000, B10000000 },	/* G */
	{ B10000000, B11100000 },	/* F# */
	{ B10100000, B11100000 },	/* F */
	{ B11000000, B11110000 },	/* E */
	{ B11010000, B11110000 },	/* Eb */
	{ B11100000, B11111000 },	/* D */
	{ B11101000, B11111000 },	/* C# */
	{ B11110000, B11111000 },	/* C */
	{ B11111000, B11111110 },	/* B */
	{ B11111010, B11111110 },	/* Bb */
	{ B11111100, B11111111 },	/* A */
	{ B11111101, B11111111 },	/* Ab */
	{ B11111110, B11111111 },	/* G */
	{ B11111111, B11111111 }	/* F# */
};

int note_ratios_BGT[table_len_BGT][2] =
{
	/*Note				Just    EqT     Sampled */
	{ 2, 1 },	/* G	790 Hz  791 Hz  (789 Hz)*/
	{ 15, 8 },	/* F#	741 Hz  747 Hz  (742 Hz)*/
	{ 7, 4 },	/* F	691 Hz  705 Hz          */
	{ 5, 3 },	/* E	658 Hz  665 Hz  (658 Hz)*/
	{ 8, 5 },	/* Eb	632 Hz  628 Hz          */
	{ 3, 2 },	/* D	593 Hz  593 Hz  (586 Hz)*/
	{ 7, 5 },	/* C#	553 Hz  559 Hz          */
	{ 4, 3 },	/* C	527 Hz  528 Hz  (527 Hz)*/
	{ 5, 4 },	/* B	494 Hz  498 Hz  (492 Hz)*/
	{ 6, 5 },	/* Bb	474 Hz  470 Hz          */
	{ 9, 8 },	/* A	444 Hz  444 Hz  (444 Hz)*/
	{ 16, 15 },	/* Ab	421 Hz  419 Hz          */
	{ 1, 1 },	/* G	395 Hz  396 Hz  (398 Hz)*/
	{ 15, 16 }	/* F#	370 Hz  373 Hz  (363 Hz)*/
};

// starting note is D
#define BGT_STARTING_NOTE	5

float note_freqs_BGT[table_len_BGT] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

/* Baghet sounds, courtesy of Valter Biella              */

#define INST_NUM_CELLS_BGT 112
#define DRONE_MIN_NUM_CELLS_BGT 224
#define DRONE_MAJ_NUM_CELLS_BGT 448
#define DRONE_ALL_NUM_CELLS_BGT 448
#define INST_SAMPLERATE_BGT 44100

#if USE_16BIT_SAMPLES
/* Chanter Sol */
const int16_t __attribute__ ( ( section ( ".progmem.data" ) ) ) INST_DATA_BGT[] =
{
	-94, 9453, 16355, 19765, 21498, 23090, 24567, 25349, 25070, 23755, 21583, 18459,
		14162, 9035, 3949, -434, -4054, -7318, -10704, -14278, -17554, -19887, -20847,
		-20343, -18709, -16572, -14461, -12615, -10935, -8885, -5803, -1772, 2065, 4453,
		5291, 5833, 7542, 10698, 14190, 16468, 16580, 14686, 12091, 10471, 10590, 11657,
		11906, 9881, 5698, 1196, -1585, -2136, -1585, -1448, -2603, -4924, -7355, -8603,
		-8089, -6341, -4545, -3721, -4027, -4695, -4572, -2869, 172, 3097, 4211, 3124,
		1184, 203, 858, 2314, 3154, 2636, 1153, -229, -508, 758, 3101, 5192, 5768, 4910,
		4187, 5229, 8195, 11738, 14250, 14934, 13779, 11247, 8449, 6913, 6786, 5399,
		-328, -9500, -17299, -20282, -19817, -19676, -22033, -26113, -29204, -29001,
		-25826, -22053, -19325, -17513, -15562, -11753

	};

/* Bordone Minore*/
const int16_t __attribute__ ( ( section ( ".progmem.data" ) ) ) DRONE_MIN_DATA_BGT[] =
{
	81, 463, 876, 1207, 1333, 1442, 1668, 1746, 1683, 2003, 2767, 3402, 3846, 4520, 5194, 5267,
	4863, 4424, 3901, 3167, 2469, 1991, 1728, 1793, 2234, 2863, 3611, 4552, 5680, 7146, 9299,
	11979, 14487, 16509, 18281, 19833, 20948, 21792, 22940, 24790, 27239, 29770, 31755, 32767,
	32669, 31643, 30124, 28306, 25989, 23410, 21620, 21160, 21224, 20803, 19586, 17392, 14128,
	10502, 7480, 5243, 3574, 2389, 1390, 441, 187, 917, 1566, 1335, 829, 494, 12, -62, 1299, 3163,
	3548, 2755, 2859, 4099, 4732, 4144, 3402, 2935, 1950, 267, -1279, -2454, -3996, -6008, -7558,
	-8410, -9574, -11641, -14035, -16247, -18482, -20935, -23435, -25623, -26952, -27263,
	-27293, -27504, -27079, -25531, -23917, -22961, -21776, -19881, -18167, -16764, -14480,
	-11141, -7977, -5379, -2562, 334, 1960, 1758, 853, 539, 778, 713, 192, -148, -154, -297,
	-560, -618, -867, -1714, -2335, -1906, -1292, -1806, -3130, -3951, -3908, -3634, -3418,
	-2825, -1575, -201, 549, 718, 900, 1186, 1464, 2297, 4207, 6595, 8737, 11050, 13926, 16375,
	17210, 16751, 16126, 15505, 14163, 12083, 10409, 9689, 8764, 6432, 3274, 355, -2574, -5826,
	-8381, -9582, -10305, -10908, -10334, -8493, -6988, -6502, -5926, -4666, -3597, -3328,
	-3244, -2576, -1375, -274, 308, 526, 641, 565, 277, 38, -201, -795, -1465, -1504, -1114,
	-1322, -2466, -3888, -5050, -6140, -7529, -9188, -10836, -12487, -14409, -16419, -17836,
	-18488, -18837, -18949, -18477, -17624, -16850, -15916, -14476, -12922, -11547, -9854,
	-7540, -5121, -3132, -1676, -775, -358
};

/* Bordone Maggiore*/
const int16_t __attribute__ ( ( section ( ".progmem.data" ) ) ) DRONE_MAJ_DATA_BGT[] =
{
	1487, 2730, 4232, 5708, 6996, 8314, 9857, 11487, 12894, 13930, 14753, 15557, 16251, 16568, 16558,
	16648, 17099, 17710, 18163, 18360, 18264, 17825, 17158, 16486, 15848, 15162, 14535, 14115, 13762,
	13221, 12507, 11748, 10797, 9450, 7869, 6400, 5162, 4129, 3357, 2759, 1987, 854, -422, -1656, -2972,
	-4342, -5369, -5860, -6160, -6617, -7146, -7549, -7856, -8131, -8343, -8521, -8666, -8578, -8124,
	-7545, -7056, -6452, -5507, -4431, -3444, -2376, -1056, 310, 1513, 2652, 3836, 5032, 6331, 7867,
	9470, 10952, 12488, 14191, 15647, 16570, 17401, 18608, 19907, 20881, 21758, 22904, 24067, 24797,
	25114, 25309, 25506, 25731, 25974, 26098, 26029, 25913, 25771, 25282, 24287, 23066, 21823, 20438,
	18923, 17492, 16054, 14333, 12474, 10837, 9240, 7223, 4877, 2661, 688, -1174, -2859, -4334, -5847,
	-7463, -8872, -9982, -11090, -12214, -12995, -13385, -13784, -14336, -14762, -14930, -15016,
	-15088, -15052, -14894, -14643, -14210, -13543, -12706, -11774, -10825, -9950, -9046, -7845,
	-6395, -5067, -3843, -2217, -116, 1750, 2980, 4127, 5773, 7657, 9340, 11001, 12959, 14969, 16549,
	17636, 18463, 19127, 19555, 19767, 19901, 20136, 20545, 20975, 21187, 21095, 20663, 19718, 18274,
	16940, 16335, 16136, 15389, 13746, 11683, 9601, 7546, 5695, 4195, 2659, 789, -748, -1264, -1575,
	-3150, -5902, -8317, -9761, -11018, -12479, -13440, -13575, -13665, -14395, -15556, -16819, -18254,
	-19694, -20517, -20504, -20259, -20353, -20552, -20265, -19495, -18844, -18605, -18370, -17799,
	-17285, -17241, -17174, -16330, -14903, -13570, -12164, -10036, -7543, -5774, -4861, -3881, -2443,
	-1077, 35, 1548, 3999, 7190, 10564, 13569, 15798, 17267, 18453, 19821, 21521, 23548, 25744, 27722,
	29246, 30480, 31532, 32155, 32327, 32491, 32766, 32669, 32092, 31657, 31592, 31210, 30121, 28982,
	28335, 27655, 26276, 24514, 23045, 21710, 19817, 17303, 14784, 12591, 10507, 8554, 7110, 5911, 3880,
	658, -2542, -4592, -6055, -8030, -10204, -11600, -12468, -13736, -15132, -15736, -15898, -16702,
	-17835, -18005, -17260, -16905, -17136, -16745, -15417, -14324, -14080, -13772, -12609, -11044,
	-9610, -8026, -6133, -4502, -3344, -1885, 342, 2539, 3897, 4904, 6472, 8428, 9909, 10749, 11443, 12199,
	12896, 13645, 14572, 15338, 15637, 15827, 16354, 16871, 16734, 16106, 15710, 15660, 15406, 14793,
	14342, 14262, 13995, 13118, 12029, 11225, 10491, 9460, 8417, 7727, 7013, 5779, 4367, 3322, 2260, 564,
	-1321, -2525, -3264, -4305, -5373, -5614, -5358, -5788, -6953, -7715, -7711, -7816, -8446, -8863,
	-8613, -8305, -8427, -8491, -8070, -7715, -8030, -8525, -8385, -7820, -7606, -7631, -7142, -6296,
	-6105, -6710, -7081, -6762, -6596, -7161, -7740, -7631, -7346, -7673, -8422, -8934, -9205, -9659,
	-10292, -10794, -11224, -11908, -12762, -13342, -13629, -14208, -15371, -16567, -17142, -17285,
	-17629, -18254, -18766, -19121, -19646, -20351, -20974, -21486, -21992, -22378, -22626, -23100,
	-23950, -24725, -25130, -25570, -26384, -27213, -27635, -27805, -28036, -28338, -28693, -29211,
	-29742, -29946, -29845, -29795, -29845, -29698, -29310, -29016, -28987, -28955, -28609, -27992,
	-27335, -26653, -25721, -24515, -23329, -22313, -21197, -19801, -18418, -17247, -15933, -14196,
	-12412, -11014, -9791, -8368, -6852, -5442, -3906, -2065
};

/* Bordoni combinati*/
const int16_t __attribute__ ( ( section ( ".progmem.data" ) ) ) DRONE_ALL_DATA_BGT[] =
{
	784, 1597, 2554, 3457, 4165, 4878, 5763, 6617, 7288, 7967, 8760, 9479, 10048, 10544, 10876,
	10958, 10981, 11067, 11032, 10764, 10366, 9908, 9443, 9140, 9041, 9013, 9073, 9334, 9721,
	10184, 10903, 11863, 12642, 12979, 13075, 13117, 13055, 12961, 13149, 13775, 14613, 15312,
	15667, 15555, 14848, 13650, 12377, 11223, 9915, 8396, 7237, 6806, 6684, 6336, 5621, 4435,
	2731, 962, -322, -1151, -1741, -2031, -2058, -1995, -1629, -730, 255, 823, 1171, 1573, 1924,
	2485, 3815, 5515, 6509, 6854, 7674, 9145, 10190, 10357, 10402, 10771, 10929, 10574, 10240,
	10225, 10035, 9395, 8778, 8450, 7966, 7045, 5970, 4926, 3774, 2489, 1168, -170, -1333, -2099,
	-2735, -3533, -4078, -4020, -3932, -4314, -4651, -4522, -4464, -4770, -4802, -4240, -3644,
	-3276, -2710, -2000, -1944, -2853, -4009, -4721, -5156, -5751, -6402, -6767, -6969, -7317,
	-7661, -7774, -7941, -8401, -8694, -8400, -7967, -8008, -8336, -8328, -7841, -7230, -6684,
	-5935, -4710, -3298, -2259, -1562, -658, 535, 1607, 2639, 4167, 6184, 8197, 10195, 12463,
	14667, 16090, 16650, 16881, 16984, 16645, 15819, 15088, 14795, 14450, 13488, 12125, 10771,
	9260, 7418, 5669, 4346, 3317, 2714, 2901, 3448, 3379, 2590, 1837, 1440, 1049, 433, -293,
	-894, -1061, -769, -633, -1312, -2631, -3876, -4742, -5490, -6340, -7118, -7520, -7584,
	-7754, -8439, -9642, -11071, -12372, -13329, -14017, -14723, -15595, -16519, -17337, -17957,
	-18340, -18546, -18604, -18374, -17881, -17432, -17012, -16123, -14690, -13246, -11856,
	-9945, -7541, -5448, -3996, -2778, -1609, -718, 58, 1006, 2438, 4198, 5949, 7505, 8733,
	9507, 10068, 10912, 12144, 13475, 14795, 16121, 17220, 17874, 18197, 18289, 18114, 17829,
	17617, 17330, 16910, 16725, 16913, 17037, 16866, 16767, 17008, 17401, 17788, 18246, 18766,
	19110, 19049, 18568, 17866, 17192, 16723, 16672, 17174, 17841, 17818, 16712, 15063, 13525,
	12034, 10138, 7893, 5905, 4576, 3712, 3046, 2534, 1844, 345, -1853, -3751, -4890, -5831,
	-6781, -7178, -7013, -6942, -6946, -6428, -5522, -4854, -4391, -3766, -3061, -2282, -1023,
	639, 1945, 2647, 3378, 4502, 5602, 6286, 6656, 6842, 6697, 6233, 5808, 5595, 5288, 4665,
	4039, 3709, 3390, 2615, 1350, -70, -1386, -2638, -4015, -5415, -6305, -6500, -6649, -7193,
	-7525, -7153, -6713, -6751, -6680, -6077, -5577, -5492, -5057, -3909, -2858, -2407, -1941,
	-1095, -652, -1273, -2260, -2538, -2290, -2538, -3381, -3931, -3932, -4056, -4503, -4740,
	-4740, -5009, -5381, -5199, -4681, -4761, -5580, -6238, -6146, -5727, -5512, -5228, -4359,
	-3249, -2778, -2996, -3091, -2788, -2566, -2432, -1767, -518, 696, 1688, 2752, 3720, 4003,
	3546, 2917, 2356, 1469, 88, -1177, -1826, -2432, -3888, -6048, -8106, -9858, -11555, -13005,
	-13918, -14536, -15015, -14990, -14422, -13981, -13994, -13959, -13522, -13112, -13214,
	-13597, -13650, -13252, -12922, -13038, -13344, -13497, -13620, -13879, -14150, -14447,
	-15003, -15604, -15725, -15479, -15558, -16156, -16793, -17180, -17578, -18258, -19072,
	-19723, -20239, -20872, -21536, -21779, -21501, -21083, -20631, -19837, -18713, -17634,
	-16582, -15205, -13559, -11980, -10434, -8665, -6745, -4992, -3559, -2340, -1212
};

#else
const int8_t __attribute__ ( ( section ( ".progmem.data" ) ) ) INST_DATA_BGT []  =
	/* Chanter Sol */
{
	-1, 36, 63, 76, 83, 89, 95, 98, 97, 92, 83, 71, 54, 35, 15, -2, -16, -29, -42,
		-56, -69, -78, -81, -79, -73, -65, -57, -49, -43, -35, -23, -7, 8, 17, 20, 22,
		29, 41, 54, 63, 64, 56, 46, 40, 41, 45, 46, 38, 22, 4, -7, -9, -7, -6, -11, -20,
		-29, -34, -32, -25, -18, -15, -16, -19, -18, -12, 0, 12, 16, 12, 4, 0, 3, 8, 12,
		10, 4, -1, -2, 2, 12, 20, 22, 19, 16, 20, 31, 45, 55, 57, 53, 43, 32, 26, 26,
		20, -2, -37, -68, -79, -77, -77, -86, -102, -114, -113, -101, -86, -75, -68,
		-61, -46
	};

/* Bordone Minore*/
const int8_t __attribute__ ( ( section ( ".progmem.data" ) ) ) DRONE_MIN_DATA_BGT []  =
{
	0, 1, 3, 4, 5, 5, 6, 6, 6, 7, 10, 13, 14, 17, 20, 20, 18, 17, 15, 12, 9, 7, 6, 6, 8, 11,
	13, 17, 22, 27, 36, 46, 56, 63, 70, 76, 81, 84, 88, 96, 105, 115, 123, 127, 126, 122, 116,
	109, 100, 90, 83, 82, 82, 80, 75, 67, 54, 40, 28, 20, 13, 9, 5, 1, 0, 3, 6, 5, 3, 1, 0,
	-1, 5, 12, 13, 10, 11, 15, 18, 16, 13, 11, 7, 1, -5, -10, -16, -24, -30, -33, -38, -46,
	-55, -63, -72, -82, -91, -100, -105, -106, -106, -107, -105, -99, -93, -89, -85, -78,
	-71, -65, -57, -44, -31, -21, -10, 1, 7, 6, 3, 2, 3, 2, 0, -1, -1, -2, -3, -3, -4, -7,
	-10, -8, -6, -7, -13, -16, -16, -15, -14, -11, -7, -1, 2, 2, 3, 4, 5, 8, 16, 25, 33, 42,
	53, 63, 66, 64, 62, 60, 54, 46, 40, 37, 33, 24, 12, 1, -10, -23, -33, -38, -40, -43, -41,
	-33, -28, -26, -23, -19, -14, -13, -13, -10, -6, -2, 1, 2, 2, 2, 1, 0, -1, -4, -6, -6,
	-5, -6, -10, -16, -20, -24, -30, -36, -42, -49, -56, -64, -70, -72, -74, -74, -72, -69,
	-66, -62, -57, -51, -45, -39, -30, -20, -13, -7, -4, -2
};

/* Bordone Maggiore*/
const int8_t __attribute__ ( ( section ( ".progmem.data" ) ) ) DRONE_MAJ_DATA_BGT []  =
{
	5, 10, 16, 22, 27, 32, 38, 44, 49, 53, 57, 60, 62, 64, 64, 64, 66, 68, 70, 71, 70, 69,
	66, 63, 61, 58, 56, 54, 53, 51, 48, 45, 41, 36, 30, 24, 20, 16, 13, 10, 7, 3, -2, -7,
	-12, -17, -21, -23, -24, -26, -28, -30, -31, -32, -33, -34, -34, -34, -32, -30, -28,
	-26, -22, -18, -14, -10, -5, 1, 5, 10, 14, 19, 24, 30, 36, 42, 48, 55, 60, 64, 67, 72,
	77, 80, 84, 88, 93, 96, 97, 98, 98, 99, 100, 101, 100, 100, 99, 97, 94, 89, 84, 79, 73,
	67, 62, 55, 48, 42, 35, 27, 18, 10, 2, -5, -12, -17, -23, -29, -35, -39, -43, -48, -51,
	-52, -54, -56, -58, -58, -59, -59, -59, -58, -57, -56, -53, -50, -46, -42, -39, -36,
	-31, -25, -20, -15, -9, -1, 6, 11, 15, 22, 29, 36, 42, 50, 58, 64, 68, 71, 74, 75, 76,
	77, 78, 79, 81, 82, 81, 80, 76, 70, 65, 63, 62, 59, 53, 45, 37, 29, 22, 16, 10, 3, -3,
	-5, -7, -13, -23, -33, -38, -43, -49, -53, -53, -53, -56, -61, -66, -71, -77, -80, -80,
	-79, -79, -80, -79, -76, -74, -73, -72, -69, -67, -67, -67, -64, -58, -53, -48, -39, -30,
	-23, -19, -16, -10, -5, 0, 6, 15, 27, 40, 52, 61, 66, 71, 76, 83, 91, 99, 107, 113, 118,
	122, 124, 125, 125, 126, 126, 124, 122, 122, 120, 116, 112, 109, 107, 101, 95, 89, 84, 76,
	67, 57, 48, 40, 33, 27, 22, 15, 2, -10, -18, -24, -32, -40, -45, -49, -54, -59, -61, -62,
	-65, -70, -70, -67, -66, -67, -65, -60, -56, -55, -54, -49, -43, -38, -32, -24, -18, -13,
	-8, 1, 9, 15, 19, 25, 32, 38, 41, 44, 47, 49, 52, 56, 59, 60, 61, 63, 65, 64, 62, 60, 60,
	59, 57, 55, 55, 54, 50, 46, 43, 40, 36, 32, 29, 27, 22, 16, 12, 8, 2, -6, -10, -13, -17,
	-21, -22, -21, -23, -27, -30, -30, -31, -33, -35, -34, -33, -33, -33, -32, -30, -32, -34,
	-33, -31, -30, -30, -28, -25, -24, -27, -28, -27, -26, -28, -30, -30, -29, -30, -33, -35,
	-36, -38, -40, -42, -44, -47, -50, -52, -53, -56, -60, -65, -67, -67, -69, -71, -73, -75,
	-77, -79, -82, -84, -86, -87, -88, -90, -93, -96, -98, -100, -103, -106, -108, -108, -109,
	-110, -112, -114, -116, -117, -116, -116, -116, -116, -114, -113, -113, -113, -111, -109,
	-106, -104, -100, -96, -91, -87, -83, -77, -72, -67, -62, -56, -49, -43, -38, -33, -27,
	-22, -16, -9
};

/* Bordoni combinati*/
const int8_t __attribute__ ( ( section ( ".progmem.data" ) ) ) DRONE_ALL_DATA_BGT[] =
{
	3, 6, 9, 13, 16, 18, 22, 25, 28, 30, 33, 36, 38, 40, 42, 42, 42, 42, 42, 41, 40,
	38, 36, 35, 35, 34, 35, 36, 37, 39, 42, 45, 49, 50, 50, 50, 50, 50, 50, 53, 56,
	59, 60, 60, 57, 52, 47, 43, 38, 32, 28, 26, 25, 24, 21, 17, 10, 3, -2, -5, -7,
	-8, -8, -8, -7, -3, 0, 3, 4, 6, 7, 9, 14, 21, 25, 26, 29, 35, 39, 40, 40, 41,
	42, 40, 39, 39, 38, 36, 34, 32, 30, 27, 23, 19, 14, 9, 4, -1, -6, -9, -11, -14,
	-16, -16, -16, -17, -19, -18, -18, -19, -19, -17, -15, -13, -11, -8, -8, -12,
	-16, -19, -20, -23, -25, -27, -28, -29, -30, -31, -31, -33, -34, -33, -31, -32,
	-33, -33, -31, -29, -26, -24, -19, -13, -9, -7, -3, 2, 6, 10, 16, 23, 31, 39, 48,
	56, 62, 64, 65, 65, 64, 61, 58, 57, 56, 52, 46, 41, 35, 28, 21, 16, 12, 10, 11,
	13, 13, 10, 7, 5, 4, 1, -2, -4, -5, -3, -3, -6, -11, -16, -19, -22, -25, -28, -30,
	-30, -31, -33, -38, -43, -48, -52, -55, -58, -61, -65, -68, -70, -72, -72, -73,
	-72, -70, -68, -66, -63, -57, -52, -46, -39, -30, -22, -16, -11, -7, -3, 0, 3, 9,
	16, 23, 29, 33, 36, 39, 42, 47, 52, 57, 62, 66, 69, 70, 70, 70, 69, 68, 67, 65,
	64, 65, 66, 65, 64, 65, 67, 68, 70, 72, 74, 73, 71, 69, 66, 64, 64, 66, 69, 69,
	64, 58, 52, 46, 39, 30, 22, 17, 14, 11, 9, 7, 1, -8, -15, -19, -23, -27, -28, -28,
	-27, -27, -25, -22, -19, -18, -15, -12, -9, -4, 2, 7, 10, 13, 17, 21, 24, 25, 26,
	25, 24, 22, 21, 20, 18, 15, 14, 13, 10, 5, -1, -6, -11, -16, -21, -25, -26, -26,
	-28, -30, -28, -27, -27, -26, -24, -22, -22, -20, -16, -12, -10, -8, -5, -3, -5,
	-9, -10, -9, -10, -14, -16, -16, -16, -18, -19, -19, -20, -21, -21, -19, -19, -22,
	-25, -24, -23, -22, -21, -17, -13, -11, -12, -12, -11, -10, -10, -7, -3, 2, 6, 10,
	14, 15, 13, 11, 9, 5, 0, -5, -8, -10, -16, -24, -32, -39, -45, -51, -54, -57, -59,
	-59, -56, -55, -55, -55, -53, -51, -52, -53, -53, -52, -51, -51, -52, -53, -53, -54,
	-55, -56, -59, -61, -61, -60, -61, -63, -66, -67, -69, -71, -74, -77, -79, -81, -84,
	-85, -84, -82, -80, -77, -73, -69, -65, -59, -53, -47, -41, -34, -27, -20, -14, -10, -5
};
#endif

#endif /* BAGHET_H_ */