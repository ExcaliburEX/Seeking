#include <stdio.h>
void prtBin(unsigned int nnumber);
struct test {
   unsigned int a:1;
   unsigned int b:2;
   unsigned int c:3;
   unsigned int d:32 ;
};
int main(){
    struct test z;
    z.a=1;
    z.b=2;
    z.c=3;
    z.d=0;
    printf("sizeof(a)=%lu\n",sizeof(z));
    prtBin(*(int*)&z);
    return 0;  
}
void prtBin(unsigned int number){
    unsigned mask = 1u<<31;
    for(;mask;mask>>=1){
        printf("%d",number & mask?1:0);
    }
    printf("\n");
}
