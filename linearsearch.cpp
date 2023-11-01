#include<iostream>
using namespace std;
//function inorder to perform linera search
int linearSearch(int arr[], int n , int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main() {
    int n;
    cout<<"enter no.of elements";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target element:";
    cin>>target;
    int result=linearSearch(arr,n,target);
    if(result!=-1){
        cout<<"element"<<target<<"found at index "<<result<<endl;
    }else{
        cout<<"element"<<target<<"not found in array"<<result<<endl;
    }
    return 0;
}