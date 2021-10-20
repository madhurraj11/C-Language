#include<stdio.h>
main()
{
	int i,j;
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			if(i<=4)
			{
			   if(j<=4-i||j>=5+i)
			   printf(" * ");
			   else
			   printf("   ");
		    }
		    else
		    {
		    	if(j<=i-5||j>=14-i)
		    	printf(" * ");
		    	else
		    	printf("   ");
			}
		}
		printf("\n");
	}
}
