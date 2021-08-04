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
    char cha = 'a';	    //声明字符型变量或函数
    char chb = 0;	    //声明字符型变量或函数
    double b = 78.6;	//声明双精度变量或函数
    float  c = 35.4;	//声明浮点型变量或函数
    int    d = 58;	    //声明整型变量或函数
    long   e = 123;	    //声明长整型变量或函数   
    short  f = 19;	    //声明短整型变量或函数
    printf("%d %d %d %d %d %d %d\n", sizeof(cha), sizeof(chb), sizeof(b), sizeof(c), sizeof(d), sizeof(e), sizeof(f));
    printf("%d %d %d %d %d %d\n", sizeof(char), sizeof(double), sizeof(float), sizeof(int), sizeof(long), sizeof(short));
    return 0;
}
