#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int main()
{
        int i;
        init();
        for(i=0;i<10;i++){
                push(i);
//              printf("%d ",stack[top].key);
        }
        pop();
        pop();
        display();
//        printf("size %ld",sizeof(stack));





}

