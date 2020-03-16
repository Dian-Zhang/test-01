#include<iostream>
#include<string>
using namespace std;
class Goat
{
private:
    string name;
    int weight;
public:
    Goat(string name, int weight);
    void sleep();
    string getName() { return name; }
    int getWeight() { return weight;}
};
class Wolf
{
private:
    string name;
    int weight;
public:
    Wolf(string name, int weight);
    void eat(Goat* g);
    string getName() { return name; }
    int getWeight() { return weight; }
};
Goat::Goat(string name, int weight)
{
    this->name = name;
    this->weight = weight;
}
void Goat::sleep()
{
    cout << name << " has a good sleep, increasing 2 kg." << endl;
    weight += 2;
}
Wolf::Wolf(string name, int weight)
{
    this->name = name;
    this->weight = weight;
}
void Wolf::eat(Goat* g)
{
    cout << name << " eats " << g->getName()
        << ", increasing " << g->getWeight() << " kg"<<endl;
    weight += g->getWeight();
}
void print(Goat* g)
{
    cout << g->getName() << " is a goat that weights "
        << g->getWeight() << " kg." << endl;
}
void print(Wolf* w)
{
    cout << w->getName() << " is a wolf that weights "
        << w->getWeight() << " kg." << endl;
}
int main()
{
    Goat* g1 = new Goat("Pretty Goat", 47);
    Wolf* w1 = new Wolf("Wilie", 50);
    Goat* g2 = new Goat("Warm Goat", 60);
    print(g1);
    print(g2);
    print(w1);
    g2->sleep();
    w1->eat(g1);
    print(g2);
    print(w1);
    //system("pause");
    return 0;
}


