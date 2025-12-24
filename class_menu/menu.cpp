#include <windows.h>
#include <iostream>
#include "menu.hpp"
#include "menu_func.hpp"
#include "menu_items.hpp"

int main() {
    const pav::MenuItem* current = &pav::MAIN;
    while (true) {
        current = current->func(current);
    }
}



