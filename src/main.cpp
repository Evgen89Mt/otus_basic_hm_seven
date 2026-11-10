#include <string>
#include <iostream>

#include "NewVector.h"
#include "DoubleList.h"

template<typename T>
std::ostream& operator << (std::ostream& os, const NewVector<T>& vec){

    for(const auto& pos:vec){
        os << pos <<' ';
    }

    return os;
}

template<typename T>
void print(const DoubleList<T>& list){
    for(size_t i = 0; i < list.size(); ++i){
        std::cout << list.at(i) << " ";
    }

    std::cout << std::endl;
}


int main(int argc, char* argv[]){
    std::cout <<"-----------the seventh homework-------------"<<std::endl;
    std::cout << "init vector" << std::endl;
    NewVector<int> vec(10);
    std::cout << "vector capasity: " << vec.capacity() << std::endl;

    for(size_t i = 0; i < 10; ++i){
        vec.push_back(i);
    }
    std::cout << "view container : \n" << vec << std::endl;

    return 0;
}