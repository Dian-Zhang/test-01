#include<iostream>
#include<string>
using namespace std;

class MyString
{
private:
    string s;
public:
    MyString(string _s) :s(_s)
    {

    }
    int f1()
    {

    }
    char f2()
    {

    }
    char f3()
    {

    }
};
int main()
{
    string s;
    cin >> s;
    MyString ms(s);
    cout << ms.f1() << endl; //输出字符串中所有的数字字符
    cout << ms.f2() << endl; //输出字符串中所有的大写字母字符
    cout << ms.f3() << endl; //输出字符串中所有的小写字母字符
    return 0;
}