//
// Created by leonw on 26.10.2021.
//

#include "NPV.h"
#include "math.h"

NPV::NPV(const vector<int> &inv, double irate) : inv(inv), irate(irate) {}

double NPV::calcNPV() {

    double result = 0;
    double calculation = 0;

    for(int i = 0; i < inv.size(); i++){

        calculation = (this->inv.at(i) / pow(1 + this->irate, i+1));
        // debug: cout << "yep"<<"\n";
        result += calculation;
    }

    return result;
}
