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

	int A1,A2,A3,A4,A5;

	for (int i = 0; i < (sizeof(array) / sizeof(array[0])); ++i)
	{
		int temp = array[i];
		if (temp%10 == 0)
		{
			A1 += temp;
		}
		printf("%d\n",array[i] );
	}

	return 0;
}