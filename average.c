#include<stdio.h>
int main(){
	double a,b,c,d,e,f,g,h,x,y;
	double avg;
	printf("Enter heigh of 10 student :");
	scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f,&g,&h,&x,&y);
	avg=(a+b+c+d+e+f+g+h+x+y)/10;
	printf("Average of student :%.4lf ",avg);
	return 0;
}
