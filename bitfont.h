/* This table describes a bitmap font, 16x16 pixel.
 * Every entry corresponds to an ASCII printable character, from 32 to 126.
 * Every character is composed of 32 bytes describing the character in monocrome,
 * with bits set where a pixel should be set. They start from left-top byte and
 * end and bottom-right byte.
 *
 * I generated this table starting from an apparently freely available bitmap
 * font that I found as a PNG file on the internet at multiple locations. */

c[32] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"; /*   */
c[33] = "\x00\x00\x00\x00\x00\x00\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x00\x00\x01\x80\x01\x80\x00\x00\x00\x00\x00\x00"; /* ! */
c[34] = "\x00\x00\x00\x00\x00\x00\x06\xC0\x06\xC0\x06\xC0\x06\xC0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"; /* " */
c[35] = "\x00\x00\x00\x00\x00\x00\x01\x20\x01\x20\x03\x60\x07\xE0\x02\x40\x02\x40\x07\xE0\x06\xC0\x04\x80\x04\x80\x00\x00\x00\x00\x00\x00"; /* # */
c[36] = "\x00\x00\x00\x00\x01\x00\x07\xC0\x07\xE0\x0D\x60\x0D\x00\x07\x80\x01\xC0\x01\x60\x0D\x60\x0F\xC0\x07\x80\x01\x00\x00\x00\x00\x00"; /* $ */
c[37] = "\x00\x00\x00\x00\x00\x00\x04\x40\x0A\x40\x0A\x40\x0A\x80\x04\x80\x01\x20\x01\x50\x01\x50\x02\x50\x02\x20\x00\x00\x00\x00\x00\x00"; /* % */
c[38] = "\x00\x00\x00\x00\x00\x00\x03\xC0\x06\x60\x06\x60\x03\xC0\x03\x80\x07\xD0\x0C\xF0\x0C\x70\x0C\x70\x07\xD8\x00\x00\x00\x00\x00\x00"; /* & */
c[39] = "\x00\x00\x00\x00\x00\x00\x01\x80\x01\x80\x01\x80\x01\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"; /* ' */
c[40] = "\x00\x00\x00\x00\x00\x00\x00\x40\x00\xC0\x00\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x00\x80\x00\xC0\x00\x40"; /* ( */
c[41] = "\x00\x00\x00\x00\x00\x00\x01\x00\x01\x80\x00\x80\x00\xC0\x00\xC0\x00\xC0\x00\xC0\x00\xC0\x00\xC0\x00\xC0\x00\x80\x01\x80\x01\x00"; /* ) */
c[42] = "\x00\x00\x00\x00\x00\x00\x00\x80\x03\xE0\x01\xC0\x03\x60\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"; /* * */
c[43] = "\x00\x00\x00\x00\x00\x00\x00\x00\x01\x80\x01\x80\x01\x80\x0F\xF0\x0F\xF0\x01\x80\x01\x80\x01\x80\x00\x00\x00\x00\x00\x00\x00\x00"; /* + */
c[44] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x80\x01\x80\x00\x80\x01\x00\x00\x00"; /* , */
c[45] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\xE0\x01\xE0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"; /* - */
c[46] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x80\x01\x80\x00\x00\x00\x00\x00\x00"; /* . */
c[47] = "\x00\x00\x00\x00\x00\x00\x00\x40\x00\x40\x00\x80\x00\x80\x00\x80\x01\x00\x01\x00\x01\x00\x02\x00\x02\x00\x00\x00\x00\x00\x00\x00"; /* / */
c[48] = "\x00\x00\x00\x00\x00\x00\x03\x80\x07\xC0\x0E\xE0\x0C\x60\x0C\x60\x0C\x60\x0C\x60\x0E\xE0\x07\xC0\x03\x80\x00\x00\x00\x00\x00\x00"; /* 0 */
c[49] = "\x00\x00\x00\x00\x00\x00\x01\x80\x03\x80\x07\x80\x05\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x00\x00\x00\x00\x00\x00"; /* 1 */
c[50] = "\x00\x00\x00\x00\x00\x00\x03\xC0\x07\xE0\x0E\x60\x0C\x60\x00\xC0\x01\xC0\x03\x00\x06\x00\x0F\xE0\x0F\xE0\x00\x00\x00\x00\x00\x00"; /* 2 */
c[51] = "\x00\x00\x00\x00\x00\x00\x07\xC0\x0F\xE0\x0C\x60\x00\x60\x01\xC0\x00\x60\x0C\x60\x0E\x60\x07\xE0\x03\x80\x00\x00\x00\x00\x00\x00"; /* 3 */
c[52] = "\x00\x00\x00\x00\x00\x00\x00\xC0\x01\xC0\x03\xC0\x02\xC0\x06\xC0\x0C\xC0\x0F\xE0\x0F\xE0\x00\xC0\x00\xC0\x00\x00\x00\x00\x00\x00"; /* 4 */
c[53] = "\x00\x00\x00\x00\x00\x00\x07\xE0\x07\xE0\x06\x00\x0F\xC0\x0F\xE0\x0C\x60\x00\x60\x0C\x60\x0F\xC0\x07\x80\x00\x00\x00\x00\x00\x00"; /* 5 */
c[54] = "\x00\x00\x00\x00\x00\x00\x03\xC0\x07\xE0\x0E\x60\x0C\x00\x0F\xC0\x0F\xE0\x0C\x60\x0C\x60\x07\xE0\x03\xC0\x00\x00\x00\x00\x00\x00"; /* 6 */
c[55] = "\x00\x00\x00\x00\x00\x00\x0F\xE0\x0F\xE0\x00\xC0\x00\xC0\x01\x80\x01\x80\x01\x00\x03\x00\x03\x00\x03\x00\x00\x00\x00\x00\x00\x00"; /* 7 */
c[56] = "\x00\x00\x00\x00\x00\x00\x07\xC0\x0F\xE0\x0C\x60\x0C\x60\x07\xC0\x07\xC0\x0C\x60\x0C\x60\x0F\xE0\x07\xC0\x00\x00\x00\x00\x00\x00"; /* 8 */
c[57] = "\x00\x00\x00\x00\x00\x00\x07\x80\x0F\xC0\x0C\x60\x0C\x60\x0F\xE0\x07\xE0\x00\x60\x0C\xE0\x0F\xC0\x07\x80\x00\x00\x00\x00\x00\x00"; /* 9 */
c[58] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x80\x01\x80\x00\x00\x00\x00\x00\x00\x00\x00\x01\x80\x01\x80\x00\x00\x00\x00\x00\x00"; /* : */
c[59] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x80\x01\x80\x00\x00\x00\x00\x00\x00\x00\x00\x01\x80\x01\x80\x00\x80\x01\x00\x00\x00"; /* ; */
c[60] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x20\x00\xE0\x03\xC0\x0F\x00\x0F\x00\x03\xC0\x00\xE0\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00"; /* < */
c[61] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x0F\xE0\x0F\xE0\x00\x00\x0F\xE0\x0F\xE0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"; /* = */
c[62] = "\x00\x00\x00\x00\x00\x00\x00\x00\x08\x00\x0E\x00\x07\x80\x01\xE0\x01\xE0\x07\x80\x0E\x00\x08\x00\x00\x00\x00\x00\x00\x00\x00\x00"; /* > */
c[63] = "\x00\x00\x00\x00\x00\x00\x03\xC0\x07\xE0\x0C\x30\x00\x70\x00\xE0\x01\xC0\x01\x80\x00\x00\x01\x80\x01\x80\x00\x00\x00\x00\x00\x00"; /* ? */
c[64] = "\x00\x00\x00\x00\x00\x00\x03\xF0\x0C\x18\x13\xB4\x27\xF2\x6E\x72\x4C\x72\x4C\x62\x4C\xE4\x4F\xEC\x27\x70\x30\x02\x18\x0C\x07\xF0"; /* @ */
c[65] = "\x00\x00\x00\x00\x00\x00\x01\xC0\x01\xC0\x03\xE0\x03\x60\x03\x60\x06\x30\x07\xF0\x07\xF0\x0C\x18\x0C\x18\x00\x00\x00\x00\x00\x00"; /* A */
c[66] = "\x00\x00\x00\x00\x00\x00\x0F\xE0\x0F\xF0\x0C\x30\x0C\x30\x0F\xE0\x0F\xF0\x0C\x30\x0C\x30\x0F\xF0\x0F\xE0\x00\x00\x00\x00\x00\x00"; /* B */
c[67] = "\x00\x00\x00\x00\x00\x00\x03\xC0\x07\xE0\x0E\x70\x0C\x20\x0C\x00\x0C\x00\x0C\x20\x0E\x70\x07\xE0\x03\xC0\x00\x00\x00\x00\x00\x00"; /* C */
c[68] = "\x00\x00\x00\x00\x00\x00\x0F\xC0\x0F\xE0\x0C\x70\x0C\x30\x0C\x30\x0C\x30\x0C\x30\x0C\x70\x0F\xE0\x0F\xC0\x00\x00\x00\x00\x00\x00"; /* D */
c[69] = "\x00\x00\x00\x00\x00\x00\x07\xF0\x07\xF0\x06\x00\x06\x00\x07\xF0\x07\xF0\x06\x00\x06\x00\x07\xF0\x07\xF0\x00\x00\x00\x00\x00\x00"; /* E */
c[70] = "\x00\x00\x00\x00\x00\x00\x07\xF0\x07\xF0\x06\x00\x06\x00\x07\xE0\x07\xE0\x06\x00\x06\x00\x06\x00\x06\x00\x00\x00\x00\x00\x00\x00"; /* F */
c[71] = "\x00\x00\x00\x00\x00\x00\x07\xC0\x0F\xE0\x1C\x70\x18\x20\x18\x00\x18\xF0\x18\xF0\x1C\x30\x0F\xE0\x07\xC0\x00\x00\x00\x00\x00\x00"; /* G */
c[72] = "\x00\x00\x00\x00\x00\x00\x0C\x30\x0C\x30\x0C\x30\x0C\x30\x0F\xF0\x0F\xF0\x0C\x30\x0C\x30\x0C\x30\x0C\x30\x00\x00\x00\x00\x00\x00"; /* H */
c[73] = "\x00\x00\x00\x00\x00\x00\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x00\x00\x00\x00\x00\x00"; /* I */
c[74] = "\x00\x00\x00\x00\x00\x00\x00\x60\x00\x60\x00\x60\x00\x60\x00\x60\x00\x60\x0C\x60\x0C\x60\x0F\xE0\x07\xC0\x00\x00\x00\x00\x00\x00"; /* J */
c[75] = "\x00\x00\x00\x00\x00\x00\x0C\x30\x0C\x60\x0C\xC0\x0D\x80\x0F\xC0\x0E\xC0\x0C\x60\x0C\x60\x0C\x30\x0C\x30\x00\x00\x00\x00\x00\x00"; /* K */
c[76] = "\x00\x00\x00\x00\x00\x00\x06\x00\x06\x00\x06\x00\x06\x00\x06\x00\x06\x00\x06\x00\x06\x00\x07\xF0\x07\xF0\x00\x00\x00\x00\x00\x00"; /* L */
c[77] = "\x00\x00\x00\x00\x00\x00\x1C\x1C\x1E\x3C\x1E\x3C\x1A\x2C\x1B\x6C\x1B\x6C\x19\xCC\x19\xCC\x19\xCC\x18\x8C\x00\x00\x00\x00\x00\x00"; /* M */
c[78] = "\x00\x00\x00\x00\x00\x00\x0C\x30\x0E\x30\x0F\x30\x0F\x30\x0D\xB0\x0D\xB0\x0C\xF0\x0C\xF0\x0C\x70\x0C\x30\x00\x00\x00\x00\x00\x00"; /* N */
c[79] = "\x00\x00\x00\x00\x00\x00\x07\xC0\x0F\xE0\x1C\x70\x18\x30\x18\x30\x18\x30\x18\x30\x1C\x70\x0F\xE0\x07\xC0\x00\x00\x00\x00\x00\x00"; /* O */
c[80] = "\x00\x00\x00\x00\x00\x00\x07\xE0\x07\xF0\x06\x30\x06\x30\x07\xF0\x07\xE0\x06\x00\x06\x00\x06\x00\x06\x00\x00\x00\x00\x00\x00\x00"; /* P */
c[81] = "\x00\x00\x00\x00\x00\x00\x07\xC0\x0F\xE0\x1C\x70\x18\x30\x18\x30\x18\x30\x19\x30\x1C\xF0\x0F\xE0\x07\xE0\x00\x10\x00\x00\x00\x00"; /* Q */
c[82] = "\x00\x00\x00\x00\x00\x00\x0F\xE0\x0F\xF0\x0C\x30\x0C\x30\x0F\xF0\x0F\xC0\x0C\xE0\x0C\x60\x0C\x70\x0C\x38\x00\x00\x00\x00\x00\x00"; /* R */
c[83] = "\x00\x00\x00\x00\x00\x00\x03\xE0\x07\xF0\x06\x30\x06\x00\x07\xE0\x03\xF0\x00\x30\x06\x30\x07\xF0\x03\xE0\x00\x00\x00\x00\x00\x00"; /* S */
c[84] = "\x00\x00\x00\x00\x00\x00\x0F\xF0\x0F\xF0\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x00\x00\x00\x00\x00\x00"; /* T */
c[85] = "\x00\x00\x00\x00\x00\x00\x0C\x30\x0C\x30\x0C\x30\x0C\x30\x0C\x30\x0C\x30\x0C\x30\x0E\x70\x0F\xE0\x03\xE0\x00\x00\x00\x00\x00\x00"; /* U */
c[86] = "\x00\x00\x00\x00\x00\x00\x0C\x18\x06\x30\x06\x30\x06\x30\x03\x60\x03\x60\x03\xE0\x01\xC0\x01\xC0\x01\xC0\x00\x00\x00\x00\x00\x00"; /* V */
c[87] = "\x00\x00\x00\x00\x00\x00\x31\xC6\x31\xC6\x39\xCE\x1B\xEC\x1B\x6C\x1B\x6C\x1F\x7C\x0E\x38\x0E\x38\x0E\x38\x00\x00\x00\x00\x00\x00"; /* W */
c[88] = "\x00\x00\x00\x00\x00\x00\x06\x30\x06\x30\x03\x60\x01\xC0\x01\xC0\x01\xC0\x01\xC0\x03\x60\x06\x30\x06\x30\x00\x00\x00\x00\x00\x00"; /* X */
c[89] = "\x00\x00\x00\x00\x00\x00\x0C\x30\x0C\x30\x06\x60\x03\xC0\x03\xC0\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x00\x00\x00\x00\x00\x00"; /* Y */
c[90] = "\x00\x00\x00\x00\x00\x00\x0F\xF0\x0F\xF0\x00\x60\x00\xC0\x01\x80\x01\x80\x03\x00\x06\x00\x0F\xF0\x0F\xF0\x00\x00\x00\x00\x00\x00"; /* Z */
c[91] = "\x00\x00\x00\x00\x00\x00\x01\xE0\x01\xE0\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\xE0\x01\xE0"; /* [ */
c[92] = "\x00\x00\x00\x00\x00\x00\x02\x00\x02\x00\x01\x00\x01\x00\x01\x00\x00\x80\x00\x80\x00\x80\x00\x40\x00\x40\x00\x00\x00\x00\x00\x00"; /* \ */
c[93] = "\x00\x00\x00\x00\x00\x00\x03\xC0\x03\xC0\x00\xC0\x00\xC0\x00\xC0\x00\xC0\x00\xC0\x00\xC0\x00\xC0\x00\xC0\x00\xC0\x03\xC0\x03\xC0"; /* ] */
c[94] = "\x00\x00\x00\x00\x00\x00\x01\x80\x01\x80\x03\xC0\x02\x40\x06\x60\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"; /* ^ */
c[95] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x0F\xF0"; /* _ */
c[96] = "\x00\x00\x00\x00\x00\x00\x03\x00\x01\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"; /* ` */
c[97] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x03\xC0\x07\xE0\x00\x60\x01\xE0\x03\x60\x06\x60\x07\xE0\x03\xB0\x00\x00\x00\x00\x00\x00"; /* a */
c[98] = "\x00\x00\x00\x00\x00\x00\x06\x00\x06\x00\x06\xC0\x07\xE0\x07\x70\x06\x30\x06\x30\x07\x70\x07\xE0\x06\xC0\x00\x00\x00\x00\x00\x00"; /* b */
c[99] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\xC0\x03\xE0\x06\x60\x06\x00\x06\x00\x06\x60\x03\xE0\x01\xC0\x00\x00\x00\x00\x00\x00"; /* c */
c[100] = "\x00\x00\x00\x00\x00\x00\x00\x30\x00\x30\x01\xB0\x03\xF0\x07\x70\x06\x30\x06\x30\x07\x70\x03\xF0\x01\xB0\x00\x00\x00\x00\x00\x00"; /* d */
c[101] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\xC0\x03\xE0\x06\x30\x07\xF0\x07\xF0\x06\x00\x03\xF0\x01\xE0\x00\x00\x00\x00\x00\x00"; /* e */
c[102] = "\x00\x00\x00\x00\x00\x00\x00\xE0\x01\x80\x03\xE0\x03\xE0\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x00\x00\x00\x00\x00\x00"; /* f */
c[103] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\xB0\x03\xF0\x07\x70\x06\x30\x06\x30\x07\x70\x07\xF0\x01\xB0\x06\x30\x07\xF0\x03\xE0"; /* g */
c[104] = "\x00\x00\x00\x00\x00\x00\x06\x00\x06\x00\x06\xE0\x07\xF0\x07\x30\x06\x30\x06\x30\x06\x30\x06\x30\x06\x30\x00\x00\x00\x00\x00\x00"; /* h */
c[105] = "\x00\x00\x00\x00\x00\x00\x01\x80\x00\x00\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x00\x00\x00\x00\x00\x00"; /* i */
c[106] = "\x00\x00\x00\x00\x00\x00\x01\x80\x00\x00\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x07\x80\x07\x00"; /* j */
c[107] = "\x00\x00\x00\x00\x00\x00\x06\x00\x06\x00\x06\x60\x06\xC0\x07\x80\x07\x80\x07\xC0\x06\xC0\x06\x60\x06\x60\x00\x00\x00\x00\x00\x00"; /* k */
c[108] = "\x00\x00\x00\x00\x00\x00\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x01\x80\x00\x00\x00\x00\x00\x00"; /* l */
c[109] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1F\x70\x1F\xF8\x19\x98\x19\x98\x19\x98\x19\x98\x19\x98\x19\x98\x00\x00\x00\x00\x00\x00"; /* m */
c[110] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x06\xE0\x07\xF0\x07\x30\x06\x30\x06\x30\x06\x30\x06\x30\x06\x30\x00\x00\x00\x00\x00\x00"; /* n */
c[111] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\xC0\x03\xE0\x07\x70\x06\x30\x06\x30\x07\x70\x03\xE0\x01\xC0\x00\x00\x00\x00\x00\x00"; /* o */
c[112] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x06\xC0\x07\xE0\x07\x70\x06\x30\x06\x30\x07\x70\x07\xE0\x06\xC0\x06\x00\x06\x00\x06\x00"; /* p */
c[113] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\xB0\x03\xF0\x07\x70\x06\x30\x06\x30\x07\x70\x03\xF0\x03\xB0\x00\x30\x00\x30\x00\x30"; /* q */
c[114] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x03\x60\x03\xE0\x03\x80\x03\x00\x03\x00\x03\x00\x03\x00\x03\x00\x00\x00\x00\x00\x00\x00"; /* r */
c[115] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x03\xC0\x07\xE0\x06\x00\x07\xC0\x03\xE0\x00\x60\x07\xE0\x03\xC0\x00\x00\x00\x00\x00\x00"; /* s */
c[116] = "\x00\x00\x00\x00\x00\x00\x00\x80\x01\x80\x03\xE0\x03\xE0\x01\x80\x01\x80\x01\x80\x01\x80\x01\xE0\x00\xE0\x00\x00\x00\x00\x00\x00"; /* t */
c[117] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x06\x30\x06\x30\x06\x30\x06\x30\x06\x30\x06\x70\x07\xF0\x03\xB0\x00\x00\x00\x00\x00\x00"; /* u */
c[118] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x06\x30\x06\x30\x06\x30\x03\x60\x03\x60\x01\xC0\x01\xC0\x01\xC0\x00\x00\x00\x00\x00\x00"; /* v */
c[119] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x31\x98\x33\x98\x1B\xB0\x1B\xB0\x1E\xF0\x0E\xE0\x0E\xE0\x0E\x60\x00\x00\x00\x00\x00\x00"; /* w */
c[120] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x06\x60\x06\x60\x03\xC0\x01\x80\x01\x80\x03\xC0\x06\x60\x06\x60\x00\x00\x00\x00\x00\x00"; /* x */
c[121] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x0C\x60\x0C\x60\x06\xC0\x06\xC0\x06\xC0\x07\xC0\x03\x80\x03\x80\x03\x80\x03\x00\x07\x00"; /* y */
c[122] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x07\xC0\x07\xC0\x00\xC0\x01\x80\x03\x00\x06\x00\x07\xC0\x07\xC0\x00\x00\x00\x00\x00\x00"; /* z */
c[123] = "\x00\x00\x00\x00\x00\x00\x00\xE0\x01\xE0\x01\x80\x01\x80\x01\x80\x01\x80\x03\x00\x01\x80\x01\x80\x01\x80\x01\x80\x01\xE0\x00\xE0"; /* { */
c[124] = "\x00\x00\x00\x00\x00\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00\x01\x00"; /* | */
c[125] = "\x00\x00\x00\x00\x00\x00\x03\x80\x03\xC0\x00\xC0\x00\xC0\x00\xC0\x00\xC0\x00\x60\x00\xC0\x00\xC0\x00\xC0\x00\xC0\x03\xC0\x03\x80"; /* } */
c[126] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x0F\x20\x0F\xE0\x09\xC0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"; /* ~ */