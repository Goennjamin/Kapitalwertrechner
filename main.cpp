#include <iostream>
#include "NPV.h"
#include "exception"

int main() {

    int selection;

    cout <<"Would you like to:" <<"\n"
         <<"(1) fill in the numbers yourself"<<"\n"
         <<"(2) use random generated examples"<<"\n";

    cin >> selection;

    switch(selection){

        case 1:

            double irate = 0;
            int duration = 0;
            vector<int> inv;

            cout <<"Please insert the inventment rate" <<"\n";
            cin >> irate;
            irate = irate / 100;



            cout <<"Please tell me how many numbers you want to insert" << "\n";
            cin >> duration;

            cout <<"Please insert your numbers, press enter after each value";
            for(int i = 0; i < duration; i++){

                int entry;
                cin >> entry;
                inv.push_back(entry);

            }
                NPV list1{inv,irate};
                cout << list1.calcNPV();
            /*for(int i = 0; i < duration; i++){

                cout << inv.at(i)<<"\n";

            }*/

    }




}
