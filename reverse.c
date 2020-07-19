#include<stdio.h>
int main()
    {
    int num1=45,num2=54,num3;
    //int num2=54;
    //int num3;
    num3=num2; //num3=54
    num2=num1; //num2=45
    num1=num3;
    printf("%d\n",num1);
    printf("%d\n",num2);
    return 0;
}
