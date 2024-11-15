#include<iostream>
#include<vector>
using namespace std;
void countSort(vector<int>& arr){
    int max_ele = arr[0];
    int n = arr.size();
    // Find the maximum element in the array
    for(int i=0; i<n; i++){
        max_ele = max(arr[i],max_ele);
    }
    // Create and populate frequency array
    vector<int> freq(max_ele+1,0);
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    // Calculate prefix sums
    for(int i=1; i<=max_ele; i++){ 
        freq[i] += freq[i-1];
    }
    // Place elements in sorted order// Copy sorted elements back to the original array
    vector<int> ans(n);
    for(int i=n-1; i>=0; i--){
        ans[--freq[arr[i]]] = arr[i]; 
    }
    // Copy sorted elements back to the orig// Copy sorted elements back to the original arrayinal array
    for(int i=0; i<n; i++){
        arr[i] = ans[i];
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
    countSort(arr);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}