#include<iostream>
using namespace std;
//①这里应该是Node类的定义
class Node
{
public:
    int id;
    string name;
    Node* pNode;
    Node();
    Node(int ID, string n);
    Node(Node& n);
    void display();
};
//②这里应该是Link类的定义
class Link
{
private:
    Node* head;
public:
    Link();
    ~Link();
    void traverse();
    void insert(Node n);
    void deleteByID(int id);
    void modifyByID(int id, string name);
};
int main()
{
    Link link; //此时link中只有一个空的头结点
    link.insert(7); //存放数字7的结点连在头结点后面
    link.insert(2); //存放数字2的结点连在数字7的结点后面
    link.traverse(); //输出7 2，两个数字之间有一个空格，最后一个数字后面没有空格，要换行
    link.insert(3); //存放数字3的结点连在数字2的结点后面
    link.traverse(); //输出7 2 3，两个数字之间有一个空格，最后一个数字后面没有空格，要换行
    return 0;
}