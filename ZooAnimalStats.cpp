#include <iostream>
using namespace std;

class Zoo {
  public:
    Zoo(int bc, int p, int r, int b) {
      big_cats = bc;
      primates = p;
      reptiles = r;
      birds = b;
    }
    int TotalAnimals()
    {
      return big_cats + primates + reptiles + birds ;
    }
    int TotalMammals()
    {
      return big_cats + primates;
    }
    string MostAnimals()
    {
      if (big_cats > primates && big_cats > reptiles && big_cats > birds)
    return "big cats";

else if (primates > big_cats && primates > reptiles && primates > birds)
    return "primates";

else if (reptiles > big_cats && reptiles > primates && reptiles > birds)
    return "reptiles";

else if (birds > big_cats && birds > primates && birds > reptiles)
    return "birds";

    }

  private:
    int big_cats; //for "big cats"
    int primates; //for "primates"
    int reptiles; //for "reptiles"
    int birds; //for "birds"
};



int main()
{

  Zoo my_zoo(10, 30, 90, 120);
  cout << my_zoo.TotalAnimals() << endl;
  cout << my_zoo.TotalMammals() << endl;
  cout << my_zoo.MostAnimals() << endl;
  Zoo my_zoo2(123, 45, 67, 89);
  cout << my_zoo2.TotalAnimals() << endl;
  cout << my_zoo2.TotalMammals() << endl;
  cout << my_zoo2.MostAnimals() << endl;


  return 0;

}

