//
// Created by leonw on 26.10.2021.
//

#ifndef PRAKTIKUM_1_PAD2_NPV_H
#define PRAKTIKUM_1_PAD2_NPV_H

#include "iostream"
#include "vector"

using namespace std;


class NPV {

private:

    vector<int> inv{};
    double irate;

public:

    NPV(const vector<int> &inv, double irate);
    double calcNPV();

};


#endif //PRAKTIKUM_1_PAD2_NPV_H
