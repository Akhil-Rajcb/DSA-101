#include<iostream>
 using namespace std;
  
  int main(){
    int i,j,n,m;

    cout<<"enter the number of rows = ";
    cin>>n;

    cout<<"enetr the number of column = ";
    cin>>m;

int a[n][m]; 

    cout<<"enter the matrix = ";

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"the entered matrix = "<<"\n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            
            cout<<"\t"<<a[i][j];
        }
        cout<<"\n\n";

    }
    return 0;

  }