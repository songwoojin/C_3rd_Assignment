#include <stdio.h> 
int main() 
{ 
float x=1.0;
float extent;
float add=0.0; 
while(1)
{ 
	extent=x*x; 
	add=add+extent; 
	printf("X�� %lf�϶� ������ ���̴� %lf-%lf=%lf \n",x,add,add-extent,extent);
	x=x/2; 
	if(extent<=0.000001) 
		break; 
} 
printf("����� ������ ���� %lf�Դϴ�.\n" , add-extent); 
return 0;
} 
