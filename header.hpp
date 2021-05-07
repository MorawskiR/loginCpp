  
// #ifndef HEADER_H_
#pragma once
// #define HEADER_H_
#include <string>
// extern std::string pass1;//("Haslo123#");
// extern std::string pass2;//= "Haslo123#";
extern std::string specialCharacters;
bool checkspecialchar(std::string password);
bool checkifupper(std::string password);
bool checkNumber(std::string password);
bool checklenght(std::string password);

    