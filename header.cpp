
#include "header.hpp"
#include <iostream>
#include <string>
#include <iostream>
#include <ctype.h>
#include <stdio.h>



bool checkifupper(std::string password)
{
    for(const auto & el : password)
    {
           if (isupper(el))
           {
              return true;
           }
    }
    return false;
}