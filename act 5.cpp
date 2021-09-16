#include<stdio.h>
int main(){
	
	char str[50], *p;
	
	p=str;
	printf("enter str :");
	scanf("%s",str);
	while(*p!='\0')
	{
		if(*p!=*(p+1))
		
		{
			printf("Result : %c",*p);
		}
		p++;
	}
	return 0;
}
