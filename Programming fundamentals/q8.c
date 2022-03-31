#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float x,y,z;
	printf("ENTER THE VALUES FOR ROUDING  OFF TO THE NEAREST INTEGER\n");
	scanf("%f%f%f",&x,&y,&z);
	printf("ORIGINAL NUMBER \t ROUNDING VALUE\n");
	a=floor(x+0.5);
	printf("%f \t\t\t %d \n",x,a);
	b=floor(y+0.5);
	printf("%f \t\t\t %d \n",y,b);
	c=floor(z+0.5);
	printf("%f \t\t\t %d \n",z,c);
	return 0;
}
