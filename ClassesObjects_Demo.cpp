#include <iostream>

using namespace std;

class Human
{
    public:
        void movement()
        {
            cout<<"A HUman walks on 2 legs."<<endl;
        }
};

class Animal
{
    public:
        void movement()
        {
            cout<<"An animal walks on 4 legs."<<endl;
        }
};

class Fish
{
    public:
        void movement()
        {
            cout<<"A fish swims."<<endl;
        }

};
int main()
{
    Human h;
    Animal a;
    Fish f;

    h.movement();
    a.movement();
    f.movement();
    return 0;
}
