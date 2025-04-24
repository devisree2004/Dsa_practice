#include<iostream>
#include<string>
using namespace std;
class Person;
class Employee
{
    private:
    char name[30];
    int e_id;
    protected:
    int salary;
    int hra,lta,sa;
    public:
    Employee(char n[30],int e,int s)

    {
        name[30]=n[30];
        e_id=e;
        salary=s;

        hra=20000;
        lta=10000;
        sa=5000;
    }

    friend class Person;

};
class Person
{
   public:
   int g;
   void gross(Employee &e)
   {
       g=e.salary+e.hra+e.lta+e.sa;
       cout<<"gross salary is:"<<g;
   }
};
int main()
{
    Employee  e1("Devi",53,50000);
    Person p;
    p.gross(e1);
    return 0;
}