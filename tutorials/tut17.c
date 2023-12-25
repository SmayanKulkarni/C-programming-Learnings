#include <stdio.h>

int main()
{
    label:
    printf("This is inside the label");
    goto end;
    printf("Hello world\n");
    goto label;

    end: 
    printf("we are at the end");
    return 0;
}