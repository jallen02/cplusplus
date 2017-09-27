#include "printer.h"

Printer::Printer(std::string str): print_string(str) { }

void Printer::print()
{
    std::cout << print_string << std::endl;
}

void Printer::change_string(std::string str)
{
    this->print_string = str; 
}
