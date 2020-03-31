#include<iostream>
using namespace std;
//������Ӧ����Node��Ķ���
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
//������Ӧ����Link��Ķ���
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
    Link link; //��ʱlink��ֻ��һ���յ�ͷ���
    link.insert(7); //�������7�Ľ������ͷ������
    link.insert(2); //�������2�Ľ����������7�Ľ�����
    link.traverse(); //���7 2����������֮����һ���ո����һ�����ֺ���û�пո�Ҫ����
    link.insert(3); //�������3�Ľ����������2�Ľ�����
    link.traverse(); //���7 2 3����������֮����һ���ո����һ�����ֺ���û�пո�Ҫ����
    return 0;
}