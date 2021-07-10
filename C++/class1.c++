#include <iostream>
using namespace std;

class car {

public:

  int Tyres;
  string Color;

  car(int tyres,string color) {
    Tyres=tyres;
    Color=color;
  }

};

class proLang {

public:
  
    string Name;
    string Type;
    string Uses;
    int Grade;
    car Car;

proLang(string name,string type,int grade,string uses,int tyres=4,string color="red") 
    
    {
         Name=name;
         Type=type;
         Grade=grade;
         Uses=uses;
         Car ={tyres,color};    
     }

    void display() {
         cout<<Name<<Type<<Grade<<Uses;
     }
     

};

int main() {
    proLang python = {"python","oop",5,"general purpose"};
    python.display();
    python.Car.Tyres;
    
    return 0;
}