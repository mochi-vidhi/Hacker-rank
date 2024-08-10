#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 100

int main() 
{
    char ch;
    char s[MAX_LEN];
    char sn[MAX_LEN];
    scanf("%c", &ch);
    scanf("%s\n",s);
    scanf("%[^\n]%*c", &sn);
    //scanf("%[^\n]%*c", &sn);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s",sn);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}