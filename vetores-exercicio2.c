#include <stdio.h>
#define LIMITE 128
int main(){
  int A[LIMITE],K=0,r=0;
  printf("Insirt the K value for the vector A: ");
  scanf("%d",&K);
  for(int i  = 0 ; i <  LIMITE;i++){
    r=rand()%LIMITE;
    printf("%d\n",r);
    A[i]=r;
  }
  if(K >=0 && K<=127){
    printf("The key K exists in vector A! And it's value is: %d",A[K]);
  }else{
    printf("The key K does not exist in vector A!");
  }
  return 0;
}