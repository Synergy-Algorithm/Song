#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n, k, coin[101], act[10001];
int main(int argc, char *argv[]) {
	int i, j;
	scanf("%d %d", &n, &k);
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &coin[i]);
	}
	
	act[0] = 1;
	for(i=0; i<n; i++){
		for(j=0; j<=k; j++)
			if(j>=coin[i])
				act[j] += act[j-coin[i]];
	}
	
	printf("%d", act[k]);
	return 0;
}
