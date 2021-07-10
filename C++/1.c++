#include <iostream>
using namespace std;
void swap(int &a,int &c) {
    int temp;
    temp=a;
    a=c;
    c=temp;
    return;
}
int main() {
    string str="ajay";
    int a=12,c=13,n;
    cout<<a<<c<<endl;
    // a=refer(a,c);
    cout<<"hello world"<<"\n"<< str<<endl;
    swap(a,c);
    cout<<a<<c;
    for (int i=0;i<=str.length();i++) {
        cout<<"\n"<<str[i];
    }
    
}