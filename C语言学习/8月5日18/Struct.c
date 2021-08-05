#include "stdio.h"
#include "string.h"


#define DEF_STRING          "ABCDE"
#define DEF_ARRAY_SIZE      (10)
#define DEF_STUDENT_NUM     (5)

typedef unsigned char   U8;
typedef unsigned short  U16;
typedef unsigned int    U32;

typedef struct 
{
    U8 aName[10];  
    U8 nClass;
    U8 nScore;
}S_STUDENT_IFO;


static S_STUDENT_IFO sStdIfo[DEF_STUDENT_NUM] = 
{
    {"AA", 1, 10},
    {"BB", 1, 10},
    {"CC", 1, 10},
    {"DD", 1, 10},
    {"EE", 1, 10},
};

int main(void)
{
    U8 aString[DEF_ARRAY_SIZE] = {0};

    for(U8 i=0; i<DEF_ARRAY_SIZE; i++)
    {
        aString[i] = i;
    }

    printf("Len = %d, %d : %s\n", strlen(DEF_STRING), sizeof(DEF_STRING), DEF_STRING);

    printf("Len = %d:\r\n", sizeof(aString));
    for(U8 i=0; i<DEF_ARRAY_SIZE; i++)
    {
        printf("aString[%d] = %d\r\n", i, aString[i]);
    }

    printf("%d\r\n", sizeof(S_STUDENT_IFO));
    printf("%d\r\n", sizeof(sStdIfo));
    for (U8 i = 0; i < DEF_STUDENT_NUM; i++)
    {
        printf("Name: %s Class: %d  Score: %d\r\n", sStdIfo[i].aName, sStdIfo[i].nClass, sStdIfo[i].nScore);
    }
}