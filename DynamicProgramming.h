//
// Created by thiagofsr on 03/05/18.
//

#ifndef UNTITLED_DYNAMICPROGRAMMING_H
#define UNTITLED_DYNAMICPROGRAMMING_H


#include <vector>
#include <string>

typedef std::pair<int,int> weight_value;
class DynamicProgramming {
private:
    std::vector<weight_value> arr;
    int bag_capacity;
    int **matrix;
public:

    DynamicProgramming(std::vector<weight_value> arr, int bag_capacity);
    ~DynamicProgramming();
    int knapsack_solution();
    std::vector<weight_value>products_selected();

};


#endif //UNTITLED_DYNAMICPROGRAMMING_H
