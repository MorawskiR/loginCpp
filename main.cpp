
#include <iostream>
#include <string>
#include "header.hpp"
int main()
{
    std::string haslo = "PPSDASD#33";

    if(checkifupper(haslo))
    {
        std::cout<<"posiada duza ";
    }
    std::cout<<"\n";
    if(checkspecialchar(haslo))
    {
        std::cout<<"posiada special ";
    }
        std::cout<<"\n";

     if(checkNumber(haslo))
    {
        std::cout<<"posiada liczbe ";
    }
        std::cout<<"\n";

    if (checklenght(haslo))
    {
        std::cout<<"dlugosc ok ";
    }
    
    
}