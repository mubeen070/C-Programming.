#include<stdio.h>
#include<math.h>
int main()
{
	float w,x,y,z;
	int a,b,c,d;
	printf("Enter three numbers\n");
	scanf("%f%f%f%f",&w,&x,&y,&z);
	d=floor(w+0.5);
	a= floor(x*10+0.5)/10;
	b= floor(y*100+0.5)/100;
	c= floor(z*1000+0.5)/1000;
	printf("orignal value is %f and round off is %d\n",w,d);
	printf("orignal value is %f and round to tenth is %d\n",x,a);
	printf("orignal value is %f and round t0 hundreths is %d\n",y,b);
	printf("orignal value is %f and round to thousandths is %d\n",z,c);
	return 0;
	
	
}
