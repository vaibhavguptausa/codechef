#include<stdio.h>
int main()
{

    int* parent =NULL;
    int** bparent=NULL;
    int i=5;
    parent=&i;
     bparent= &parent;
    printf("%d\n", *(parent));
    printf("%d", **(bparent));
}
/*  5 ka address -0x1c
    0x1c ka address 0x2c
    0x1c= parent
    0x2c=bparent*/
