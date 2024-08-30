/*Write a program to perform the following operations on strings using user
defined functions:
a. Length of string
b. Copy one string to another
c. Convert string to uppercase*/


#include<stdio.h>
#include<ctype.h>

// Function to calculate string length//
int string_length(const char* string)
{
    int length =0;
    while(string[length] != '\0')
    {
        length++;

    }
    return length;
}
//Function to copy one string to another//
void copy_string(const char* source, char* destination)
{
    int i=0;
    while (source[i] !='\0' )
    {
        destination[i] =source[i];
        i++;
    }
    destination[i]='\0';
}
//Function to convert string to uppercase
void convert_to_uppercase(char* string)
{
    int i=0;
    while(string[i] != '\0')
    {
        string[i] = toupper(string[i]);
        i++;
    }
}

int main()
{
    char user_input[100];

    printf("Enter the string:");
    fgets(user_input,sizeof(user_input),stdin);

    //remove newline character from fgets input

    int i=0;
    while (user_input[i] !='\n')
    {
        i++;
    }
    user_input[i] ='\0';

    printf("Length of string: %d\n",string_length(user_input));

    char copied_string[100];
    copy_string(user_input,copied_string);
    printf("Copied string: %s\n",copied_string);

    convert_to_uppercase(user_input);
    printf("Uppercase string: %s\n",user_input);

    return 0;

}
