#include <iostream>
using namespace std;

int main() 
{
    int a,b,c,d,e,avg;
    cout << "Enter Subject1 marks "<<endl;
    cin >> a;
    cout << "Enter Subject2 marks "<<endl;
    cin >> b;
    cout << "Enter Subject3 marks "<<endl;
    cin >> c;
    cout << "Enter Subject4 marks "<<endl;
    cin >> d;
    cout << "Enter Subject5 marks "<<endl;
    cin >> e;

    avg=(a+b+c+d+e)/5;

    
    if(100<=avg<=90){
        cout << "O" <<endl;
    }else if(89<=avg<=85){
         cout << "A+" <<endl;
    }else if(84<=avg<=75){
         cout << "A" <<endl;
    }else if(74<=avg<=65){
         cout << "B+" <<endl;
    }else if(64<=avg<=55){
         cout << "B" <<endl;
    }else if(55<=avg<=40){
         cout << "PASS" <<endl;
    }else{
        cout << "FAIL" <<endl;
    }


return 0;
}