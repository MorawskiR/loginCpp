
#include <iostream>
#include <string>
#include "header.hpp"
int main()
{
    std::string haslo1;
    std::string haslo2;
    std::cout<<"podaj haslo1: ";
    std::cin>>haslo1;
    std::cout<<"podaj haslo1: ";
    std::cin>>haslo2;
    
    if(checkifupper(haslo1))
    {
        std::cout<<"posiada duza ";
    }
    std::cout<<"\n";
    if(checkspecialchar(haslo1))
    {
        std::cout<<"posiada special ";
    }
        std::cout<<"\n";


    if(checkNumber(haslo1))
    {
        std::cout<<"posiada liczbe ";
    }
        std::cout<<"\n";


    if (checklenght(haslo1))
    {
        std::cout<<"dlugosc ok ";
    }   
}