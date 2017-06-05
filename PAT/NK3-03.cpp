#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;

int main()
{

	int M = 0,N = 0,num = 0;
    scanf("%d %d",&M,&N);
    int array[10000] = {0};
    array[0] = 2;
    array[1] = 3;
    num = 2;
	for (int i = 2; i <= INT_MAX; ++i)
	{
		int sqr = sqrt(i);
		for (int j = 2; j <= sqr; ++j)
		 {
		 	if (i%j == 0)
		 	{
		 		break;
		 	}else if(j == sqr) {
		 		num++;
		 		array[num-1] = i;
		 	}
		 }
		 if (num >= N)
		  {
		  	break;
		  } 
	}
	int length = 0;
	for (int i = M; i <= N; ++i)
	{
		printf("%d",array[i-1]);
		length++;
		if (length == 10)
		{
			length = 0;
			printf("\n");
		}else if (i!=N)
		{
			printf(" ");
		}
	}

	return 0;
}