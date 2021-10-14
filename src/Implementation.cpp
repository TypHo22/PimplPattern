#include<Interface.h>
#include<memory>
#include<iostream>

struct Interface::Implementation
{
    int counter_;
};

Interface::Interface() :
    pImpl(std::make_unique<Implementation>())
{   pImpl->counter_ = 0;}

Interface::~Interface()
{

}

void Interface::doSth()
{
    pImpl->counter_++;
}

void Interface::printCounter()
{
    std::cout<<"Current Counter = " << pImpl->counter_<<std::endl;
}
