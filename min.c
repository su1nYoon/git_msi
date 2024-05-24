#include <stdio.h>
int main(void){
    int time;
    int min;
    int min1=0;
    printf("시: ");
    scanf("%d", &time);
    printf("분: ");
    scanf("%d", &min);

    min1=min-45;

    if(min1<0){
        time = time-1;
        min1=min1+60;
    }
    
    if(time<0){
        time = time+24;
    }
    if(time<12){
        printf("오전");
    }
    else
        printf("오후");
    printf("%d시 %d분", time, min1);
}
