#include <stdio.h>
#define LIMITE 10
int main(){
   int r[LIMITE], s[LIMITE],y[LIMITE],x[LIMITE*2],valor=0,soma=0;
   printf("Insert the values for the vector R: \n");
   for(int i =0;i<LIMITE;i++){
     printf("R[%d] => ",i);
     scanf("%d",&valor);
     r[i]=valor;
     soma+=valor;
     x[i]=valor;
     y[i]=valor;
   }
     printf("Insert the values for the vector S: \n");

   for(int i =0;i<LIMITE;i++){
     printf("S[%d] => ",i);
     scanf("%d",&valor);
     s[i]=valor;
    soma+=valor;
     x[i+10]=valor;
    y[i]=y[i]*valor;

   }
   
   printf("Vector R: \n\n");
   for(int i  = 0 ; i <  LIMITE;i++){
        printf("R[%d] => %d, ",i,r[i]);
   }
  printf("\n\nVector S: \n\n");
   for(int i  = 0 ; i <  LIMITE;i++){
        printf("S[%d] => %d, ",i,s[i]);
   }
     
    printf("\n\nVector X: \n\n");
   for(int i  = 0 ; i <  LIMITE*2;i++){
        printf("X[%d] => %d, ",i,x[i]);
   }  
   printf("\nVector Y: \n");
   for(int i  = 0 ; i <  LIMITE;i++){
        printf("Y[%d] => %d, ",i,y[i]);
   }

}