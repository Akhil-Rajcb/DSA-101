#include<iostream>

using namespace std;

int main(){
    int i,j,n;
        cout<<"enter the no of lines = ";
        cin>>n;

        for(i=0;i<n;i++){
            for(j=0;j<n-i;j++){
                cout<<"\t *";
            }
        cout<<"\n";
        }
    return 0;
}