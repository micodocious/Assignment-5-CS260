/*
Assignment 5
Mico Santiago
CS 260 Data Structures

Using the same code from Assignment 4, I just added a function to swap the nodes and a function to sort the list. 

1. What this does is it checks if data on the 2 adjacent nodes are inadcending order or not. if not, it swaps the data. If
2. after one loop, the largest element goes to the back, then the 2nd largest... etc
3. loop ends when all elements are started. 
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "auto-sort.cpp"

using std::cout;
using std::cin;
using std::endl;


int main(int argc, char **argv) {
    auto_sort *my_auto_sort = new auto_sort();

    //adding (element, position)
    my_auto_sort->add(20,1);      
    my_auto_sort->print();
    my_auto_sort->add(5,2);
    my_auto_sort->print();
    my_auto_sort->add(100,1);
    my_auto_sort->print();
    my_auto_sort->add(10,2);
    my_auto_sort->print();
    //sorting (bubble sort)
    my_auto_sort->sort();
    my_auto_sort->print();

    return 0;
}