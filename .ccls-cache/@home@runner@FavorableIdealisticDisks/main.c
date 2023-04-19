#include <stdio.h>


int fastdivide(unsigned int a, unsigned int b) { 
const unsigned int v[] = {0x2, 0xC, 0xF0, 0xFF00, 0xFFFF0000};
unsigned int la = 0;
unsigned int lb = 0;

// loop unrolling and manual shift amounts
la |= (a & v[4]) >> 16;
la |= (a & v[3]) >> 8;
la |= (a & v[2]) >> 4;
la |= (a & v[1]) >> 2;
la |= (a & v[0]) >> 1;

lb |= (b & v[4]) >> 16;
lb |= (b & v[3]) >> 8;
lb |= (b & v[2]) >> 4;
lb |= (b & v[1]) >> 2;
lb |= (b & v[0]) >> 1;


return 2 << (la - lb - 1);

}


int main(void) {
  clock_t fdstart, fdend, dstart, dend;
  double fdelapsed_time, delapsed_time;

  fdstart = clock();
  fastdivide(999965999, 4467846);
  fdend = clock();
  fdelapsed_time = (double) (fdend - fdstart) * 1000.0 / CLOCKS_PER_SEC;
  printf("Elapsed time: %f milliseconds\n", fdelapsed_time);

  dstart = clock();
  divide(999965999, 4467846);
  dend = clock();
  delapsed_time = (double) (dend - dstart) * 1000.0 / CLOCKS_PER_SEC;
  printf("Elapsed time: %f milliseconds\n", delapsed_time);

  return 0;
}