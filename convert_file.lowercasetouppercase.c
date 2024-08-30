/*Write a C program to copy the contents of one text file to another such
that uppercase alphabets are converted to lowercase, lowercase to
uppercase and digits are converted to *. */


#include<stdio.h>
#include<ctype.h>

int main()
{
     FILE *sourceFILE, *destFILE;
     char ch;

     // open the suource file in read mode//
     sourceFILE = fopen("source.txt","r");
     if(sourceFILE == NULL)
     {
        printf("Unable to open source file.\n");
        return 1;
     }
     // open the distination file in text mode//
     destFILE = fopen("destination.txt","w");
     if(destFILE == NULL)
     {
        printf("Unable to create a destination file,\n");
        return 1;
     }
     // copy contents character by character
     while((ch = fgetc(sourceFILE)) !=EOF)
     {
        if(isupper(ch))
          ch = tolower(ch);
          else if(islower(ch))
          ch = toupper(ch);
          else if(isdigit(ch))
          ch = '*';
          fputc(ch,destFILE);

     }
     printf("File copied and modified successfully.\n");
     // close the file
     fclose(sourceFILE);
     fclose(destFILE);

     return 0;

}
