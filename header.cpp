
#include "header.hpp"
#include <iostream>

 bool checkCapitalLetter(std::string pass)
 {
    for(const auto & el : pass)
        {
            if(isupper(el))
            {
                return true;
            }
        }
    return false;
 }  

