







int main(£©
{
    Goat* g1 = new Goat("Pretty Goat", 47);
    Goat* g2 = new Goat("Warm Goat", 60);
    Wolf* w1 = new Wolf("Wilie", 50);
    print(g1);
    print(g2);
    print(w1);
    g2->sleep();
    w1->eat(g1);
    print(g2);
    print(w1);
    return 0;
}