#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d",&n);	
	for (i = 0; i < n;i++)
	{
		for(j=0;j<n-i;j++)
			printf("%d",j+1);
		for (int j = 0; j < i; ++j)
			printf(" ");
	printf("\n");
	}	
	return 0;
}

