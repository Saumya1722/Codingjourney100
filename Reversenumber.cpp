#include<iostream>
using namespace std;

// int main()
// {
//     int num,rev=0,rem;
//     cin>> num;

//     while(num!=0)
//     {
//      rem=num%10;
//         rev=rev*10+rem;
//         num/=10;
//     }
//     cout<<rev;
//     return 0;
// }

//method 2

// int getReverse(int num,int rev)
// {
//     if(num==0)
//     return rev;

//     int rem=num%10;
//     rev=rev*10+rem;

//     return getReverse(num/10,rev);
// }
// int main()
// {
//     int num,rev=0;

//     cin>>num;

//     cout<<getReverse(num,rev);
//     return 0;

// }


//method 3
void getReverse(int num){
    if(num == 0)
        return;
    
    int rem = num % 10;
    cout << rem;
    
    getReverse(num / 10);
}


int main ()
{
    int num, rev = 0;
    cin>>num;
    cout << "The number is: "<<num; 
    
    
    cout << "\nReverse: ";
    getReverse(num);
}