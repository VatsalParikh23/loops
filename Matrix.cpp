#include<iostream>
using namespace std;
int main()
{
    int var1[3][3],var2[3][3],sum[3][3];
    int i,j,k,l;
    cout<<"Input Element of matrix";
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>var1[i][j];
        }
    }
    cout<<"Matrix is:"<<endl;
     for (i=0;i<3;i++){
        for(j=0;j<3;j++){
           cout<<"\t"<<var1[i][j];
        }
        cout<<endl;
    }
    cout<<"Input Element of matrix";
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>var2[i][j];
        }
    }
    cout<<"Matrix is:"<<endl;
     for (i=0;i<3;i++){
        for(j=0;j<3;j++){
           cout<<"\t"<<var2[i][j];
        }
        cout<<endl;
    }

    

    cout<<"Sum of the two matrix is";
     for (i=0;i<3;i++){
        for(j=0;j<3;j++){
           sum[i][j]=var1[i][j]+var2[i][j];
        }
        cout<<endl;
    }
     for (i=0;i<3;i++){
        for(j=0;j<3;j++){
           cout<<"\t"<<sum[i][j];
        }
        cout<<endl;
    }
    return 0;
}