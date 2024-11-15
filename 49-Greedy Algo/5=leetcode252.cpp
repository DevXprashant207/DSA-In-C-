#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool MeetingRoom(vector<vector<int>>& intervals){
     if(intervals.size()==0) return true;
     vector<int> start,ending;
     for(auto el : intervals){
          start.push_back(el[0]);
          ending.push_back(el[1]);
     }
     sort(start.begin(),start.end());
     sort(ending.begin(),ending.end());
     int ans = 0;
     int room = 0;
     int i = 0, j = 0;
     while(i<start.size() && j<ending.size()){
          if(start[i]<ending[j]){
               // room locate
               room++;
               ans = max(ans,room);
               i++;
          }
          else if(start[i]<ending[j]){
               // rooms delocate
               room--;
               j++;
          }
          else{
               // both are equal
               i++;
               j++;
          }
     }
     return ans==1;
}
int main(){
     vector<vector<int>> intervals ={{1,19},{20,45}};
     // {{1,10},{2,7},{3,19},{8,12},{10,20},{11,30}};
     cout<<MeetingRoom(intervals);
}