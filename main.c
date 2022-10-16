//
//main.c
#include <stdio.h>
#include "foo.h"
int main(void)
{
int y;
//first call scanf to get an int from the user loaded into the address of y
scanf( "%d", &y );
//set the new value of y to the return value of foo
y = foo(y);
printf("%d\n", y);
return 0;
}
//--
