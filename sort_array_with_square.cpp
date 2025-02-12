#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;
int main(){
    int i,val,n,p=0,q=0;
    vector<int>a;
    vector<int>sol;
    cout<<"enter the limit = ";
    cin>>n;

    cout<<"enter the numbers = ";
    for(i=0;i<n;i++) {
    cin>>val;
    a.push_back(val);
    }
    for(i=0;i<n;i++){
        if(a[i]>=0){
            p=i;
            q=i-1;
            break;
        }
    }
    while(q>=0&&p<a.size()){
        if(a[p]*a[p]<a[q]*a[q]){
            sol.push_back(a[p]*a[p]);
            p++;
        }else{
            sol.push_back(a[q]*a[q]);
            q--;
        }
    }
    while(q>=0){
        sol.push_back(a[q]*a[q]);
        q--;
    }
    while(p<a.size()){
        sol.push_back(a[p]*a[p]);
        p++;
    }
        
    
   
    cout<<"final array = ";
    for(i=0;i<sol.size();i++){
        cout<<"\t"<<sol[i];
    }
    
 return 0;   
}