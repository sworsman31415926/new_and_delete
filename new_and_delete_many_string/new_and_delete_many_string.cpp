#include <iostream>
#include <map>
#include <vector>
using namespace std;
class A
{
public:
    A(int i) :a(i){}
    /*void* operator new(size_t size)
    {
        cout << "call A::operator new" << endl;
        return malloc(size);
    }
    void operator delete(void* p)
    {
        cout << "call A::operator delete" << endl;
        return free(p);
    }
    void* operator new(size_t size, const nothrow_t& nothrow_value) 
    {
        cout << "call A::operator new (noexcept)" << endl;
        return malloc(size);
    }
    void operator delete(void* p, const nothrow_t& nothrow_value) 
    {
        cout << "call A::operator delete (noexcept)" << endl;
        free(p);
    }*/
private:
    int a;
};

int main()
{
    A* example1 = new A(1);
    A* example2 = new A(1);
    A* example3 = new A(1);
    A* example4 = new A(1);
    A* example5 = new A(1);
    A* example6 = new A(1);
    if(example1 != nullptr)
    {
        cout<<"example1 is not null:"<<endl;
    }
    if(example2 != nullptr)
    {
        cout<<"example2 is not null:"<<endl;
    }
    if(example3 != nullptr)
    {
        cout<<"example3 is not null:"<<endl;
    }
    if(example4 != nullptr)
    {
        cout<<"example4 is not null:"<<endl;
    }
    if(example5 != nullptr)
    {
        cout<<"example5 is not null:"<<endl;
    }
    if(example6 != nullptr)
    {
        cout<<"example6 is not null:"<<endl;
    }
    delete example1;
    example1 = nullptr;
    delete example2;
    example2 = nullptr;
    delete example3;
    example3 = nullptr;
    delete example4;
    example4 = nullptr;
    delete example5;
    example5 = nullptr;
    delete example6;
    example6 = nullptr;
    if(example1 == nullptr)
    {
        cout<<"example1 is null:"<<endl;
    }
    if(example2 == nullptr)
    {
        cout<<"example2 is null:"<<endl;
    }
    if(example3 == nullptr)
    {
        cout<<"example3 is null:"<<endl;
    }
    if(example4 == nullptr)
    {
        cout<<"example4 is null:"<<endl;
    }
    if(example5 == nullptr)
    {
        cout<<"example5 is null:"<<endl;
    }
    if(example6 == nullptr)
    {
        cout<<"example6 is null:"<<endl;
    }
    return 0;
}
/*
example1 is not null:
example2 is not null:
example3 is not null:
example4 is not null:
example5 is not null:
example6 is not null:
example1 is null:
example2 is null:
example3 is null:
example4 is null:
example5 is null:
example6 is null:
*/