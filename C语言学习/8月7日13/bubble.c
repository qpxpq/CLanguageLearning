#include <stdio.h>//???:??7????????????????

int main()
{
	int a[7];
	printf("Please enter seven numbers£º\n");
	for(int i=0;i<=6;i++)
	{
		scanf("%d",&a[i]);
	}
	
	 for(int j=0;j<=5;j++)
	 	for(int i=0;i<=5-j;i++)
	 	{
	 		if(a[i]>a[i+1])
	 		{
	 			int t;
	 			t=a[i];
	 			a[i]=a[i+1];
	 			a[i+1]=t;
			 }
		 }
	printf("In order from smallest to largest is:\n");
	for(int i=0;i<=6;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
