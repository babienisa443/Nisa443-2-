#include<stdio.h>
int main()
{

    int arr[100], size, i, sum = 0, sib, nuay;


    printf("Enter array size\n");
    scanf("%d",&size);


    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);


    for(i = 0; i < size; i++)
          sum = sum + arr[i]; 

          printf("the sum of the array number is %d\n", sum);

          sib = sum/10;
          nuay = sum%10;
          sum = sib + nuay ;
          printf("sum = %d", sum);

          return 0;


    //print the result
    printf("Sum of the array = %d\n",sum);

    return 0;
}

