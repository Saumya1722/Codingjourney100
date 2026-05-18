// method 1- iterative
#include<iostream>
using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     int a=0, b=1;
//     cout<< a << " , "<<b<< " , ";
//     int nextTerm;

//     for(int i=2; i< n; i++)
//     {
//         nextTerm= a + b;
//         a=b;
//         b= nextTerm;

//         cout<< nextTerm << " , ";
//     }
//     return 0;
// }


// method 2- recursive with static variable

// int Fib(int n)
// {
    
//     // Note : declaring static items too here
//     static int t1 = 0, t2 = 1, nextTerm;
    
//     if(n > 0)
//     {    
//         nextTerm = t1 + t2;
//         t1 = t2;    
//         t2 = nextTerm;    
    
//         cout << nextTerm << ", ";    
//         Fib(n-1);    
//     }
    
// }

// int main()
// {
//     int n = 15;
    
//     cout << "0, 1, ";
    
//     // n-2 as 2 terms already printed
//     Fib(n-2);

//     return 0;
// }


// method 3- recursive without static variables
// int fibonacci(int n)
// {
//     if(n<=1)
    
//         return n;

//         return fibonacci(n-1) + fibonacci(n-2);

// }



// int main()
// {
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++)
//      cout<< fibonacci(i)<< ",";
// }



// method 4 - dyanamic programming - time- complexity - O(n)
void fib(int n)
{
    int f[n+1];
    f[0]=0, f[1] = 1;
    cout<< f[0] << " , " << f[1]<< " , ";
    for(int i=2; i<n ; i++)
    {
        f[i] = f[i-1] + f[i-2];
        cout << f[i]<< " , ";
    }
}
int main()
{
    int n;
    cin>>n;

    fib(n);
}