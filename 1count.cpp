#include<iostream>
using namespace std;
int main()
{
    int number,count;
    cout<<"enter a number:";
    cin>>number;
    while(number){
    count +=number&1;
    number >>=1;
    }
    cout<<count;
    

}