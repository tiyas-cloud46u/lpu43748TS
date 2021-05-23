#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,a[50],sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    
    }
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1])
        sum=sum+a[i];
        else
        sum=sum+a[i+1];
        i++;
        
    }
    cout<<sum;
    return 0;
};
