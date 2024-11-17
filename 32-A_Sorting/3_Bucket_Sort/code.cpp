#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void BucketSort(vector<float>& v){
    int n = v.size();  
    // step 1 to create bucket of size n
    vector<vector<float>> bucket(n,vector<float> ());
    // step 2 to insert ele into bucket acc to index
    for(int i=0; i<n; i++){
         int index  = v[i]*n; 
         bucket[index].push_back(v[i]);
    }
    // step 3 sort individual bucket
    for(int i=0; i<n; i++){
        if(!bucket[i].empty()){
            sort(bucket[i].begin(),bucket[i].end());
        }
    }
    // step 4 : combining ele from bucket
    int k = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<bucket[i].size(); j++){
            v[k++] = bucket[i][j];
        }
    }

}
int main(){
    int n ; 
    cout<<"Enter no of ele in Array : ";
    cin>>n;
    vector<float> arr(n);
    cout<<"Enter array ele : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    BucketSort(arr);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}