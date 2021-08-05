#include<stdio.h>

//题目3
//1、打印一个占用5个字节的字符串
//2、打印一个占用10个字节的数组

int main(){
	
	
	
	char buf[20] = {0}; 
	
	int tmp[]={5,6,5,2,8,3,7,6,9,0};
	int i;
	int m;

	for(i=0;i<10;i++){
		
		buf[i] = tmp[i];

	}
	for(m=0;m<10;m++){
		
		printf("%d ",buf[m]);
	}
    printf("\n");
    printf("abcde");
	
	return 0;
} 