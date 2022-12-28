#include<iostream>
using namespace std;

class Circle{
  private: 
  int radius;
  double pi;

  public:
  //default constructor
  Circle(){
    this->radius = 1;
    pi = 3.14;
  }

  //parameterized constructor
  Circle(int r){
    radius = r;
    pi = 3.14;
  }

  double perimeter(){
    return 2*pi*radius;
  }

  double area(){
    return pi*radius*radius;
  }
};

int main(){
  Circle c1(34);
  cout<<"Perimeter: "<<c1.perimeter();
  cout<<"Area: "<<c1.area();
}