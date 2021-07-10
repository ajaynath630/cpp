#include <iostream>


int count(std::string str,int j=0) {
     
     std::string st="";
      
   do {
        st=str[j];
        j++;
   }

   while (st!="");

   return j;

}

using namespace std;
void main() {

string name="ajay nath";

cout<<count(name);



}