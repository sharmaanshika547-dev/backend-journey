#include<bits/stdc++.h>
using namespace std; 
int main(){
  vector<int>nums ={1,2,2,3,1};
  unordered_map<int,int>freq; //empty table feq where key is the num and calue is count 
  for(int x:nums){
  freq[x]++;  //if x is not in map then we create freq[x]=0 or else we+1
 }
  for(auto it :freq){
    cout<<it.first << "->"<<it.second<<endl;  //first is key and second is value 
}
return 0;
}
