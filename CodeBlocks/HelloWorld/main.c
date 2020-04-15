#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "define.h"



int main()
{


      stu_01.id = 01;
      strcpy(stu_01.name,"cai");


//    printf("Hello world!\n");
//    int a[5]= {1,2,3,4,5};
//    int *ptr=(int *)(&a+1);
//    printf("%d,%d",*(a+1),*(ptr-1));
//    printf("\n%d",*(a-1));

    getchar();
    return 0;

}

//Stu getStu(void)
//{
//    return stu_01;
//}

void setStu(Stu* tmp)
{
    stu_01.id = tmp->id;
    strcpy(stu_01.name,tmp->name);

    return;
}


