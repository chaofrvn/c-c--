#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;

    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long count =0;   //count is the number of triplets
    for(int i=0;i<n-2;i++){
        if(a[i]>=k){
            break;
        }
        
        int l=i+1;
        int r=n-1;
        while(l<r){
            if(a[i]+a[l]>=k){
                break;
            }
            if(a[i]+a[l]+a[r]>k){
                r--;
        }else if(a[i]+a[l]+a[r]<k){
            l++;
        }else{
            count++;
            l++;
            
        }
        
    }
    }
    cout<<count;
}