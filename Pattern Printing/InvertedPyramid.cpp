#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Number of Rows:";
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

