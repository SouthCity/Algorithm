#include <iostream>
#include <cmath>
using namespace std;

int isEnd(char R[6],int a);

int main(int argc, char const *argv[])
{
	 char R[6];
	 int n ;
	 while(scanf("%s %d",R,&n) != EOF) {
	 	 int temp[150];
	 	 int pointlen = 0;
	 	for (int i =0 ; i<6 ; i++)	{
	 		if (R[i] == '.')
	 		{
	 			pointlen++;
	 		}else{
	 			temp[i] = (int)R[i];
	 		}
	 		if (pointlen && !isEnd(R,i))
	 		{
	 			pointlen ++;
	 		}
	 	}
	 	printf("%d\n",pointlen);
	 }
}


int isEnd(char R[6],int a) {
	for (int i = a; i < 6; ++i)
	{
		if (R[i] != '0')
		{
			return 0;
		}
	}
	return 1;
}