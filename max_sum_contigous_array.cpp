#include<iostream>
#include<vector>

using namespace std;

int main(){
int i,n,val,sum=0,tempsum=0,start=0,end=0,s=0;
vector<int>a;
cout<<"enter the limit = ";
cin>>n;
cout<<"enter the numbers = ";
for(i=0;i<n;i++) {
    cin>>val;
    a.push_back(val);
}
for(i=0;i<n;i++) {
    tempsum=tempsum+a[i];
    if(tempsum>sum){
        sum=tempsum;
        start=s;
        end=i+1;
    }
    if(tempsum<0){
        tempsum=0;
        s=i+1;
    }
}
cout<<"max sum"<<sum;
cout<<"\n"<<"array";
for(i=start;i<end;i++){
    cout<<"\t"<<a[i];
}

return 0;
}