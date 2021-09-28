#include <stdio.h>
#include <stdlib.h> // For exit()

int main()
{
	int x,y;
    FILE *fptr1, *fptr2;
    char filename[100], c;
	
   

    // Open one file for reading
    fptr1 = fopen("a.txt", "r");
    
    fptr2 = fopen("b.txt", "w");
    fscanf(fptr1,"%d%d",&x,&y);
    fprintf(fptr2,"sum : %d \n",x+y);
    
    

    fclose(fptr1);
    fclose(fptr2);
    return 0;
}

