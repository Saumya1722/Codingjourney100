#include<iostream>
using namespace std;

// method 1
// int main()
// {
//     int num, fact =1;
//     cin>>num;

//     if(num < 0)
//     cout<<"not possible";
//     else
//     {
//       for(int i =1;i<=num;i++)
    
//         fact = fact * i;
    
//     }
   
//     cout<< fact;

// }


// method 2- recursion
int getFactorial(int num)
{
    if(num == 0)
    return 1; //base case- used to stop recursion
    
    // recursion- calls smaleer sub problems
    return num * getFactorial(num-1);
} 

int main()
{
    int num;
    cin>>num;

    int fact= getFactorial(num);
    cout<< fact;

    return 0;
}