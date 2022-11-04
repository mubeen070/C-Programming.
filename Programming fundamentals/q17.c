#include<stdio.h>
#include<math.h>
int main(void){
	int a,b,c;
	printf("Enter three sides of triangles\n");
	scanf("%d%d%d",&a,&b,&c);
	if(c==a+b||b==c+a||a==b+c)	
	{
		printf("These sides are the correct sides of right angel triangle");
	}
	else
	{
		printf("These sides are not correct sides of right angel triangle");
	}
	return 0;
	
}
