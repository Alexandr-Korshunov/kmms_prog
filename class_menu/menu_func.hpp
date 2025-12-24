#pragma once
#include "menu.hpp"

namespace pav {
    const MenuItem* show_menu(const MenuItem* current);
    const MenuItem* universities(const MenuItem* current);
    const MenuItem* spbgu(const MenuItem* current);

    const MenuItem* back(const MenuItem* current);
    const MenuItem* exit(const MenuItem* current);
}

