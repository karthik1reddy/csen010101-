#include<stdio.h>
int main(){
    int num,i,f=1;
    scanf("%d",&num);
    if(num<=10){
         for(i=1;i<=10;i++){
          f=f*i;
          printf("%d ",f);
        }
    }
    else if(num>10){
        printf("Too big a number");
    }
    else{
        printf("Negative Number");
    }
    return 0;
}
