#include<iostream>
#include<vector>
using namespace std;

int main(){
int i,n;
vector <int> a;
vector <int> final;
vector <int> one;

cout<<"enter the linmit = ";
cin>>n;
cout<<"enter the 0s and 1s = \n";
for(i=0;i<n;i++){
    int value;
    cin>>value;
    a.push_back(value);
}
for(i=0;i<n;i++){
    if(a[i]==0){
        final.push_back(a[i]);
    }else{
        one.push_back(a[i]);
    }
}

for(i=0;i<one.size();i++){
    final.push_back(one[i]);
}

cout<<"seggregated array = \n";
for(i=0;i<final.size();i++){
    cout<<"\t"<<final[i];
}

return 0;
}