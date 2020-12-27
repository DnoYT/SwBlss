#include<stdio.h>
int main(void){
	int n,i,j,k;
	scanf("%d",&n);
	k=n; 
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		
		if(i==1){
			for(j=1;j<=n;j++)
				printf("*");
			printf("\n"); 
			continue; 
		}
		
		printf("*");
		
		for(j=1;j<=k;j++){
			printf(" "); 
		}
		k=k+2;
		printf("*");
		
		printf("\n");
	}
	
	
	k=k-2;
	for(i=1;i<=n-1;i++){
		
		for(j=1;j<=i;j++){
			printf(" ");
		}
		
		if(i==n-1){
			for(j=1;j<=n;j++)
				printf("*");
			printf("\n"); 
			continue; 
		}
		
		printf("*");
		k=k-2;
		for(j=1;j<=k;j++){
			printf(" "); 
		}
		
		printf("*");
		
		if(i !=n-1){
			printf("\n");
		}
	}a
	
} 
