#include<iostream>
#include<vector>
using namespace std;

int main(){
int i,n;
vector<int>a;
vector<int> non0;
vector<int> zero;
cout<<"enter the limit ";
cin>>n;
cout<<"enter the numebr";
for(i=0;i<n;i++){
int value;
cin>>value;
a.push_back(value);
 }
    for(i=0;i<n;i++){
        if(a[i]!=0){
            non0.push_back(a[i]);
        }
        else{
         zero.push_back(a[i]);}
    }

    for(i=0;i<zero.size();i++){
        non0.push_back(zero[i]);
    }

for(i=0;i<n;i++){
    cout<<"\t"<<non0[i];
}
return 0;
}
