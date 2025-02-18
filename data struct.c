
#include <stdio.h>

struct node {
    int data1;
    char data2;
    struct node* link;
};
union node1 {
    int data1;
    char data2;
    union node1*link;
};
int main()
{
    struct node ob1;
     union node1 ob3;

    printf("\n%d",sizeof(struct node));
    printf("\n%d",sizeof(union node1));
    return 0;
}
