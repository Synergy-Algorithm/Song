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

//지원: 의송이는 반복문을 사용해서 했구나. 나는 배열을 써서 했거든. 그래도 의송이가 깔끔해보인다 코드
