#include <iostream>
#include "NPV.h"
#include "exception"

int main() {

    int selection;

    cout <<"Would you like to:" <<"\n"
         <<"(1) fill in the numbers yourself"<<"\n"
         <<"(2) use random generated examples"<<"\n";

    cin >> selection;



       if(selection == 1){

            double irate = 0;
            int duration = 0;
            vector<int> inv;

            cout <<"Please insert the investment rate" <<"\n";
            cin >> irate;

            int entry;


            cout <<"Please insert your numbers, press enter after each value, insert 'q' to finish your input"<<"\n";
            while(cin >> entry){
                inv.push_back(entry);
            }

            NPV list1{inv,irate};
            cout << list1.calcNPV();
            /*for(int i = 0; i < duration; i++){

                int entry;
                cin >> entry;
                inv.push_back(entry);

            }*/

            /*for(int i = 0; i < duration; i++){

                cout << inv.at(i)<<"\n";

            }*/
       }

       if(selection == 2){

           NPV list;

           cout <<"The calculated NPV is: " << list.calcNPV()<<"\n";
       }



}
