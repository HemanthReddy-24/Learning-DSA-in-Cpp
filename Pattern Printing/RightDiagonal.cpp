#include<iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
            if(i == j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}



