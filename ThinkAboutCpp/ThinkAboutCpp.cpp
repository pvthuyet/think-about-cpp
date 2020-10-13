// ThinkAboutCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "inheritant_is_the_base_class_of_evil.h"
#include <algorithm>

object_t func()
{
    object_t result = 5;
    return result;
}

int main()
{
    document_t doc;
    doc.emplace_back(0);
    doc.emplace_back(std::string("hello"));
    doc.emplace_back(doc);
    doc.emplace_back(my_class_t{});

    //std::reverse(doc.begin(), doc.end());
    draw(doc, std::cout, 0);
































































































































































































}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
