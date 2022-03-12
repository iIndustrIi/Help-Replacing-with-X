// Replaced by X.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

int main() {
    string data;
    cout << "Enter input (in this order: name; Social Security Number in the format of 000-00-0000; and, without spaces, the User ID and password) : ";
    getline(cin, data);

    cout << data << endl;
    int ssn_start_index = 0;
    int ssn_end_index = 0;
    int pass_start_index = 0;
    int pass_end_index = data.size() - 1;
    int space_count = 0;


    for (int i = 0; i < data.size(); i++)
    {

        if (data.at(i) == ' ')
        {
            space_count++;
          
            if (space_count == 2)
            {
                ssn_start_index = i + 1;
            }

            if (space_count == 3)
            {
                ssn_end_index = i - 1;
            }

            if (space_count == 4)
            {
                pass_start_index = i + 1;
            }
        }
    }

    for (int pos = ssn_start_index; pos <= ssn_end_index; pos++)
            data.replace(pos, 1, "x");
    for (int pos = pass_start_index; pos <= pass_end_index; pos++)
            data.replace(pos, 1, "x");

    cout << data;

    return 0;
}



