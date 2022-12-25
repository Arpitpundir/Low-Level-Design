#include<string>
#include<iostream>
using namespace std;

class Movie{
  private:
  int year;
  string title;
  string genre;

  public:

  // Default constructor
  Movie(){
    this->year = -1;
    this->title = "";
    this->genre = "";
  }

  // Parametrized constructor
  Movie(int year, string genre, string title){
    this->year = year;
    this->genre = genre;
    this->title = title;
  }
  int getYear(){
    return this->year;
  }
  string getTitle(){
    return this->title;
  }

  string getGenre(){
    return this->genre;
  }

  void setYear(int year){
    this->year = year;
  }

  void setTitle(string title){
    this->title = title;
  }

  void setGenre(string genre){
    this->genre = genre;
  }

  void printDetails(){
    cout<<"Title: "<<this->title<<endl;
    cout<<"Genre: "<<this->genre<<endl;
    cout<<"Year: "<<this->year<<endl;


  }
};
int main(){

  Movie movie1;
  Movie movie2(2022, "Sci-fi", "Avatar: The way of water");

  cout<<"Movie-1"<<endl;
  movie1.printDetails();
  cout<<"Movie-2"<<endl;
  movie2.printDetails();
}