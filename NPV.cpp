//
// Created by leonw on 26.10.2021.
//

#include "NPV.h"
#include "math.h"

NPV::NPV(const vector<int> &inv, double irate) : inv(inv), irate(irate) {}

double NPV::calcNPV() {

    double result = 0;
    double calculation;

    for(int i = 0; i < inv.size(); i++){

        calculation = (this->inv.at(i) / pow(this->irate, i+1));

        result += calculation;
    }

    return result;
}
