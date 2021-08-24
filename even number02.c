#include<stdio.h>
main(){
	int a[4],i,b=0;
	printf("Enter number:");
	for(i=0;i<4;i++){
		
		scanf("%d",&a[i]);
		if(a[i]%2==0){
		b++;
	}
	}
	
	printf("Sum of even number : %d\n",b);
	return 0;
}
