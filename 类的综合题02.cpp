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
    cout << ms.f1() << endl; //����ַ��������е������ַ�
    cout << ms.f2() << endl; //����ַ��������еĴ�д��ĸ�ַ�
    cout << ms.f3() << endl; //����ַ��������е�Сд��ĸ�ַ�
    //system("pause");
    return 0;
}