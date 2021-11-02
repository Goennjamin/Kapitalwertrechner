//
// Created by leonw on 26.10.2021.
//

#include "NPV.h"
#include <cmath>
#include <time.h>

NPV::NPV(const vector<int> &inv, double irate) : inv(inv), irate(irate) {}

double NPV::calcNPV() {

    double result = 0;
    double calculation = 0;

    for(int i = 0; i < inv.size(); i++){

        calculation = (this->inv.at(i) / pow(1 + this->irate, i));
        // debug: cout << "yep"<<"\n";
        result += calculation;
    }

    return result;
}

NPV::NPV() {

    srand(time(NULL));
    int value;
    double rate;

    vector<int> list{};


    rate = fRand(0.01,1);
    this->irate = rate;



    for(int i = 0; i < 10; i++){

        value = rand() & 100001;
        list.push_back(value);

    }
    this->inv = list;
    cout <<"The random generated values are:"<<"\n";

    for(int i = 0; i < list.size(); i++){

        cout <<list.at(i) << "\n";

    }

    cout <<"And the random generated investment rate is: " << rate<<"\n";
}

double NPV::fRand(double fMin, double fMax) {
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}
