#include<stdio.h>
int main(){
	int a,b,c,min1,min2;
	printf("Enter number :");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&&a<c){
		a=min1;
		}

	if(b>a&&b<c){
		b=min1;
	}
	if(c<a&&c<b){
		c=min1;
	}
	if(a>b&&a<c){
		a=min2;
	}
	if(b>c&&b<c){
		b=min2;
	}
	if(c>a&&c>b){
		c=min2;
	}
	printf("%d+%d=%d",min1,min2,min1+min2);
	return 0;
}
