#include<iostream>
#include<math.h>
using namespace std;

// method 1
// int order(int x)
// {
//     int len=0;
//     while(x)
//     {
//         len++;
//         x/=10;
//     };
//     return len;
// }

// void armstrong(int low, int high)
// {
    
//     for(int num=low; num <=high; num++)
//     {
//      int sum=0, digit, temp, len;
//     temp = num;
//     len= order(num);

//     while(temp != 0)
//     {
//         digit= temp %10;
//         sum= sum + pow(digit, len);
//         temp /=10;
//     };

//     if(sum ==  num)
//     cout<<num<<" , ";
//     }
// }



// int main()
// {
//     int low, high;
//     cin>>low;
//     cin>>high;

//     armstrong(low, high);
//     return 0;
// }


// method 2- without using order

void findArmstrong(int low, int high)
{
    for(int i= low+1; i< high; ++i)
    {
        int x= i;
        int n= 0;
        while(x != 0)
        {
            x /=10;
            ++n;
        }
        
    

    int pow_sum=0;
    x=i;

    while(x != 0)
    {
     int digit= x % 10;
     pow_sum += pow(digit, n);
     x /= 10;
    }

    if(pow_sum == i)
    cout<< i << " , ";
}
}

int main()
{
    int num1, num2;
    cin>>num1>>num2;

    findArmstrong(num1,num2);
    cout<< " ";
    return 0;
}