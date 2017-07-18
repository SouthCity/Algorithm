

/*
题目描述

大侦探福尔摩斯接到一张奇怪的字条：“我们约会吧！ 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm”。大侦探很

 快就明白了，字条上奇怪的乱码实际上就是约会的时间“星期四 14:04”，因为前面两字符串中第1对相同的大写英文字母（大小写有区分）是

 第4个字母'D'，代表星期四；第2对相同的字符是'E'，那是第5个英文字母，代表一天里的第14个钟头（于是一天的0点到23点由数字0到9、

 以及大写字母A到N表示）；后面两字符串第1对相同的英文字母's'出现在第4个位置（从0开始计数）上，代表第4分钟。现给定两对字符串，

 请帮助福尔摩斯解码得到约会的时间。

输入描述:

输入在4行中分别给出4个非空、不包含空格、且长度不超过60的字符串。

输出描述:

在一行中输出约会的时间，格式为“DAY HH:MM”，其中“DAY”是某星期的3字符缩写，即MON表示星期一，TUE表示星期二，WED表示星期三，THU表示星期

四，FRI表示星期五，SAT表示星期六，SUN表示星期日。题目输入保证每个测试存在唯一解。

输入例子:

3485djDkxh4hhGE

2984akDfkkkkggEdsb

s&hgsfdk

d&Hyscvnm

输出例子:

THU 14:04
*/

#include <iostream>
#include <string.h>
#include <ctype.h>
#include <iomanip>
using namespace std;

string  getWeek(string letter);
string  getHour(string letter);


int main()
{
	string one;
	string two;
	string three;
	string four;
	cin>>one;
	cin>>two;
	cin>>three;
	cin>>four;

	string a = "-1";
	string b = "-1";
	char temp1;
	char temp2;
	for (int i = 0; i < one.size()>two.size()?two.size():one.size(); ++i)
	{
		if (b.compare("-1") != 0 && a.compare("-1") != 0)
		{
			break;
		}
		temp1 = one[i];
		temp2 = two[i];
		
		if (temp1 == temp2)
			{
			if (isupper(temp1))
				{
					if (a.compare("-1") == 0)
					{
						a = temp1;
						continue;
					}
				}
			if (a.compare("-1") != 0 && b.compare("-1") == 0)
				{
					b = temp2;		
				}	
			}
			
	}
	int minutes = -1;
	for (int i = 0; i < three.size()>four.size()?four.size():three.size(); ++i)
	{	
		temp1 = three[i];
		temp2 = four[i];
		if (isalnum(temp1) && isalnum(temp2) && temp1 == temp2)
		{
			minutes = i;
			break;
		}
	}
	cout<<getWeek(a)<<" "<<getHour(b)<<":"<<setw(2)<<setfill('0')<<minutes<<endl;
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



string  getHour(string letter) {
	string str;
	if (letter.compare("0") == 0)
	{
		str = "00"; 
	}else if(letter.compare("1") == 0){
		str = "01";
	}else if(letter.compare("2") == 0){
		str = "02";
	}else if(letter.compare("3") == 0){
		str = "03";
	}else if(letter.compare("4") == 0){
		str = "04";
	}else if(letter.compare("5") == 0){
		str = "05";
	}else if(letter.compare("6") == 0){
		str = "06";
	}else if(letter.compare("7") == 0){
		str = "07";
	}else if(letter.compare("8") == 0){
		str = "08";
	}else if(letter.compare("9") == 0){
		str = "09";
	}else if(letter.compare("A") == 0){
		str = "10";
	}else if(letter.compare("B") == 0){
		str = "11";
	}else if(letter.compare("C") == 0){
		str = "12";
	}else if(letter.compare("D") == 0){
		str = "13";
	}else if(letter.compare("E") == 0){
		str = "14";
	}else if(letter.compare("F") == 0){
		str = "15";
	}else if(letter.compare("G") == 0){
		str = "16";
	}else if(letter.compare("H") == 0){
		str = "17";
	}else if(letter.compare("I") == 0){
		str = "18";
	}else if(letter.compare("J") == 0){
		str = "19";
	}else if(letter.compare("K") == 0){
		str = "20";
	}else if(letter.compare("L") == 0){
		str = "21";
	}else if(letter.compare("M") == 0){
		str = "22";
	}else if(letter.compare("N") == 0){
		str = "23";
	}else{
		str = "--";
	}
	return str;
}