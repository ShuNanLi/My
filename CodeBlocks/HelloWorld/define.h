#ifndef _DEFINE_H_
#define _DEFINE_H_
#endif // _DEFINE_H_

typedef struct stu{

    int id;
    char name[];

}Stu;
/*ȫ�ֱ�������*/
Stu stu_01 ;
//static Stu getStu();
static void setStu(Stu* tmp);
