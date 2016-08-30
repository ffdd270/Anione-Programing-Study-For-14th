#include <stdio.h>

void CalledByRef(int * ptr, int i, char * str)
{
    *ptr = i;
    char * ch = "Hello, World!";
    str = ch;
    return;
}

int main()
{
    int * ptr;
    char * cptr;
    int Hello;
    ptr = &Hello;

    CalledByRef(ptr, 40, cptr);

    printf("%d, %s",Hello, cptr);

    return 1;
}