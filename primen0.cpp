//method 1- iterative approach
#include<iostream>
#include<math.h>
using namespace std;

// int main()
// {
//     int count=0;
//     int n;
//     cin>>n;

//     for(int i=1;i<n+1;i++)
//     {
//         if(n%i==0)
//         count++;    
//     }
//     if(n==0  && n==1)
//     cout<<"Not prime number";
//     else if(count>2)
//     cout<<"Not prime number";
//     else
//     cout<<"Prime number";

// }

//method 2- break down optimization approach

// int main()
// {
//     int n,i;
//     cin>>n;
//     bool isPrime=true;

//     if(n<2)
//     {
//      isPrime=false;
//     }

//     else
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             isPrime=false;
//             break;
//         }

//     }
//     string result=isPrime?"Prime":"Not prime";
//     cout<<result;
// }

//method by optimization breakdown - n/2
// int main()
// {
//     int i,n = 13;
//     bool isprime= true;
    
//     // 0 and 1 are not prime numbers also, negative numbers are not prime
//     if(n < 2)
//     {
//         isprime = false;
//     }
//     else
//     {
//         for(i=n/2+1;i<n-1;i++)
//         {
//             if(n % i == 0)
//             {
//                 isprime = false;
//                 break;
//             }
//         }
//     }

//     string result = isprime ? "Prime" : "not Prime";
//     cout<< result;
    
//     return 0;
// }


//method -3 Optimization by √n
// int main()
// {
//     int n,i;
//     cin>>n;
//     bool isPrime=true;

//     if(n<2)
//     {
//      isPrime=false;
//     }
//     else
//     {
//         for(int i=2;i<sqrt(n);i++)
//         {
//             if(n%i==0)
//             {
//             isPrime=false;
//             break;
//             }
//         }
//     }
//     string result=isPrime?"Prime":"Not Prime";
//         cout<<result;
//         return 0;
// }

//Optimization by skipping even iteration

// bool isPrime(int n)
// {
//     if(n<=1)
//     return false;

//     else if(n==2)
//     return true;

//     else if(n%2==0)
//     return false;

//     else
//     for(int i=3;i<sqrt(n);i+=2)
// {

//     if(n%i==0)
//         return false;

  
// }
//   return true;
// }

// int main()
// {
//     int n;
//     cin>>n;

//     if(isPrime(n))
//     cout<<"Prime number";
//     else
//     cout<<"Not prime number";

// }


//Recursion
bool checkPrime(int n,int i)
{
    if(n<2)
    return false;
    
    if(i==n)
    return true;

    if(n%i==0)
    return false;
    
    i+=1;
    return checkPrime(n,i);
    
    }
int main()
{
   int i = 2;
    bool isprime= true;
    
    int n;
    cin>>n;
    isprime=checkPrime(n, i);
    
    string result = isprime ? "Prime":"not Prime";
    cout<< n << " is : "<< result;
    
    return 0;
}