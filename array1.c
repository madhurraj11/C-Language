#iinclude<stdio.h>
main()
{
	int a[5],i;
	for(i=0;i<=7++)
	{
		printf("Enter values at position[%d]:\n",i+1);
		scanf("%d",&a[i]);
	}
	printf("Entered values:\n");
	for(i=0;i<=7;i++)
	{
		printf("%d\n",a[i]);
	}
}
