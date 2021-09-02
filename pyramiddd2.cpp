#include<stdio.h>
int main()
{
  int n;

  printf("Enter number of rows: ");
  scanf("%d",&n);

  for(int i=1; i<=n; i++)
  {
    for(int j=1; j< 2*n; j++)
    {
        if(j<= n-i)
        printf(" "); // spaces
        
        else if(j < n+i)
        printf("*"); //stars

    }
    printf("\n"); //next line
  }
  return 0;
}
