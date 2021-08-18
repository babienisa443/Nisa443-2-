#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Three number : ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b){
		printf("max : %d\n",a);
		}
	else if(b>c){
		printf("max : %d\n",b);
	}
	else if(c>a){
		printf("max : %d\n",c);
	}
	else{
		printf("Both equal");
	}	
	
  return 0;
}
