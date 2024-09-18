#include <stdio.h>

    int main()
{
     char name[] = "Marcelo"; 
     int i = 0;


     for(i; i <= 6; i++)
     {
         printf("%c -> %d -> %p\n", name[i], name[i], &name[i]);
     }
     return 0;
}