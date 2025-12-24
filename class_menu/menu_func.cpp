#include "menu_func.hpp"
#include <iostream>
#include <cstdlib>

namespace {
    const pav::MenuItem* print_children(const pav::MenuItem* current) {
        for (int i = 1; i < current->children_count; i++)
            std::cout << current->children[i]->title << std::endl;

        std::cout << current->children[0]->title << std::endl;
        std::cout << "Input field> ";

        int input;
        std::cin >> input;
        std::cout << std::endl;

        return current->children[input];
    }
}

const pav::MenuItem* pav::show_menu(const MenuItem* current) {
    std::cout << "Главное меню\n";
    return print_children(current);
}

const pav::MenuItem* pav::universities(const MenuItem* current) {
    std::cout << "Universities of Saint Petersburg\n";
    return print_children(current);
}

const pav::MenuItem* pav::spbgu(const MenuItem* current) {
    std::cout << "Saint Petersburg State University\n";
    return print_children(current);
}

const pav::MenuItem* pav::back(const MenuItem* current) {
    return current->parent;
}

const pav::MenuItem* pav::exit(const MenuItem*) {
    std::exit(0);
}

