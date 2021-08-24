#include<stdio.h>
int main(){
	int a,b,c,d,sum;	
	printf("Enter number : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	if(a%2==0){
		a=1;
	}
	else{
		a=0;
	}
		if(b%2==0){
		b=1;
	}
	else{
		b=0;
	}
		if(c%2==0){
		c=1;
	}
	else{
		c=0;
	}
		if(d%2==0){
		d=1;
	}
	else{
		d=0;
	}
	sum=a+b+c+d;
	printf("Sum of even number is : %d",sum);
		
	
	
}
