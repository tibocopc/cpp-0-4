#include "Mutantstack.hpp"

int main (void){
    MutantStack<int> a;
    a.push(42);
    a.push(21);
    a.push(651651);
    a.push(54211);
    a.push(54215);
    a.push(22);
    
    
    std::cout << "===========stack de int============" << std::endl;
    for (MutantStack<int>::iterator it = a.begin(); it != a.end(); ++it)
        std::cout << *it << std::endl;

    MutantStack<std::string> b;
    b.push("salut");
    b.push("voici");
    b.push("un");
    b.push("exemple");
    std::cout << '\n' << "===========stack de str============" << std::endl;
    for (MutantStack<std::string>::iterator it = b.begin(); it != b.end(); ++it)
        std::cout << *it << std::endl;
    }