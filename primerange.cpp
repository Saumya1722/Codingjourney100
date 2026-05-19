//method 0

#include<iostream>
#include<math.h>
using namespace std;

// bool isPrime(int n)
// {
//     int count=0;
//     if(n<2)
//     return false;

//      for(int i=2;i<n-1;i++)
//      {
//         if(n%i==0)
//         return false;
//      }
//      return true;
    
// }
// int main()
// {
//     int lower,upper;
//     cin>>lower;
//     cin>>upper;

//     for(int i=lower;i<=upper;i++)
//     if(isPrime(i))
//     cout<<i<<" ";
// }

//method 1

// bool isPrime(int n)
// {
//     int count=0;
//     if(n<2)
//     return false;

//      for(int i=2;i<n/2;i++)
//      {
//         if(n%i==0)
//         return false;
//      }
//      return true;
    
// }
// int main()
// {
//     int lower,upper;
//     cin>>lower;
//     cin>>upper;

//     for(int i=lower;i<=upper;i++)
//     if(isPrime(i))
//     cout<<i<<" ";
// }

//method 2 
// bool isPrime(int n)
// {
//     int count=0;
//     if(n<2)
//     return false;

//     for(int i=2;i<sqrt(n);i++)
//     {
//         if(n%i==0)
//         return false;
//     }
//     return true;

    
// }
// int main()
// {
//     int lower,upper;
//     cin>>lower;
//     cin>>upper;

//     for(int i=lower;i<=upper;i++)
//     {
//         if(isPrime(i))
//         cout<<i<<" ";
//     }
// }

//method 3
bool isPrime(int n)
{
    int count=0;
    if(n<=1)
    return false;
    else if(n==2)
    return true;
    else if(n%2==0)
    return false;

    for(int i=3;i<sqrt(n);i++)
    {
        if(n%i==0)
        return false;    }
    return true;
}
int main()
{
    int lower,upper;
    cin>>lower;
    cin>>upper;

    for(int i=lower;i<=upper;i++)
    {
        if(isPrime(i))
        cout<<i<<" ";

    }
}