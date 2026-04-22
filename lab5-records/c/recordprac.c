#include <stdio.h>
typedef enum {JAN, FEB, MAR, APR, MAY, JUN, 
              JUL, AUG, SEP, OCT, NOV, DEC} month;

typedef struct { int d; month m; int y; }  Date;

Date someday2 = { 2, JAN, 1901, DEC, 2010, 21748 };
// / / gcc compiler warns but compiles
Date someday3 = { 3, JAN };  //no gcc compiler warning
Date someday4 = { 3, JAN, DEC };

