#include<iostream>
#include<vector>

using namespace std;

int main(){
int i,n,j;

vector<vector<int>> matrix;
vector<int> ro;

cout<<"enter the number of rows = ";
cin>>n;
n=n+1;



for(i=0;i<n;i++){
     vector<int> row;
    for(j=0;j<=i;j++){
        if(j==0 || j==i){
            row.push_back(1);
        }
        else
        {
            row.push_back(matrix[i-1][j-1]+matrix[i-1][j]);
        }
    
     }
    matrix.push_back(row);
}
for(i=0;i<n;i++){
    for(j=0;j<=i;j++){
        cout<<matrix[i][j]<<ends;    
        }
        cout<<"\n";
}
for(i=0;i<n;i++){
    ro.push_back(matrix[n-1][i]);
}
cout<<"the kth row";
for(i=0;i<n;i++){
cout<<ro[i];
}

return 0;
}