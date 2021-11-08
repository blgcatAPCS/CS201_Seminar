#include "decorator.h"

using namespace std;

Component::~Component(){}

string ConcreteComponent::doSomething() const{
    return "Called doSomething of ConcreteComponent.\n";
}

Decorator::Decorator(Component *c){
    comp=c;
}

string Decorator::doSomething() const{
    return comp->doSomething();
}

ConcreteDecorator::ConcreteDecorator(Component *comp) : Decorator(comp){}

string ConcreteDecorator::doSomething() const{
    return "Called doSomething of ConcreteDecorator\n" + Decorator::doSomething();
}