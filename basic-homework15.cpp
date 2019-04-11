#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b;

	printf("請輸入現在時間(小時):");
	scanf("%d",&a);
	printf("請輸入現在時間(分鐘):");
	scanf("%d",&b);

	if(450<(a*60+b)&&(a*60+b)<1020)
	 printf("現在是上課時間\n");
	 
	else
	 printf("現在是放學時間\n");  
system("pause");
return 0;
}
