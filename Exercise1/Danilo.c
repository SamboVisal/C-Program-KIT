#include<stdio.h>
main()
{
	int num,onum,reminder,result=0;
	printf("Enter the number");
	scanf("%d",&num);
	onum=num;
	while (num != 0)
	{
		reminder=onum%10;
		result= result+(reminder*reminder*reminder);
		num=num/10;
	}
	if(result=onum)
	printf("%d the value is the amstrong number.",onum);
	else
	printf("%d the value is not amstrong number.",onum);
	return 0;
}
