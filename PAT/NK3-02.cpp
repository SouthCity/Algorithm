#include <iostream>

using namespace std;

int main() {
	int N;
	scanf("%d",&N);
	int array[N];
	int i = 0;
	while(i < N) {
		int num;
		scanf("%d",&num);
		array[i] = num;
		i++;
	}
	int numArray[5] = {0};
	int tempA2 = 0,tempA4 = 0;
	for (int i = 0; i < (sizeof(array) / sizeof(array[0])); ++i)
	{
		int temp = array[i];
		if (temp%10 == 0)
		{
			numArray[0] += temp;
		}
		if (temp%5 == 1)
		{
			if (tempA2 == 0)
			{
				tempA2 = 1;
				numArray[1] += temp;
			}else{
				tempA2 = 0;
				numArray[1] -= temp;
			}
		}
		if (temp%5 == 2)
		{
			numArray[2]++;
		}
		if (temp%5 == 3)
		{
			tempA4 += temp;
			numArray[3]++;
		}
		if (temp%5 == 4) {
			if (temp > numArray[4])
			{
				numArray[4] = temp;
			}
		}
	}


	for (int i = 0; i < 5; ++i)
	{
		 if (numArray[i] == 0)
		 {
		 	printf("N");
		 }else{
		 	if (i == 3)
		 	{
		 	 	printf("%.1f",(double)tempA4/numArray[i]);
		 	}else{
		 		printf("%d",numArray[i]);
		 	}
		 }
		 if (i != 4)
		 {
		 	printf(" ");
		 }
	}



	return 0;
}