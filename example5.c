//
//  example3.c
//  c-study
//
//  Created by 조현진 on 2022/05/01.
// 예제 5-3
#include <stdio.h>
void by_value(int a, int b, int c);
void by_ref(int *a, int *b, int *c);
void main() {
  int x = 2, y = 4, z = 6;
  printf("Before calling by_value() \t: ");
  printf("x = %d, y= %d, z= %d", x, y, z);
  by_value(x, y, z);
  printf("After calling by_value() \t: ");
  printf("x = %d, y = %d, z = %d \n", x, y, z);
  by_ref(&x, &y, &z);
  printf("After calling by_ref() \t\t: ");
  printf("x = %d, y = %d, z = %d \n", x, y, z);
  }
void by_value(int a, int b, int c) {
  a = 0;
  b = 0;
  c = 0;
}
void by_ref(int *a, int *b, int *c) {
  *a = 0;
  *b = 0;
  *c = 0;
}