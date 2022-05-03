//
//  example6.c
//  c-study
//
//  Created by 조현진 on 2022/05/01.
// 과제 1
#include <stdio.h>
#pragma warning(disable: 4996)
int main()
{
  int a;
  printf("1000~9000 사이의 정수를 입력하시오");
  scanf("%d", &a);
  if (a < 1000 ) {
    printf("1000 이상 9000 이하의 숫자를 입력해주세요");
  }else if(a > 9000 ) {
    printf("1000 이상 9000 이하의 숫자를 입력해주세요");
  } else {
      if(a % 2 == 0) {
        printf( a);
      } else {
        printf( a );
      }

  }

 
}