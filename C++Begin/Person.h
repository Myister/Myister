#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Person
{
    string name;//姓名
    string address;//地址
    string back1() const { return name; }
    string back2() const { return address; }
};
#endif