#include<iostream>
#include<string>
using namespace std;
enum DamageType { Physical, Magic, Heal };
class Mage
{
public:
    string name;
    int maxhp, hp;
    double physicalResistance, magicResistance;
    Mage(string name, int hp) :name(name), maxhp(hp), hp(hp)
    {
        physicalResistance = 0;
        magicResistance = 0.3;
    }
    void showIntro()
    {
        cout << name << " HP: " << hp << endl;
    }
    bool isAlive()
    {
        if (hp <= 0)
            return false;
        else
            return true;
    }
    void destroy()
    {
        hp = 0;
        cout << name << " is destroyed." << endl;
    }
    template<typename T> void reduceHP(T& source, int damage, DamageType dt)
    {
        int realDamage = damage;
        if (dt == DamageType::Magic)
        {
            realDamage = (int)(realDamage * (1 - magicResistance) + 0.5);
        }
        else if (dt == DamageType::Physical)
        {
            realDamage = (int)(realDamage * (1 - physicalResistance) + 0.5);
        }
        hp -= realDamage;
        cout << name << " receive " << realDamage << " damage from " << source.name << "." << endl;
        if (!isAlive())
        {
            destroy();
        }
    }
    void increaseHP(int healpoint)
    {
        hp += healpoint;
        if (hp > maxhp)
        {
            hp = maxhp;
        }
    }
    template<typename T> void fireball(T& target)
    {
        attack(target, "Fireball", DamageType::Magic, 1000);
    }
    template<typename T> void pyroblast(T& target)
    {
        attack(target, "Pyroblast", DamageType::Magic, 5000);
    }
    template<typename T> void attack(T& target, string attackname, DamageType dt, int damage)
    {
        cout << name << " casts " << attackname << ", dealing " << damage << " damage to " << target.name << "." << endl;
        target.reduceHP(*this, damage, dt);
    }
};
//Paladin类的定义
class Paladin
{
public:
    string name;
    int maxhp, hp;
    double physicalResistance, magicResistance;
    Paladin(string name, int hp) :name(name), maxhp(hp), hp(hp)
    {
        physicalResistance = 0.25;
        magicResistance = 0.1;
    }
    void showIntro()
    {
        cout << name << " HP: " << hp << endl;
    }
    bool isAlive()
    {
        if (hp <= 0)
            return false;
        else
            return true;
        //return hp <= 0 ? false : true;
    }
    void destroy()
    {
        hp = 0;
        cout << name << " is destroyed." << endl;
    }
    template<typename T> void reduceHP(T& source, int damage, DamageType dt)
    {
        int realDamage = damage;
        if (dt == DamageType::Magic)
        {
            realDamage = (int)(realDamage * (1 - magicResistance) + 0.5);
        }
        else if (dt == DamageType::Physical)
        {
            realDamage = (int)(realDamage * (1 - physicalResistance) + 0.5);
        }
        hp -= realDamage;
        cout << name << " receive " << realDamage << " damage from " << source.name << "." << endl;
        if (!isAlive()) { destroy(); }
    }
    void increaseHP(int healpoint)
    {
        hp += healpoint;
        if (hp > maxhp)
        {
            hp = maxhp;
        }
    }
    template<typename T> void verdict(T& target)
    {
        attack(target, "Templar's Verdict", DamageType::Physical, 3000);
    }
    void flash()
    {
        heal(*this, "Flash of Light", DamageType::Heal, 1500);
    }
    template<typename T> void attack(T& target, string attackname, DamageType dt, int damage)
    {
        cout << name << " casts " << attackname << ", dealing " << damage << " damage to " << target.name << "." << endl;
        target.reduceHP(*this, damage, dt);
    }
    template<typename T> void heal(T& target, string healname, DamageType dt, int healpoint)
    {
        cout << name << " heals " << target.name << " " << healpoint << " Points." << endl;
        target.increaseHP(healpoint);
    }
};
int main()
{
    Mage mag("Jiana", 20000);
    Paladin pal("Arthus", 25000);
    mag.showIntro();
    pal.showIntro();
    while (mag.isAlive() && pal.isAlive())
    {
        cout << "----------" << endl;
        if (mag.isAlive())
        {
            mag.fireball(pal);
        }
        if (pal.isAlive())
        {
            pal.flash();
        }
        cout << "----------" << endl;
        mag.showIntro();
        pal.showIntro();
        if (!mag.isAlive() || !pal.isAlive())
        {
            break;
        }
        cout << "----------" << endl;
        if (mag.isAlive())
        {
            mag.pyroblast(pal);
        }
        if (pal.isAlive())
        {
            pal.verdict(mag);
        }
        cout << "----------" << endl;
        mag.showIntro();
        pal.showIntro();
    }
    return 0;
}