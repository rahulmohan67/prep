#include<iostream>
using namespace std;
class A
{
    public:
            int a;
            void seta(int a)
            {
                cout<<a;
            }

};
class B: public A
{
    public:
            int b;
            void show(int b)
            {
                cout<<b;
            }
};
int main()
{
    B b;
    b.seta(10);
    cout<<"\n";
    b.show(290);

}
