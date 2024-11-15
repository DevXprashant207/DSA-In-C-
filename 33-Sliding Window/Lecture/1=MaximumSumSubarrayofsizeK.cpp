#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter Array elements : ";
    vector<int> v(n);
    for(int i=0; i<n; i++){
       cin>>v[i];
    }
    int k;
    cout<<"Enter size of subarray : ";
    cin>>k;
    int maxidx = -1;
    int maxsum = INT_MIN;
    int presum = 0, currentsum = 0;
    // sliding window approach
    for(int i=0; i<k; i++){// tno = k
        presum += v[i];
    }
    maxsum = presum;
    int i = 1, j=k;
    while(j<n){//  tno = n-k
        currentsum = presum + v[j] - v[i-1];
        if(maxsum<currentsum) {
            maxsum = currentsum;
            maxidx = i;
        }
        presum = currentsum;
        i++;
        j++;
    }// TC = O(n)
    // for(int i=0; i<=n-k; i++){// total op = n-k+1
    //      int sum = 0;
    //      for(int j=i; j<i+k; j++){//total op = k
    //          sum += v[j];
    //      }
    //      if(maxsum<sum){
    //           maxsum = sum;
    //           maxidx = i;
    //      }
    //      // t op = (n-k+1)*k
    // }
    // // T.C = O(k*n) , k is also varrying
    cout<<"Maximum sum of sub of subarray of size "<<k<< " is "<<maxsum<<" And window starting at "<<maxidx; 
}