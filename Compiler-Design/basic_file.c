#include<stdio.h>
#include<stdlib.h>
// #include<conio.h>
// #### Read the Content and print on console
int main()
{
    FILE *fptr;
    char ch;
    fptr = fopen("c_file.c","r");
    if(fptr==NULL)
    {
        printf("Unable to Read File");
        printf("Please Check Weather the file exist or not.\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        ch = fgetc(fptr); 
        while (ch != EOF) 
        { 
            printf ("%c", ch); 
            ch = fgetc(fptr); 
        } 
  
    fclose(fptr); 
    }
    return 0;
    
}