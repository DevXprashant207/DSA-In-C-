#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void CountSort(vector<int>& arr,int pos){
    int n = arr.size();
    // create fre array
    vector<int>freq(10,0);
    for(int i=0; i<n; i++){
        freq[(arr[i]/pos)%10]++;
    }
    // commulative ferq
    for(int i=1; i<10; i++){
        freq[i] += freq[i-1];
    }
    // ans array
    vector<int>ans(n);
    for(int  i=n-1; i>=0; i--){
        ans[--freq[(arr[i]/pos)%10]] = arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i] = ans[i];
    }
}
void RadixSort(vector<int>& v){
    int max_ele = INT_MIN;
    for(auto x : v){
        max_ele = max(x,max_ele);
    }
    for(int pos = 1; max_ele/pos>0; pos *= 10){
        CountSort(v,pos);
    }
}
int main(){
    int n ; 
    cout<<"Enter no of ele in Array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array ele : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    RadixSort(arr);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}