#include <stdio.h>



void removeDuplicates(char * str);
void removeAll(char * str, const char toRemove, int index);


int main()
{
    char str[100];

    printf("Enter any string: ");
    scanf("%s",str);
	 removeDuplicates(str); 

    printf("String after removing duplicates: %s\n", str);

    return 0;
}


void removeDuplicates(char * str)
{
    int i = 0;

    while(str[i] != '\0')
    {

        removeAll(str, str[i], i + 1);
        i++;
    }
}


void removeAll(char * str, const char toRemove, int index)
{
    int i;

    while(str[index] != '\0')
    {
        /* If duplicate character is found */
        if(str[index] == toRemove)
        {
            i = index;
            while(str[i] != '\0')
            {
                str[i] = str[i + 1];
                i++;
            }
        }
        else
        {
            index++;
        }
    }
}
