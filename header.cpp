
#include "header.hpp"
#include <iostream>
#include <string>
#include <iostream>
#include <ctype.h>
#include <stdio.h>

 std::string specialCharacters = " !#$%'()*+,-./:;<=>?@[\\]^_`{|}~";

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

bool checkspecialchar(std::string password)
{
    for(const auto &el : password)
    {
        for(const auto &  member : specialCharacters )
            {
                if(el == member)
                    return true;
            }
    }
    return false;
}

bool checkNumber(std::string password)
{
    for(const auto &el : password)
        {
            if (isdigit(el))
            {
                return true;
            }
            
        }
        return false;
}
bool checklenght(std::string password)
{
    if (password.length() > 7 )
     return true;
    else return false;
    
}