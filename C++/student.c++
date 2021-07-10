#include <iostream>
using namespace std;

class student {
    
    private:
      string Name;
      int Rool;
      char Tgrade;
    public:

    student(string name,int rool,char tgrade) {
      Name=name;
      Rool=rool;
      Tgrade=tgrade;

    void put_det() {
      
      cout<<"printing details"<<endl;
      cout<<Name;
      cout<<Rool;
      cout<<Tgrade;
    }
    void get_det(void);

    

    }
};

void student::get_det(void)

    int main() {


    }






    

      

}