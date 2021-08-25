#include<stdio.h>
int main(){
	int a[3],i,j,min1=20000000,min2=20000000;
	printf("Enter number :");
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
	if(a[i]<= min1){
		if(min1<min2){
			min2=min1;
		}
		min1=a[i];
			}	
	if(a[i]<=min2&&a[i]!=min1){
		min2 = a[i];
	}
	
		}
		printf("%d+%d = %d",min1,min2,(min1+min2));

}
