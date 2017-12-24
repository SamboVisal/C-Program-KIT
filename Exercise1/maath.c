
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
	printf("The score of english is %d\n",english);
	printf("The score of khmer is %d\n",khmer);
	printf("The score of japan is %d\n",japan);
	printf("The score of math is %d\n",math);
	printf("The score of critical_thinking is %d\n",critical_thinking);
	total=english+khmer+japan+math+critical_thinking;
	printf("The total score is %d\n",total);
	
	
}
