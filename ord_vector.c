#include <stdio.h>

int main (){
  int n=0,valor=0,previous=0;

  printf("Insert the size of the vector to be orded: ");
  scanf("%d",&n);
  while(n<=0){
    printf("\n Insert the size of the vector to be orded: ");
    scanf("%d",&n);
  }
  int vector[n], ordered[n];

  for(int i = 0 ; i <n;i++){
    vector[i]=0;
    ordered[i]=0;
    printf("\n Insert vector[%d] => ",i);
    scanf("%d",&valor);
    vector[i]=valor;
    ordered[i]=valor;
    
  }
  for(int h=0;h<n-1;h++){
      if(ordered[h] < ordered[h+1]){
          previous=ordered[h];
          ordered[h]=ordered[h+1];
          ordered[h+1]=previous;
          h=-1;
      }
  }

  printf("\nVector out of order:\n\n");
  for(int i = 0 ; i <n;i++){
    printf("vector[%d] => %d, ",i,vector[i]);
  }

  printf("\n\n Ordered Vector:\n\n");
  for(int i = 0 ; i <n;i++){
    printf("ordered[%d] => %d, ",i,ordered[i]);
  }

  return 0;
}