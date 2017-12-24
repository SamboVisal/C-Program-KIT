
#include<stdio.h>
#include<math.h>
int english,khmer,japan,math,critical_thinking,total; 
main()
{
	printf("input english score : "); scanf("%d",&english);
	printf("input khmer score   : "); scanf("%d",&khmer);
	printf("input japan score   : "); scanf("%d",&japan);
	printf("input math score    : "); scanf("%d",&math);
	printf("input cirical thinking score : "); scanf("%d",&critical_thinking);
	total=english+khmer+japan+math+critical_thinking;
	printf("The total score is %d",total);
	
	
}
