#ifndef __PRINTER_H_INCLUDED__
#define __PRINTER_H_INCLUDED__

#include <iostream>
#include <string>

class Printer
{
    private:
        std::string print_string;

    public:
        Printer(std::string);
        void print();
        void change_string(std::string);

};

#endif
