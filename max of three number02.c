#include<stdio.h>
#include<conio.h>
int main()
{
int num[3],i,max;
  for(i=0;i<3;i++){
  num[i]=0;
  printf("Enter number%d :",i+1);
  scanf("%d",&num[i]);
  }
  max=num[0];
  for(i=0;i<3;i++){
  	if(num[i]>max){
  		max=num[i];
	  }
  }
  printf("Max : %d",max);
    return 0;
}
     
