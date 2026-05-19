#include<iostream>
#include<math.h>
using namespace std;

int order(int x)
{
    int len=0;
    while(x)
    {
        len++;
        x/=10;
    };
    return len;
}

bool armstrong(int num, int len)
{
    int sum=0, temp, digit;
    temp = num;
    while(temp != 0)
    {
        digit= temp % 10;
        sum = sum + pow(digit, len);
        temp /= 10;
    };
    return num == sum;
}



int main()
{
    int num,len;
    cin>>num;

    len=order(num);

    if(armstrong(num, len))
    cout<<"Armstrong";
    else
    cout<<"Not armstrong";
    return 0;
}