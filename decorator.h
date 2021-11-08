#ifndef DECORATOR_H_
#define DECORATOR_H_

#include <iostream>
#include <string>

using namespace std;

class Component{
public:
    virtual ~Component();
    virtual string doSomething() const = 0;
};

class ConcreteComponent : public Component{ // "is a" relationship
public:
    string doSomething() const override;
};

class Decorator : public Component{ // "is a" relationship
private:
    Component *comp; //"has a" relationship
public:
    Decorator(Component *c);
    string doSomething() const override;
};

class ConcreteDecorator : public Decorator{
public:
    ConcreteDecorator(Component *comp);
    string doSomething() const override;
};

#endif