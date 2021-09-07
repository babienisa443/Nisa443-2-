#include<stdio.h>
int main(){
	int n,i,j,k;
	 
  printf("Enter number of rows: ");
  scanf("%d",&n);
  for (i = n; i >= 2; i--)
	{
		// print space
		for (j = n; j > i; j--)
			printf(" ");

		// print '*'
		for (k = 1; k < (i * 2); k++)
			printf("*");
		
		// move to the next line
		printf("\n");
	}

  for(int i=1; i<=n; i++)
  {
    for(int j=1; j <= n-i; j++)
    printf(" "); // space 

    for(int k=1; k <= (2*i-1); k++)
    printf("*"); // star

    printf("\n"); // new line
  }

  return 0;
}
