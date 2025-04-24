#include<iostream>
using namespace std;
class Enemy
{
    protected:
    int attacknumber;
    public:
    void setattacknumber(int a)
    {
        attacknumber=a;
    }
};
class Ninja:public Enemy
{
    public:
    void attack()
    {
        cout<<"Ninja!! "<<attacknumber<<endl;
    }
};
class Monster:public Enemy
{
    public:
    void attack()
    {
        cout<<"Monster!! "<<attacknumber<<endl;
    }
};
int main()
{
    Ninja n;
    Monster m;
    n.setattacknumber(20);
    n.attack();
}
