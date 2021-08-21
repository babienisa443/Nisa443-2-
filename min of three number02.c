#include<stdio.h>
#include<conio.h>
int main()
{
int num[3],i,min;
  for(i=0;i<3;i++){
  num[i]=0;
  printf("Enter number%d :",i+1);
  scanf("%d",&num[i]);
  }
  min=num[0];
  for(i=0;i<3;i++){
  	if(num[i]<min){
  		min=num[i];
	  }
  }
  printf("Min : %d",min);
    return 0;
}
