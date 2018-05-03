//
// Created by thiagofsr on 03/05/18.
//

#include <iostream>
#include <algorithm>
#include "DynamicProgramming.h"


int max(int a, int b){
    return a>b?a:b;
}

DynamicProgramming::DynamicProgramming(std::vector<weight_value> arr, int bag_capacity) {
    this->arr = arr;
    this->bag_capacity = bag_capacity;
    this->matrix = new int*[arr.size()+1];
    for(int i = 0; i < arr.size()+1;i++)
        matrix[i] = new int[bag_capacity+1];

}

int DynamicProgramming::knapsack_solution() {
    
    for (int i = 0; i <= arr.size(); i++)
    {
        for (int w = 0; w <= bag_capacity; w++)
        {
            if (i==0 || w==0)
                matrix[i][w] = 0;
            else if (arr.at(i-1).first <= w) {
                //it means the item has been selected
                matrix[i][w] = max(arr.at(i - 1).second + matrix[i - 1][w - arr.at(i - 1).first], matrix[i - 1][w]);
            }
            else// the item doesnt fit, grab the last best result from previous item
                matrix[i][w] = matrix[i-1][w];
        }
    }

    return matrix[arr.size()][bag_capacity];
}

DynamicProgramming::~DynamicProgramming() {
    for(int i = 0; i < arr.size()+1;i++){
        delete []matrix[i];
    }
    delete[]matrix;

}

std::vector<weight_value> DynamicProgramming::products_selected() {
    unsigned long i;
    int j;
    i = arr.size();
    j = bag_capacity;
    int current = matrix[i][j];
    std::vector<weight_value> itemsSelected;

    while(current!=0){
        if(current != matrix[i-1][j]){
            //it means the current item hat been selected, adding to list
            j -= arr.at(i-1).first;
            itemsSelected.push_back(arr.at(i-1));


        }
        i--;
        current=matrix[i][j];
    }
    std::reverse(itemsSelected.begin(),itemsSelected.end());
    return itemsSelected;

}
