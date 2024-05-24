#include <stdio.h>
int main()
{
  struct {
      char name[15];
      int number;
  }B_student;
  printf("%d", sizeof(B_student));
}

#include <stdio.h>
int main(void){
    struct student{
        int num;
        char name[10];
        int kor;
        int eng;
        int math;
    };
struct student student1={20235104, "윤수인", 100, 90, 80};
printf("학번:%d, 이름:%s, 국어:%d, 수학:%d, 영어:%d");
}
