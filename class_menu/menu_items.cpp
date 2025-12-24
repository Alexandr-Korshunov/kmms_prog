#include "menu_items.hpp"
#include "menu_func.hpp"

namespace {
    const pav::MenuItem* const main_children[] = {
        &pav::EXIT,
        &pav::UNIVERSITIES
    };

    const pav::MenuItem* const univ_children[] = {
        &pav::BACK,
        &pav::SPBGU,
        &pav::ITMO,
        &pav::POLYTECH,
        &pav::LETI
    };

    const pav::MenuItem* const spbgu_children[] = {
        &pav::BACK,
        &pav::PMPU,
        &pav::MATMECH,
        &pav::LING
    };
}

pav::MenuItem pav::MAIN = {
    nullptr, pav::show_menu, main_children, 2, nullptr
};

pav::MenuItem pav::EXIT = {
    "0  I am already a student", pav::exit, nullptr, 0, nullptr
};

pav::MenuItem pav::UNIVERSITIES = {
    "1  View universities of Saint Petersburg",
    pav::universities, univ_children, 5, &pav::MAIN
};

pav::MenuItem pav::SPBGU = {
    "1  SPBGU", pav::spbgu, spbgu_children, 4, &pav::UNIVERSITIES
};

pav::MenuItem pav::ITMO = {
    "2  ITMO", pav::back, nullptr, 0, &pav::UNIVERSITIES
};

pav::MenuItem pav::POLYTECH = {
    "3  POLITEH", pav::back, nullptr, 0, &pav::UNIVERSITIES
};

pav::MenuItem pav::LETI = {
    "4  LETI", pav::back, nullptr, 0, &pav::UNIVERSITIES
};

pav::MenuItem pav::PMPU = {
    "1  Faculty PM-PU", pav::back, nullptr, 0, &pav::SPBGU
};

pav::MenuItem pav::MATMECH = {
    "2  Faculty MatMeh", pav::back, nullptr, 0, &pav::SPBGU
};

pav::MenuItem pav::LING = {
    "3  Faculty of Linguistics", pav::back, nullptr, 0, &pav::SPBGU
};

pav::MenuItem pav::BACK = {
    "0  Back", pav::back, nullptr, 0, nullptr
};



  