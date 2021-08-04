#include <stdio.h>
#include <stdlib.h>

int main()
{
char a='19800';	//声明字符型变量或函数
double b=78.6;	//声明双精度变量或函数
float c=35.4;	//声明浮点型变量或函数
int d=58;	    //声明整型变量或函数
long e=123666664949466;	//声明长整型变量或函数
short f=19;	//声明短整型变量或函数
printf("%d %d %d %d %d %d",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e),sizeof(f));
return 0;
}
