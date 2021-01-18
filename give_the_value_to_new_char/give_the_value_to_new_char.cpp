#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    //char* p=new char("Hello");  //error分配一个char(1字节)的空间,
                                  //用"Hello"来初始化,这明显不对
    char* p = new char[6];
    //p="Hello";                 //不能将字符串直接赋值给该字符指针p，原因是：
                                 //指针p指向的是字符串的第一个字符，只能用下面的
                                 //strcpy
    strncpy(p,"Hello",5);
    p[6] = '\0';
    cout<<"*p:"<<*p<<endl;              //只是输出p指向的字符串的第一个字符！
    cout<<"p:"<<p<<endl;               //输出p指向的字符串！
    delete[] p;
    cout<<"********************"<<endl;
    //const char *b = "123456";
    char *b = "123456";
    char* q = new char[6];
    q = b;
    cout<<"q:"<<q<<endl;
    delete b;
    b = nullptr;
    if(q == nullptr)
    {
        cout<<"q"<<q<<endl;
        //before is delete , do not delete the second time
        delete q;
        q = nullptr;
    }
    return 0;
}
/*
*p:H
p:Hello
********************
q:123456
a.out(2010,0x10bf025c0) malloc: *** error for object 0x108ffcf56: pointer being freed was not allocated
a.out(2010,0x10bf025c0) malloc: *** set a breakpoint in malloc_error_break to debug
Abort trap: 6
*/