//
// Created by giuseppe on 30/03/2020.
//

#include "utils.h"

void  sistema(const std::string& value){
    if(value == "PAUSE"){
        std::cout << "Press Enter..." << std::endl;
        std::cin.ignore();
    }
}