#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string STRR = "AAAA";
	printf("%c\n%d",STRR[0],string.lenth);
	return 0;
}



string  getWeek(string letter) {
	string str;
	if (letter.compare("A") == 0)
	{
		str = "MON"; 
	}else if(letter.compare("B") == 0){
		str = "TUE";
	}else if(letter.compare("C") == 0){
		str = "WED";
	}else if(letter.compare("D") == 0){
		str = "THU";
	}else if(letter.compare("E") == 0){
		str = "FRI";
	}else if(letter.compare("F") == 0){
		str = "SAT";
	}else if(letter.compare("G") == 0){
		str = "SUN";
	}

	return str;
}
