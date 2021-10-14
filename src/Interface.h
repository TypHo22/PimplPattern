#ifndef INTERFACE_H
#define INTERFACE_H
#include<memory>


class Interface
{
public:
     Interface();
    ~Interface();

    void doSth();
    void printCounter();
private:

    struct Implementation;// forward declaration
    std::unique_ptr<Implementation> pImpl; // ptr to actual implementation

};

#endif // INTERFACE_H
