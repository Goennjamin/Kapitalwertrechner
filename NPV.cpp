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


    int invc = 0; // counter to make the initial investment negative
    for(int i = 0; i < 10; i++){

        value = rand() & 100001;

        if(invc == 0){
            list.push_back(-value);
            invc ++;
        }else{
            list.push_back(value);
        }


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


/*
 *
 * NPV Calculator online: https://www.angelone.in/npv-present-value-calculator
 *
 *  Testcases:
 *
 *  1)
 *  Initial investment: 50000
 *  Investment rate: 0,04
 *  Cashflows:
 *  2500
 *  1500
 *  -5000
 *  2000
 *  Expected result: -48945
 *  Result:
 *  2)
 *  Initial investment: 250.000
 *  Investment rate: 0,25
 *  Cashflows:
 *  15000
 *  30000
 *  -250
 *  15
 *  125000
 *  Expected result: -177962
 *  Result:
 *  3)
 *  Initial investment: 5
 *  Investment rate: 1
 *  Cashflows:
 *  100000
 *  200000
 *  -50000
 *  Expected result: 93745
 *  Result:
 *  4)
 *  Initial investment: 700000
 *  Investment rate: 0.75
 *  Cashflows:
 *  1000000
 *  Expected result: -128571
 *  Result:
 *  5)
 *  Initial investment: 15
 *  Investment rate: 0.01
 *  Cashflows:
 *  -750000
 *  -800000
 *  1.200.000
 *  Expected result: -362118
 *  Result:
 *
 *
 */