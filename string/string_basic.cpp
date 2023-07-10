#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    //    string s;  //strin(g array behave like dynamic array
    //    getline(cin,s);
    //    cout<<s;
     vector<string> stri;
     string temp;
     int n;
     cin>>n;
     cin>>ws;//discard the white space
     while(n--){
         getline(cin,temp);
         stri.push_back(temp);//buffer
     }
     for(auto i:stri){
        cout<<i<<" ";
     }

 return 0;
}