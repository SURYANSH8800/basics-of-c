#include<stdio.h>
void main(){
    char c;
    printf("ENTER A LETTER TO CHECK : ");
    scanf("%c",&c);
    if(c == 'a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
        printf(" %c is a vowel",c);
    }
    else{
        printf("%c is a consonant",c);
    }
}