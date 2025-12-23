#include <iostream>
#include <clocale>
#include "menu.hpp"
#include "menu_func.hpp"
#include "menu_items.hpp"

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    const pav::MenuItem* current = &pav::MAIN;
    do {
        current = current->func(current);
    } while (true);

    return 0;
}
