#include <stdio.h>
  
int main()
{
    unsigned int value = 0x12345678;
    char *r = (char *) &value;
 
    if (*r == 12) 
        printf("Your system is Little Endian\n");
    else
        printf("Your system is Big Endian\n");
    return 0;
}
