#include <iostream>
#include <vector>
using namespace std;

class Meal
{
  public:

    void AddDrink(string drink)
    {
      drinks.push_back(drink);
    }
    void AddAppetizer(string appetizer)
    {
      appetizers.push_back(appetizer);
    }
    void AddMainCourse(string main_course)
    {
      main_courses.push_back(main_course);
    }
    void AddDessert(string dessert)
    {
      desserts.push_back(dessert);
    }
    void PrintMeal()
    {
      if (drinks.size() == 0)
       {
      cout << "Drinks: None" << endl;
      }
      else if (drinks.size() == 1)
      {
      cout << "Drinks: " << drinks.at(0) << endl;
      }
      else if (drinks.size() == 2)
      {
      cout << "Drinks: " << drinks.at(0) << " and " << drinks.at(1) << endl;
      }


      if (appetizers.size() == 0)
       {
      cout << "Appetizers: None" << endl;
      }
      else if (appetizers.size() == 1)
      {
      cout << "Appetizers: " << appetizers.at(0) << endl;
      }
      else if (appetizers.size() == 2)
      {
      cout << "Appetizers: " << appetizers.at(0) <<" and " << appetizers.at(1) << endl;
      }
      else if (appetizers.size()==3)
      {
      cout << "Appetizers: " << appetizers.at(0)<< ", " << appetizers.at(1)<< " and " << appetizers.at(2) << endl;

      }


      if (main_courses.size() == 0)
       {
      cout << "MainCourse: None" << endl;
      }
      else if (main_courses.size() == 1)
      {
      cout << "MainCourse: " << main_courses.at(0) << endl;
      }
      else if (main_courses.size() == 2)
      {
      cout << "MainCourse: " << main_courses.at(0) << " and " << main_courses.at(1) << endl;
      }

      if (desserts.size() == 0)
       {
      cout << "Dessert: None" << endl;
      }
      else if (desserts.size() == 1)
      {
      cout << "Dessert: " << desserts.at(0) << endl;
      }
      else if (desserts.size() == 2)
      {
      cout << "Dessert: " << desserts.at(0) << " and " << desserts.at(1) << endl;
      }
    }
  private:
  vector<string> drinks;
  vector<string> appetizers;
  vector<string> main_courses;
  vector<string> desserts;
};

int main()
{
  Meal dinner;

  dinner.AddDrink("Pepsi");
  dinner.AddDrink("Sprite");

  dinner.AddAppetizer("egg rolls");
  dinner.AddAppetizer("pot stickers");
  dinner.AddAppetizer("buffalo wings");

  dinner.AddMainCourse("smoked salmon");

  dinner.PrintMeal();
}
