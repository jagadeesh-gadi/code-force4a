#include<stdio.h>
#include<conio.h>

int main(){
    int a=5,b=10;
     a=a^b;
     b=a^b;
     a=a^b;
     printf("%d %d ",a,b);
}
