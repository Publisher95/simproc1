#include <stdio.h>


typedef struct test{
	struct test *next;
} test;







int main(){

test foo;







int x = 8;

int *y = &x;

int *z;

z = y;


printf("%d",(foo).next);

printf("%d",*z);




return 0;
}
