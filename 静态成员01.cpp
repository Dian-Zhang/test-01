#include<iostream>
#include<string>
using namespace std;

class GardenCharactor
{
private:
    string name,sentence;
    static int cnt;
public:
    GardenCharactor(string );
    void play(string );
};
int GardenCharactor::cnt = 0;

GardenCharactor::GardenCharactor(string _name)//:name(_name)//这是类的构造函数
{
    this->name = _name;
    cnt++;
    cout << "No." << cnt << " character in the night garden: " << name<<endl;
}

void GardenCharactor::play(string s)
{
    this->sentence = s;
    cout << name << " is " << sentence<<endl;
}

int main()
{
    GardenCharactor c1("Igglepiggle"), c2("Upsy Daisy"), c3("Makka Pakka"), c4("Tombliboo");
    c2.play("dancing");
    c3.play("heaping up stones");
    //system("pause");
    return 0;
}