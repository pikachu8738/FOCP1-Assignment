#include <stdio.h>
int main() {
    int a =15;
    int b = 20;
    int c;
    int* aPtr = &a;
    int* bptr=&b;
    int *cptr=&c;
    *cptr= *aPtr;
    *aPtr=*bptr;
    *bptr=*cptr;
    c=a;
    a=b;
    b=c;
    *aPtr=*aPtr ^*bptr;
    *bptr=*aPtr ^ *bptr;
    *aPtr=*aPtr ^ *bptr;
    *aPtr = *aPtr + *bptr;
    *bptr = *aPtr - *bptr;
    *aPtr = *aPtr - *bptr;
}