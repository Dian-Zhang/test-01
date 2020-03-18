#include<iostream>
#include<string>
using namespace std;
class MyString
{
public:
    string s;
    MyString(string s):s(s) {}
    string f1() 
    {
        string t1;
        for (int i = 0; i < s.length(); i++)
        {
            if ('0' <= s[i]&&s[i] <= '9')
            {
                t1 =t1+ s[i];
            }
        }
        return t1;
    }
    string f2()
    {
        string t2;
        for (int i = 0; i < s.length(); i++)
        {
            if ('A' <= s[i]&&s[i] <= 'Z')
            { 
                t2=t2+ s[i];
            }
        }
        return t2;
    }
    string f3() 
    {
        string t3;
        for (int i = 0; i < s.length(); i++)
        {
            if ('a' <= s[i]&&s[i] <= 'z')
            {
                t3=t3+s[i]; 
            }
        }
        return t3;
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
    //system("pause");
    return 0;
}