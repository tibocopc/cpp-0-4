#include <string>
#include <iostream>

int main ()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *addr_brain = &brain;
    std::string &ref_brain = *addr_brain;

    std::cout << "ceci est le contenu de brain :" << brain << std::endl;

    std::cout << "ceci est l'adresse de brain :" << &addr_brain << std::endl;
    std::cout << "ceci est la valeur de l'adresse de brain :" << *addr_brain << std::endl;

    std::cout << "ceci est la ref de l'addresse brain :" << ref_brain << std::endl;


}