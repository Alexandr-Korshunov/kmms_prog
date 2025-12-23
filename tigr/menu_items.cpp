#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const qwe::MenuItem qwe::STUDY_ALGEBRA_SUMM = {
    "1 - Хочу научиться складывать!", qwe::study_algebra_summ, &qwe::STUDY_ALGEBRA
};
const qwe::MenuItem qwe::STUDY_ALGEBRA_SUBSTRACT = {
    "2 - Хочу научиться вычитать!", qwe::study_algebra_substract, &qwe::STUDY_ALGEBRA
};
const qwe::MenuItem qwe::STUDY_ALGEBRA_MULTIPLY = {
    "3 - Хочу научиться умножать!", qwe::study_algebra_multiply, &qwe::STUDY_ALGEBRA
};
const qwe::MenuItem qwe::STUDY_ALGEBRA_DEVIDE = {
    "4 - Хочу научиться делить!", qwe::study_algebra_devide, &qwe::STUDY_ALGEBRA
};
const qwe::MenuItem qwe::STUDY_ALGEBRA_GO_BACK = {
    "0 - Вернуться назад", qwe::study_go_back, &qwe::STUDY_ALGEBRA
};

namespace {
    const qwe::MenuItem* study_algebra_children[] = {
        &qwe::STUDY_ALGEBRA_GO_BACK,
        &qwe::STUDY_ALGEBRA_SUMM,
        &qwe::STUDY_ALGEBRA_SUBSTRACT,
        &qwe::STUDY_ALGEBRA_MULTIPLY,
        &qwe::STUDY_ALGEBRA_DEVIDE,
    };
    const int study_algebra_size = sizeof(study_algebra_children) / sizeof(study_algebra_children[0]);
}

const qwe::MenuItem qwe::STUDY_CALCULUS_DIFF = {
    "1 - Хочу изучить дифференциальное счисление!", qwe::study_calculus_diff, &qwe::STUDY_CALCULUS
};
const qwe::MenuItem qwe::STUDY_CALCULUS_INTEGRAL = {
    "2 - Хочу изучить интегральное счисление!", qwe::study_calculus_integral, &qwe::STUDY_CALCULUS
};
const qwe::MenuItem qwe::STUDY_CALCULUS_GO_BACK = {
    "0 - Вернуться назад", qwe::study_go_back, &qwe::STUDY_CALCULUS
};

namespace {
    const qwe::MenuItem* study_calculus_children[] = {
        &qwe::STUDY_CALCULUS_GO_BACK,
        &qwe::STUDY_CALCULUS_DIFF,
        &qwe::STUDY_CALCULUS_INTEGRAL,
    };
    const int study_calculus_size = sizeof(study_calculus_children) / sizeof(study_calculus_children[0]);
}

const qwe::MenuItem qwe::STUDY_ALGEBRA = {
    "1 - Хочу изучить алгебру!", qwe::show_menu, &qwe::STUDY, study_algebra_children, study_algebra_size
};
const qwe::MenuItem qwe::STUDY_CALCULUS = {
    "2 - Хочу изучить математический анализ!", qwe::show_menu, &qwe::STUDY, study_calculus_children, study_calculus_size
};
const qwe::MenuItem qwe::STUDY_GO_BACK = {
    "0 - Вернуться назад", qwe::study_go_back, &qwe::STUDY
};

namespace {
    const qwe::MenuItem* study_children[] = {
        &qwe::STUDY_GO_BACK,
        &qwe::STUDY_ALGEBRA,
        &qwe::STUDY_CALCULUS,
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const qwe::MenuItem qwe::STUDY = {
    "1 - Хочу учиться математике!", qwe::show_menu, &qwe::MAIN, study_children, study_size
};
const qwe::MenuItem qwe::EXIT = {
    "0 - Я лучше пойду посплю...", qwe::exit, &qwe::MAIN
};

namespace {
    const qwe::MenuItem* main_children[] = {
        &qwe::EXIT,
        &qwe::STUDY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const qwe::MenuItem qwe::MAIN = {
    nullptr, qwe::show_menu, nullptr, main_children, main_size
};
