#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* mycat(char *dst,const char*src);
int main(int argc,char const*argv[] )
{
    char a[]="Hello";
    char* b="World!";
    mycat(a,b);
    puts(a);
    return 0;
}
char* mycat(char *dst,const char*src)
{
    int number=strlen(dst);
    int i;
    int len=strlen(src);
    for(i=0;i<=len;i++)
    {
        *(dst+number+i)=*(src+i);
    }
    return dst;
}
