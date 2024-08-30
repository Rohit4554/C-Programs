#include<stdio.h>
int main()
{
    char str[100],charcount;
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i] !='\0';i++)
    {
        charcount++;
        
    }
    printf("The total number of characters is: %d\n",charcount);
    return 0;
}