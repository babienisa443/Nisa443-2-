#include <stdio.h>
#include<stdlib.h>
 main() {
    int i;
	float num[10];
    float sum,avg;
	for (i = 0; i <= 9; i++) { 
	printf("Enter number :");
	scanf("%f",&num[i]);
		sum += num[i];
    }

    avg = sum/10;
    printf("Average = %.4lf", avg);
    return 0;
}
