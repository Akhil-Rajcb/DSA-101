#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int n,i,count=1;
    vector<int> a;
    vector<int> Count;
    cout<<"enter the limit = ";
    cin>>n;
    cout<<"enter the numbers = ";
    for(i=0;i<n;i++) {
        int value;
        cin>>value;
        a.push_back(value);
    }

     sort(a.begin(),a.end());

    for(i=0;i<n-1;i++) {
        if(a[i]==a[i+1]){
            count++;
        }
        else{
            Count.push_back(count);
            count=1;
        }  

    }
    Count.push_back(count);
    for(i=0;i<Count.size();i++){
    cout<<"\t"<<Count[i];
    }
return 0;
}