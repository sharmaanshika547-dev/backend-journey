#include<bits/stdc++.h>
using namespace std; 

int main(){
  vector<int>nums = {2,5,7,2,9}; 
  int maxval = nums[0];
  for(int x: nums){
    if(x>maxval){
       maxval = x; 
       }
     }
     cout<< "max element is: "<<maxval << endl; 
     return 0; 
}

