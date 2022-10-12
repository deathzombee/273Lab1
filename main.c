//
//main.c
#include <stdio.h>
#include "foo.h"
int main(void)
{
int y;
scanf( "%d", &y );
y = foo(y);
printf("%d\n", y);
return 0;
}
//--
