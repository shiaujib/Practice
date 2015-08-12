#include <stdio.h>
 
  #define ROWSIZE 3
  #define COLSIZE 2
 
  void func(int (*pia)[2]) {
   int i, j;
   for(i = 0; i < ROWSIZE; i++) {
     for(j = 0; j < COLSIZE; j++) {
       printf("%d ", *(*(pia + i) + j));
     }
     printf("\n");
   }
 }
 
  int main() {
   int ia[ROWSIZE][COLSIZE] = {{1, 2}, {3, 4}, {5,6}};
   func(ia); 
 }
