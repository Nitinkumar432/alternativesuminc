#include<stdio.h>
int alternate(int nr[],int k){
	int result=0,ute=1;
	for(int i=k-1;i>=0;i--){
		result=result+ute*nr[i];
		ute=ute*-1;
	}
	printf("%d",result)	;
}
int main(){
	int n;
	scanf("%d",&n);
	int nr[n],k=0;
	while(n>=1){
		int rem=n%10;
		nr[k]=rem;
		k++;
		n=n/10;
	}
	alternate(nr,k);
	return 0;
}
