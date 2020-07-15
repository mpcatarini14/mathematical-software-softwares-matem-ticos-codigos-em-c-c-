#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,m;
	printf("Digite n para descobrir o gaussiano:");
	scanf("%d",&n);
	printf("\nDigite o módulo:");
	scanf("%d",&m);
	i=n;
	while(n%m != 1){
		n=n*i;
		printf("\n%d dividido por %d tem resto = %d\n",n,m,n%m);
	}

	system("pause");
	return 0;
}
