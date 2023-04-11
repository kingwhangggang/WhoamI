#include <stdio.h>

main() {
  int a = 5;

  if (a > 3) //if(참)
    printf("A\n"); //조건문이 참이면 실행
  else
    printf("B\n"); //조건문이 거짓이면 실행
  printf("C\n");

  if (a > 8) printf("D\n"); //조건문이 참이면 실행

  else printf("E\n"); //조건문이 거짓이면 실행

  printf("F\n");
}