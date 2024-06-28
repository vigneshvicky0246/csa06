#include <stdio.h>  
#include <string.h>  
int main()  
{  
    int n[40];
    printf (" \n Enter a string to be reversed: ");  
    scanf ("%s", n);  
      
    printf (" \n After the reverse of a string: %s ", strrev(n));  
    return 0;  
}  
