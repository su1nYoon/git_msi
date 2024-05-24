#include <stdio.h>
int main (void)
{
    int start, end, sum = 0;
    printf("첫범위를 입력하시오 : ");
    scanf("%d", &start);
    printf("마지막범위를 입력하시오 : ");
    scanf("%d", &end);

    for(int i = start; i<= end; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }


    printf("%d부터 %d까지의 짝수의 합= %d\n", start, end, sum);

    return 0;
}
