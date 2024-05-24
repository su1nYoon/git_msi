#include <stdio.h>
int main(void){
  char *name[3];
  name[0]= "Hunmin Lee";
  name[1]= "Jungeum Lee";
  name[2]= "Jimyung Lee";
  for(int n=0; n<3; n++){
    puts(name[n]);
    printf("\n");
  }
}

#include <stdio.h>
void chang(int a[], int k);
int main(void){
  int b[4] = {10, 20, 30, 40};
  printf("배열 b[] 출력 %d %d %d %d \n", b[0], b[1], b[2], b[3]);
  chang(b, 4);
  printf("배열 b[] 출격 %d %d %d %d \n", b[0], b[1], b[2], b[3]);
  return 0;
}
void chang(int a[], int k){
  a[0]=50; a[1]=60;
  a[2]=70; a[3]=80;
}
