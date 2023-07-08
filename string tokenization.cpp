#include <iostream>
#include <cstring>
using namespace std;
int main() {
  char str[100];
  cin.getline(str,100);
  char* tok=strtok(str,",");
  //strtok is static variable
  //tok is pointer
  while(tok!=NULL){
      cout<<tok<<endl;
      tok=strtok(NULL,",");
  }
  return 0;
}
