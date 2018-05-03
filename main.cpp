#include <iostream>
#include <fstream>
#include "DynamicProgramming.h"

int main(int argc, char *argv[]) {

    if(argc<2){
        std::cout<<"Wrong or missing arguments. Exiting program\n";
        exit(1);

    }

    std::string path = argv[1];
    std::fstream file(path,std::ios::in);

    int firstArg,secondArg;

    file >> firstArg >> secondArg;
    int size = firstArg;
    int bag_capacity  = secondArg;

    std::vector<weight_value> inputs;

    while(size--){
        file >> firstArg >> secondArg;
        inputs.push_back(weight_value(firstArg,secondArg));
    }

    file.close();

    DynamicProgramming dynamicProgramming(inputs,bag_capacity);
    std::cout <<"Valor: " << dynamicProgramming.knapsack_solution() << "\n";
    std::cout << "Produtos Escolhidos:\n";
    for(auto v:dynamicProgramming.products_selected()){
        std::cout << "\tWeight:: " <<v.first << " Value: " << v.second <<"\n";
    }
    return 0;
}