#include <iostream>

using namespace std;
int main() {
    int num = 0;
    scanf("%d",&num);
    int i = 0;
    bool option[10];
    long a,b,c;
    while (++i <= num) { 
        scanf("%ld %ld %ld",&a,&b,&c);
        option[i-1] = a+b>c?true:false;
    }
    for (int j = 0; j<num; j++) {
        option[j]?printf("Case #%d: true\n",j+1): printf("Case #%d: false\n",j+1);
    }
    return 0;
}