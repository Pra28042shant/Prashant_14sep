#include<stdio.h>
main()
{
	int i;
	
	for (i=1;i<=10;i++)
	{
		if (i==6)
		{
			continue;
		}
		printf("%d\n",i);
	}
	
}
