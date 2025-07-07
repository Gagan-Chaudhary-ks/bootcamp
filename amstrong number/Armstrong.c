#include<stdio.h>
int main(){
    int n , r , sum =0, temp;
    printf("ENTER A NUMBER :");
    scanf("%d",&n);
    temp=n;
    while (n>0) {
    r = n%10;
    sum = sum +(r*r*r);
    n = n/10;}
    if (temp==sum){
    printf("%d IS ARMSTRONG ", temp);}
    else {
    printf("%d IS NOT ARMSTRONG ",temp);}
    return 0 ;
}