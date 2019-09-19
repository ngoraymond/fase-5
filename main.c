#include <stdio.h>
int main()
{
    long rax = 0;
    long rdx = 0;
    long rbx = 0x626364656667;
    long arr[16] = {2, 10, 6, 10, 1, 0, 9, 3, 4, 7, 14, 5, 11, 8, 15, 13};
    long ending[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    while(rax<=5)
    {
        long rcx = 0;
        rdx<<=4;
        rcx = 0xff&(rbx>>(8*(5-rax))); 
        printf("%c\n",(char)rcx);
        rcx &= 0xf;
        rdx += arr[rcx];
        rax++;
    }
    printf("%lx",rdx);
    return rdx;
}
