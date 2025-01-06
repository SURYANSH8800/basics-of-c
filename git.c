#include<stdio.h>
void main(){
    int n;
    printf("ENTER THE NUMBER :");
    scanf("%d",&n);
    (n==0)?printf("ZERO"):((n>0)?printf("POSITIVE"):printf("NEGATIVE"));
}