#include<iostream>

using namespace std;

int main(){
    int i,j,n;
    cout<<"enter the number of line = ";
    cin>>n;

    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<"\t *";
        }
        cout<<"\n";
    }
    return 0;
}