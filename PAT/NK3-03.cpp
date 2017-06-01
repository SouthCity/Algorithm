#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

	int M = 0,N = 0,num = 0;

	for (int i = 2; i < 10000; ++i)
	{
		for (int j = 2; j < i; ++j)
		 {
		 	if (i%j == 0)
		 	{
		 		break;
		 	}
		 	if (j == i-1)
		 	{
		 		num++;
		 		if (num>=M)
		 		{
		 			/* code */
		 		}
		 	}
		 } 
	}



	
	return 0;
}