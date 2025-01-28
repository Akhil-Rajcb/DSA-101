#include<iostream>
#include<vector>
using namespace std;

int main(){
int i,j,r,c;
cout << "enter the no rows = ";
cin >> r;
cout<<"enter the no columns = ";
cin >> c;
vector <vector <int>> matrix (r ,vector <int> (c));
vector <int> a;

int noOfele=r*c;
int minRow=0;
int maxRow=r-1;
int minColumn=0;
int maxColumn=c-1;

cout << "enter the matrix = \n";
for(i=0;i<r;i++) {
    for(j=0;j<c;j++) {
        cin >> matrix[i][j];
    }
}

for(i=0;i<r;i++) {
    for(j=0;j<c;j++) {
        cout <<"\t" << matrix[i][j];
    }
    cout << "\n";
}

while (a.size() < noOfele)
{
    if(a.size() < noOfele) {
    for(i=minColumn;i<=maxColumn;i++) {
        a.push_back(matrix[minRow][i]);
        cout << "left to right \n";
        for(j=0;j<a.size();j++) {
            cout << "\t" << a[j] <<"\n";
          }
          }}
    minRow++;
    if(a.size() < noOfele) {
    for(i=minRow;i<=maxRow;i++) {
        a.push_back(matrix[i][maxColumn]);
         cout << "top to down \n";
        for(j=0;j<a.size();j++) {
            cout << "\t" << a[j] <<"\n";
          }
    }}
    maxColumn--;

    if(a.size() < noOfele) {
    for(i=maxColumn;i>=minColumn;i--) {
        a.push_back(matrix[maxRow][i]);
         cout << "right to left \n";
        for(j=0;j<a.size();j++) {
            cout << "\t" << a[j] <<"\n";
          }
    }}
    maxRow--;
    if(a.size() < noOfele) {
    for(i=maxRow;i>=minRow;i--) {
        a.push_back(matrix[i][minColumn]);
         cout << "down to up \n";
        for(j=0;j<a.size();j++) {
            cout << "\t" << a[j] <<"\n";
          }
    }  
    }
    minColumn++;
}

cout<<"\n";
cout<<"printing spiral order = ";
for(i=0;i<a.size();i++) {
cout << "\t" <<a[i];
}


return 0;
}
