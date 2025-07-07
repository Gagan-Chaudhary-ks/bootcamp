#include<stdio.h>
int main (){
    int n , i, sum;
    printf("ENTER A NUMBER : \n");
    scanf("%d",&n);
    for (i=1;i<=n/2;i++) {
        if (n%i==0)
        sum = sum  + i;

            }
    if (n == sum){
        printf("IS PERFECT ");}
    else {
        printf("IS NOT PERFECT ");    }


    
return 0;
}