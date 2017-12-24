#include<stdio.h>
struct student{
	
	char name[20];
	int roll;
	int mark;
	int sub[3];
	
};
main(){
	int i,n,j,sum,max;
	int a[100],k,total;
	struct student s[100];
	
	printf("Input The Amount Of Student\n"); scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		printf("Input Student %d name : ",i+1);
		scanf("%s",&s[i].name);
		printf("Input Student %d roll : ",i+1);
		scanf("%d",&s[i].roll);	
		printf("\n");	
	}
	for(i=0;i<n;i++){
		sum=0;
		for(j=0;j<=2;j++){
		printf("Input Mark Subject %d Of student %d \n",j+1,i+1);
		scanf("%d",&s[i].sub[j]);
		sum=sum+s[i].sub[j];
		}		
		printf("The Marks of Student %s is %d\n",s[i].name,sum);
		printf("\n");
	}
	printf("The Total For each of %d Students\n",n);
	for(i=0;i<n;i++){
		sum=0;
		for(j=0; j<=2; j++){
		sum=sum+s[i].sub[j];
		}	
		printf("The Marks of Student %s is %d\n",s[i].name,sum);
		a[i]=sum;
	}
	printf("\nThe highest mark per subject \n");
	for(j=0; j<=2; j++){
		max=0;
		for(i=0; i<n; i++){
		if(max<s[i].sub[j]){
			max=s[i].sub[j];
			k=i;
		     }	
			
		}
		printf("Student %s has the highest marks %d of subject %d\n",s[k].name,max,j+1);
			
	}			
	for(i=0; i<n; i++){
		total=0;
		for(j=0;j<=2;j++){
			if(total<a[i]){
			total=a[i];
			k=i;	
			}
			
		}
		
	}		
	printf("\nThe Student %s has the highest mark %d\n",s[k].name,total);
	if()


}	
