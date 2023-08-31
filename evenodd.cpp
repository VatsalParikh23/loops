#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"input any number"<<endl;
    cin>>num;



    if((num&1)==0)
    {
        cout<<"Number is Even";
    }
    else
    {
        cout<<"Number is Odd";

    }
    return 0;
}