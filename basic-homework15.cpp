#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b;

	printf("�п�J�{�b�ɶ�(�p��):");
	scanf("%d",&a);
	printf("�п�J�{�b�ɶ�(����):");
	scanf("%d",&b);

	if(450<(a*60+b)&&(a*60+b)<1020)
	 printf("�{�b�O�W�Үɶ�\n");
	 
	else
	 printf("�{�b�O��Ǯɶ�\n");  
system("pause");
return 0;
}
