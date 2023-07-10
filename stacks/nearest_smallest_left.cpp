#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
vector<int> nearest_greater_element(int arr[],int n){
    stack<int> s;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()<arr[i]){
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()>arr[i]){
            while(s.size()>0 && s.top()>arr[i]){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
   // reverse(v.begin(),v.end());
    return v;

}
int main(){
   int arr[4]={4,5,2,21};
  
   vector<int> v= nearest_greater_element(arr,4);
   for(int i=0;i<4;i++){
          cout<<v[i]<<" ";
   }

}