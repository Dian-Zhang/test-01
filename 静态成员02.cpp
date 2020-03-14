#include<iostream>
#include<string>
using namespace std;

class Goat
{
private:

public:



};

int main()
{
    Goat g1("Pleasant Goat"), g2("Pretty Goat"), g3("Athlect Goat");
    g2.visit("the pavilion", "having a romance", g3);
    Goat g4("Lazy Goat");
    g4.visit("the library", "studying");
    Goat g5("Slow Goat"), g6("Warm Goat");
    g2.visit("Zhongshan street", "shopping", g5);
    g1.visit("Nanputuo Temple", "chanting scriptures");
    g6.visit("the gymnasium", "doing physical exercise");
    return 0;
}