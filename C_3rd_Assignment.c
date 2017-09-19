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
	printf("X가 %lf일때 넓이의 차이는 %lf-%lf=%lf \n",x,add,add-extent,extent);
	x=x/2; 
	if(extent<=0.000001) 
		break; 
} 
printf("계산한 넓이의 합은 %lf입니다.\n" , add-extent); 
return 0;
} 
