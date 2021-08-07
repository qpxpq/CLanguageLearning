#include <stdio.h>//题目五:输入年月日后，判断这一天是该年的第几天


void main() {
int n,y,i,r,s=0;
int flag;
scanf("%d %d %d",&n,&y,&r);//输入日期以空格分离
if((n%4==0 &&n%100!=0)||(n%400==0)) {
    flag=0;
} else {
    flag=1;
}
for(i=1; i<y; i++) {
    if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12) {
        s+=31;
    }
    if(i==4 || i==6 || i==9 || i==11) {
        s+=30;
    }
    if(flag==0&&i==2) {
        s+=29;
    }
    if(flag==1&&i==2) {
        s+=28;
    }
}
s+=r;

printf("%d",s);
}

