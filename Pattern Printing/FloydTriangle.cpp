#include<iostream>
using namespace std;

int main(){
    int n=5,c=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<c++<<" ";
        }
        cout<<endl;
    }
    return 0;
}



