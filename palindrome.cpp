#include<iostream>
#include<cstring>
#include<string>
using namespace std;

// int main()
// {
//     int num,reverse=0,temp,rem;

//     scanf("%d",&num);

//     temp=num;

//     while(temp!=0)
//     {
//         rem=temp%10;
//         reverse=reverse*10+rem;
//         temp/=10;
    
//     }
//     if(num==reverse)
//     cout<<num<<"is palindrome";
//     else
//     cout<<num<<"is not palindrome";
// }

//method 2
// int getReverse(int num,int reverse)
// {
//     if(num==0)
//     return reverse;
   

//    int rem=num%10;
//    reverse=reverse*10+rem;

//    return getReverse(num/10,reverse);
// }


// int main()
// {
//     int num,reverse=0;
//     cin>>num;
    
//     if(getReverse(num,reverse)==num)
//     cout<<num<<"is palindrome";
//     else
//     cout<<num<<"is not palindrome";

// }

//method 3

// int main()
// {
//     char string[10];
//     scanf("%s", string);
//     int len,i;
//     bool flag=false;
//     len=strlen(string);
//     for(int i=0;i<len;i++)
//     {
//         if(string[i]!= string[len-i-1])
//         {
//             flag=true;
//             break;
//         }
//     }
//     if(flag)
//     cout<<string<<"is not palindrome";
//     else
//     cout<<string<<"is palindrome";
// return 0;
// }

//method 4
// void lowercase(char str[])
// {
//     int i=0;
//     while(str[i]!='\0')
//     {
//         if(str[i]>64 && str[i]<91)
//         str[i]+=32;
//     i++;
//     }
// }
// int main()
// {
//     char str[50]="Naman";
//     int i,len,flag=0;

//     len=strlen(str);
    
//     lowercase(str);
//     for(int i=0;i<len/2;i++)
//     {
//         if(str[i]!=str[len-i-1])
//         {
//         flag++;
//         break;
//         }
//     }
//         if(flag)
//         cout<<str<<" is not palindrome"<<endl;
//         else
//         cout<<str<<" is palindrome"<<endl;


// }

//method 5

void lowercase(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
if(str[i]>64 && str[i]<91)

    str[i]+=32;
    i++;

    }
}
void checkPalindrome(char str[])
{
    int left=0;
    int right=strlen(str)-1;

    while(right>left)
    {
        if(str[left++] != str[right--]){
        cout<<str<<"is not palindrome";
    return;
    }
    }
    cout<<str<<"is palindrome";
}
int main()
{
    char str[10]="Radar";
    lowercase(str);

    checkPalindrome(str);
}