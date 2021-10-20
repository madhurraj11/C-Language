#include<stdio.h>
main()
{
	int i,j;
	char k=65;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j<=i)
			{
			printf("%c\t",k);
			k++;
	    	}
			else
			printf("\t");
		}
		printf("\n");
	}
}
