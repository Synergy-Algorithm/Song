#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, n, max;
	int box[1001], check[1001];
	
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &box[i]);
		check[i] = 1;
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<i; j++)
		{
			if(box[j]<box[i] && check[i] == check[j])
				check[i] = check[j] + 1;
		}
	}
	
	max=check[0];
	for(i=0; i<n; i++)
	{
		if(check[i]>max)
			max = check[i];
	}
	
	printf("%d",max);
	
	
	return 0;
}
