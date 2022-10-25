#include <iostream>
#include <vector>
#include <forward_list>
#include <list>
#include <set>

int main() {
    std::vector<int> a = {1,2,3,5,9};

    for(std::vector<int>::iterator it = a.begin(); it != a.end(); it++) {
        *it = *it + 1;
        std::cout << *it << "\n";
    }



    for (int& prvek : a){
        std::cout << prvek << "\n";
    }

    std::forward_list<int> b = {1,2,3,5,9};
    for(std::forward_list<int>::iterator it = b.begin(); it != b.end(); it++) {
        if (*it>3 && *it<5)b.insert_after(it,8);
        std::cout << *it << "\n";
    }

    std::list<int> c = {1,2,3,5,9};
    for(std::list<int>::iterator it = c.begin(); it != c.end(); it++) {
        if (*it>2 && *it<4)c.insert(std::next(it,1),20);
        std::cout << *it << "\n";
    }

    std::set<int> d = {1,2,3,5,9};
    d.insert(15);
    for(std::set<int>::iterator it = d.begin(); it != d.end(); it++) {
//        *it = *it + 1;
        std::cout << *it << "\n";
    }



return 0;
}
