#include<bits/stdc++.h> 
using namespace std; 

int main(){
  vector<int>nums ={2,5,7,9};

  int min_element =nums[0]; 
   
  for(int x : nums){
    if(x<min_element){
      min_element = x ; 
    }
 }
 cout<<"minimum element is:"<<min_element<<endl;
 
 return 0; 
}
