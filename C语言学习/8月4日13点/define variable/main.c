#include <stdio.h>
#include <stdlib.h>

int main()
{
char a='19800';	//�����ַ��ͱ�������
double b=78.6;	//����˫���ȱ�������
float c=35.4;	//���������ͱ�������
int d=58;	    //�������ͱ�������
long e=123666664949466;	//���������ͱ�������
short f=19;	//���������ͱ�������
printf("%d %d %d %d %d %d",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e),sizeof(f));
return 0;
}
