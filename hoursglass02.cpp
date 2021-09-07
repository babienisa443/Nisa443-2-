#include<stdio.h>
int main()
{
    int n, i, j, h;

    printf("Enter number of rows: ");
    scanf("%d", &n);
    
  for(i=n-1; i>=1; i--) {
     for(j=(2*n)-1; j>=1; j--) {
      if (j>n+i)printf(" ");
      else if(j>=n-i)printf("*");
  }
  printf("\n");
  }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < 2 * n; j++)
        {
            if (j <= n - i)
                printf(" "); // spaces

            else if (j < n + i)
                printf("*"); //stars

        }
        printf("\n"); //next line
    }
    
    return 0;
}
