#include<iostream>
using namespace std;
int miss(int arr[],int n){ 
    int arrsum=0;
    int totalsum=((n+2)*(n+1))/2;
    int i;
    for(i=0;i<n;i++){
        arrsum+=arr[i];
    }
    int mis=totalsum-arrsum;
    return mis;
}
int main(){
    int n;
    cout<<" enter the size: \n";
    cin>>n;
    int arr[n],i;
    cout<<"enter the elements : \n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cout<<"  "<<arr[i];
    }
    cout<<"\nmissing element is:   "<<miss(arr,n);
    return 0;
}