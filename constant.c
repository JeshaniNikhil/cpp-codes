#include<stdio.h>
#define pi 3.14
enum color{red,green,blue};
int main()
{    enum color rgb;
    const a=10;
    int i;
    // a=20; cannot modify constant value
    // pi=3.55;
    // rgb=20;
    rgb=green;
printf("color:%d",rgb);
   printf("\aA:%d",a);
   printf("\npi:%d",pi);
    return 0;
}