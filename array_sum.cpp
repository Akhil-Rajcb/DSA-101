#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int i,j,carry=0,val=0,n,m;
    vector<int>final;
    vector<int>A;
    vector<int>B;
    cout<<"enter the limit for A = ";
    cin>>n;
    cout<<"enter the limit for B = ";
    cin>>m;
    cout<<"enter the numbers for A = ";
    for(i=0;i<n;i++) {
    cin>>val;
    A.push_back(val);
    }
    cout<<"enter the numbers for B = ";
    for(i=0;i<m;i++) {
    cin>>val;
    B.push_back(val);
    }
    i=A.size()-1;
    j=B.size()-1;
    while(i>=0 && j>=0){
        int sum=A[i]+B[j]+carry;
        final.push_back(sum%10);
        carry=sum/10;
        i--;
        j--;
    }
    while(i>=0){
        int sum=A[i]+carry;
        final.push_back(sum%10);
        carry=sum/10;
        i--;
    }
    while(j>=0){
        int sum=B[j]+carry;
        final.push_back(sum%10);
        carry=sum/10;
        j--;
    }
    if(carry!=0){
    final.push_back(carry);
    }
    reverse(final.begin(),final.end());
    for(i=0;i<final.size();i++){
        cout<<"\t"<<final[i];
    }
    return 0;
}