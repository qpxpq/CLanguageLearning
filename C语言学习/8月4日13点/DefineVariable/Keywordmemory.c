#include <stdio.h>
#include <stdlib.h>

// int main()
// {
// char a='19800';	//声明字符型变量或函数  这种赋值是错的，一个char型变量，只能赋值一个字节, char型只能赋一个单字节字母，用单引号括起来，或者赋值一个数字，范围是（-2^7~2^7-1）
// double b=78.6;	//声明双精度变量或函数
// float c=35.4;	//声明浮点型变量或函数
// int d=58;	    //声明整型变量或函数
// long e=123666664949466;	//声明长整型变量或函数      赋值超范围了，long型范围在 -2^31 ~ (2^31 -1)
// short f=19;	//声明短整型变量或函数
// printf("%d %d %d %d %d %d",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e),sizeof(f));
// return 0;
// }

int main()
{
    char cha = 'a';	    //声明字符型变量或函数  赋值范围-128~127
    char chb = 0;	    //声明字符型变量或函数  赋值范围-128~127
    double b = 78.6;	//声明双精度变量或函数  赋值范围双精度类型，精度是17位有效数字，取值范围是10的-308次方到10的308次方
    float  c = 35.4;	//声明浮点型变量或函数  赋值范围单精度类型,精度是8位有效数字，取值范围是10的-38次方到10的38次方
    int    d = 58;	    //声明整型变量或函数    赋值范围 -2147483648～+2147483647
    long   e = 123;	    //声明长整型变量或函数  赋值范围 -2147483648～+2141483647
    short  f = 19;	    //声明短整型变量或函数  赋值范围-32768~32767
    printf("%d %d %d %d %d %d %d\n", sizeof(cha), sizeof(chb), sizeof(b), sizeof(c), sizeof(d), sizeof(e), sizeof(f));
    printf("%d %d %d %d %d %d\n", sizeof(char), sizeof(double), sizeof(float), sizeof(int), sizeof(long), sizeof(short));
    //unsigned char的取值范围：（1字节）0~2^8-1(0~255)
    //unsigned double的取值范围：（8字节）0~2^64 - 1
    //unsigned float的取值范围：（4字节）0~2^32 - 1
    //unsigned int的取值范围：（4字节）0~2^32 - 1
    //unsigned long的取值范围：（4字节）0~2^32 - 1
    //unsigned short的取值范围：（4字节）0~2^16 - 1 
    //printf("%u %u %u %u %u %u %u\n",cha,chb,b,c,d,e,f);//转无符号类型，错误
    printf("%d %d %d %d %d %d %d\n", sizeof(cha), sizeof(chb), sizeof(b), sizeof(c), sizeof(d), sizeof(e), sizeof(f));
    printf("%c %d %.2lf %.2f %d %ld %d\n",cha,chb,b,c,d,e,f);
    //转无符号类型打印char字母用%c，数字用%d；double使用%lf,.2保留两位小数；float使用%f，.2保留两位小数；int使用%d；long使用%ld；short使用%d；
    
    return 0;
}
