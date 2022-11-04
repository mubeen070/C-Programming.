#include<stdio.h>
int main()
{
	int ctr1,ctr2,ctr3,x,y;
	printf("Enter the hours of customers takes car for rent\n");
	scanf("%d%d%d",&ctr1,&ctr2,&ctr3);
	printf("CARS\t HOURS\t CHARGES\n");
	if(ctr1==8)
{

	printf("1\t %d \t 25$\n",ctr1);
}
	else
	if(ctr1==24)
	{
	printf("1\t 24\t 50$\n");
    }
	else
	if(ctr1>8)
	{
	x=ctr1-8;
	y=x*5;
	y=y+25;
	
	
	printf("1\t %d \t %d$\n",ctr1,y);
     }
	if(ctr2==8)
      {

	printf("2\t %d \t 25$\n",ctr2);
       }
	else
		if(ctr2==24)
		{
		
	printf("2\t 24\t 50$\n");
        }	
    else
	if(ctr2>8)
	{
	x=ctr2-8;
	y=x*5;
	y=y+25;
	
	
	printf("2\t %d \t %d$\n",ctr2,y);	
    }
      if(ctr3==8)
       {

	printf("3\t %d \t 25$\n",ctr3);
        }
	    else
		if(ctr3==24)
	{
	
	  printf("3\t 24\t 50$\n");
    }
	else

	if(ctr3>8)
	{
	x=ctr1-8;
	y=x*5;
	y=y+25;
	printf("3\t %d \t %d$\n",ctr3,y);	
	}
	printf("TOTAL\t %d\t ",ctr1+ctr2+ctr3);
	return 0;

}
