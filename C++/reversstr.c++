#include <iostream>
#define pi 3.14

using namespace std;
void reverse(string &str) {
      
      string sts="";
    for(int i=0;i<str.length();i++)  {
         
          
          sts=str[i]+sts;
          

    }
    str=sts;
}


int main() {


    int n,a,b;
    string name="ajay reddy";
    cout<<"enter two numbers" <<"\n";
    cin>>a>>b;
    cout<<"Sum of " <<a <<"and" <<b << "=" <<a+b;
    reverse(name);
    cout<<name<<endl;
    cout<<pi;

    
    }