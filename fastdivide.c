#include "fastdivide.h"

unsigned int fastdivide(unsigned int a, unsigned int b) {const unsigned int v[] = {0x2, 0xC, 0xF0, 0xFF00, 0xFFFF0000};unsigned int la = 0;unsigned int lb = 0;la |= (a & v[4]) >> 16;la |= (a & v[3]) >> 8;la |= (a & v[2]) >> 4;la |= (a & v[1]) >> 2;la |= (a & v[0]) >> 1;lb |= (b & v[4]) >> 16;lb |= (b & v[3]) >> 8;lb |= (b & v[2]) >> 4;lb |= (b & v[1]) >> 2;lb |= (b & v[0]) >> 1;return 2 << (la - lb - 1);}
