#include <stdio.h>
main(){

  int a;
  printf("사과는 1, 키위는 2, 복숭아는 3, 수박은 4");
  printf("자신이 좋아하는 과일을 번호로 입력해주세요.");
  scanf("%d", &a);
  
  if(a==1)
    printf("사과를 좋아하는군요!");
  else if (a==2)
    printf("키위를 좋아하는군요!");
  else if (a==3)
    printf("복숭아를 좋아하는군요!");
  else if (a==4)
    printf("수박을 좋아하는군요!");
  else
    printf("당신은 아마도 과일을 좋아하지 않는 것 같군요");

  printf("좋아하는 과일 조사 끝");
}