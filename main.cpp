#include <iostream>
#include "NPV.h"
#include "exception"

int main(){

cin.exceptions(ios_base::failbit);


    int selection;

    cout << "Would you like to:" << "\n"
         << "(1) fill in the numbers yourself" << "\n"
         << "(2) use random generated examples" << "\n";


    try{
        cin >> selection;
    }
    catch(exception& x){
        cerr << "Error: "<< x.what()<<" leads to program execution"<<"\n";
        return 42;
    }




    if (selection == 1) {

        double irate = 0;
        int duration = 0;
        vector<int> inv;

        cout << "Please insert the investment rate" << "\n";
        try{
            cin >> irate;
        }
        catch(exception& x){
            cerr << "Error: "<< x.what()<<" leads to program execution"<<"\n";
            return 42;
        }



        int entry;
        char input;

        cout << "Please insert your numbers, press enter after each value, insert 'q' to finish your input" << "\n";

        while(input != 'q'){

            try{
                cin >> input;
            }
            catch(exception& x){
                cerr << "Error: "<< x.what()<<" leads to program execution"<<"\n";
                return 42;
            }

            if(input != 'q'){
                cin.putback(input);
                cin >> entry;

                inv.push_back(entry);
            }

        }


        /*while (cin >> entry) {
            inv.push_back(entry);
        }*/

        NPV list1{inv, irate};
        cout << "The calculated NPV is :"<<list1.calcNPV()<<"\n";

        /*for(int i = 0; i < duration; i++){

            int entry;
            cin >> entry;
            inv.push_back(entry);

        }*/

        /*for(int i = 0; i < duration; i++){

            cout << inv.at(i)<<"\n";

        }*/
    }

    if (selection == 2) {

        NPV list;

        cout << "The calculated NPV is: " << list.calcNPV() << "\n";
    }



}


