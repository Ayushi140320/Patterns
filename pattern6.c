#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d",&n);	
	for (i = 0; i < n;i++)
	{
		for (int j = 0; j < n-i-1; ++j)
			printf(" ");
		for(j=0;j<=i;j++)
			printf("%d",j+1);
	printf("\n");
	}	
	return 0;
}

