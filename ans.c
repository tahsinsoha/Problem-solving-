#include<stdio.h>
int main() {
    int studylevel;
    double monthanddate;
    float gpa;
    char friendsname;

    printf("enter your study level:\n");
    scanf("%d",&studylevel);
    printf("enter current month and date\n");
    scanf("%lf",&monthanddate);
    printf("enter your gpa");
    scanf("%f",&gpa);
    printf("enter the first letter of your close friend's name");
    scanf("%c",&friendsname);

    printf("\nyour study level:%d\n",studylevel);
    printf("current month and date: %lf\n",monthanddate);
    printf("enter your gpa:%f\n",gpa);
    printf("enter the first letter of your close friend's name:%c",friendsname);
    return 0;
}

