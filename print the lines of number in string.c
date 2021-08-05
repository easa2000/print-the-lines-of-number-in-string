// program to enter text that contain multiple lines, printing the line of numbers

#include<stdio.h>
#include<conio.h>
void main()
{
    char str[1000];
    int i=0, linecount = 1;
    printf("\n Enter a * to end");
    printf("\n******************");
    printf("\n Enter a text: ");
    scanf("%c",&str[i]);
    while(str[i] != '*')
    {
        i++;
        scanf("%c",&str[i]);
    }
    str[i] = '\0';
    i=0;
    while(str[i] != '\0')
    {
        if(linecount == 1 && i == 0)
           printf("\n %d\t",linecount);
        if(str[i] == '\n')
        {
            linecount++;
            printf("\n %d\t",linecount);
        }
        printf("%c",str[i]);
        i++;
    }
    
}
