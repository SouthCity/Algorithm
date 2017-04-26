#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	 double R;
	 int n;
	 while(scanf("%lf %d",&R,&n) == 2) {
	 	double c = pow(R,n);
	 	printf("%lf\n",c);
	 }
}