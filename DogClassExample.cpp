#include <iostream>
using namespace std;

class Dog
{
public:
    string name;
    string breed;

Dog()
{
   name= "Fido";
   breed="mutt";
}
void PrintDog()
  {
  cout << name <<" is a "<< breed << "."<< endl;
  }
Dog(string n,string b)
  {
    name =n;
    breed=b;
  }
};

int main(int argc, char** argv) {


  string name = argv[1];
  string breed = argv[2];

  Dog d1 = Dog();
  d1.PrintDog();

  Dog d2 = Dog(name, breed);
  d2.PrintDog();


  return 0;

}

