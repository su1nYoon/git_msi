#include <stdio.h>
struct student{
        int number;
        int score;
        char name[10];
    };

int main(void){
    struct student student1[3]={{1, 100, "윤수인"}, {2, 90, "이준서"}, {3, 80, "정서연"}};
    int max=0;
    char name[10];
    int i=0;
    for(i=0; i>3; i++){
        if(student1[i].score > max){
            max = i;
        }
      }
    printf("가장 성적이 높은 학생은 %s입니다", student1[i].name);
}
