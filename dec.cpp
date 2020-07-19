#include<stdio.h>
int main(){
short ix,iy;
long lx,ly;
double dx,dy;
scanf("%hd %ld %lf",&ix,&lx,&dx);
scanf("%3ho %7lx %15le ",&iy,&ly,&dy);

printf("%hd %ld %lf",&ix,&lx,&dx);
printf("%3ho %7lx %15le ",&iy,&ly,&dy);

return 0;
}
