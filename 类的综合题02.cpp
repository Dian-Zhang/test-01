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
    cout << ms.f1() << endl; //����ַ��������е������ַ�
    cout << ms.f2() << endl; //����ַ��������еĴ�д��ĸ�ַ�
    cout << ms.f3() << endl; //����ַ��������е�Сд��ĸ�ַ�
    return 0;
}