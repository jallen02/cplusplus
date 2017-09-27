#include "printer.h" 

int main()
{
    Printer *p = new Printer("print out a string");
    p->print();
    p->change_string("now I have changed the string");
    p->print();
    return 0;
}
