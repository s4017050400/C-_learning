#include <iostream>
using namespace std;

    //super class
class Chef {
    public:
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes bbq ribs" <<endl;
        }
};
    //sub-class
class ItalianChef : public Chef{    // inheritance class Chef
    public:
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes chicken parm" <<endl;
        }

};


int main()
{
    Chef chef1;
    chef1.makeSpecialDish();

    ItalianChef italianChef1;
    italianChef1.makeSpecialDish();

    return 0;
}
