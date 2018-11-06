#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i, sum = 0;
	
	scanf("%d", &n);
	while(n != -1)
	{
		for(i=1; i<n; i++)
		{
			if(n%i==0)
				sum+=i;
		}
		if(n==sum)
		{
			printf("%d = 1 ", n);
			for(i=2; i<n; i++)
			{	
				if(n%i==0)
					printf("+ %d ", i);
			}
			printf("\n");
		}
		else
		{
			printf("%d is NOT perfect.\n", n);
		}
		sum = 0;
		scanf("%d", &n);
	}
	return 0;
}
