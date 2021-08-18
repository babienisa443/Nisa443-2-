#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Three number : ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<b){
		printf("min : %d\n",a);
		}
	else if(b<c){
		printf("min : %d\n",b);
	}
	else if(c<a){
		printf("min : %d\n",c);
	}
	else{
		printf("Both equal");
	}	
	
  return 0;
}
