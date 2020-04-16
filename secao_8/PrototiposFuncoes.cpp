//
// Created by giuseppe on 16/04/2020.
//
#include <iostream>

int soma(int n1, int n2);

int main(int argc, char** argv){
    int n1{10}, n2{20};
    std::cout << n1 << " + " << n2 << " = " << soma(n1,n2) << std::endl;
    return 0;
}

int soma(int n1, int n2){
    return n1+n2;
}