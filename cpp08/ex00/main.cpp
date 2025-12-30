#include "easyfind.hpp"
#include <list>
#include <deque>

void failure(std::vector<int> v)
{
    std::vector<int>::iterator it = easyfind(v, 42);
    if (it != v.end())
        std::cout << "Trouvé: " << *it << std::endl;
    else
        std::cout << "Pas trouvé" << std::endl;   
}


void success(std::vector<int> v)
{
    std::vector<int>::iterator it = easyfind(v, 42);
    if (it != v.end())
        std::cout << "Trouvé: " << *it << std::endl;
    else
        std::cout << "Pas trouvé" << std::endl;   
}

void testWithList()
{
    std::list<int> lst;
    
    for (int i = 0; i < 42; i++)
        lst.push_back(i);
    
    std::list<int>::iterator it = easyfind(lst, 21);
    if (it != lst.end())
        std::cout << "Trouvé dans list: " << *it << std::endl;
    else
        std::cout << "Pas trouvé dans list" << std::endl;
        
    it = easyfind(lst, 100);
    if (it != lst.end())
        std::cout << "Trouvé: " << *it << std::endl;
    else
        std::cout << "100 pas trouvé dans list" << std::endl;
}

int main (void){
    std::vector<int> v;


    for (int i = 0; i < 42; i++)
        v.push_back(i);

    std::cout << "=== Tests avec vector ===" << std::endl;
    failure(v);
    v.push_back(42);
    success(v);
    
    std::cout << "\n=== Tests avec list ===" << std::endl;
    testWithList();

}