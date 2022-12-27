
#include <iostream>
#include <cmath>
#include <SDL.h>
#include <Stdio.h>
#include "Robot.h"

#define pi 3.142

using namespace std;


int main(int argc, char* argv[]) {
    int number, option,run = 0;
    cout << "Enter number of segments for robot" << endl;
    cin >> number;
    Robot carry_out(number);
    // Repeats giving option until the program ends
    while (run == 0) {
        cout << "Choose option 1 to add segments" << endl;
        cout << "Choose option 2 to take out segment(s)" << endl;
        cout << "Choose option 3 to set segments to default position" << endl;
        cout << "Choose option 4 to do forward kinematics" << endl;
        cout << "Choose option 5 to graph segments" << endl;
        cout << "Choose option 6 to End program" << endl;

        cin >> option;
        while (option < 1 || option>6) {
            cout << "Enter a valid option" << endl;
            cin >> option;
        }
        if (option == 1) {
            carry_out.Add();
        }
        else if (option == 2) {
            carry_out.takeOut();
        }
        else if (option == 3) {
            carry_out.set_Default_Position();
        }
        else if (option == 4) {
            carry_out.forwardKinematics();
        }
        else if (option == 5)
            carry_out.plotStart(); 
        else if (option == 6) {
            cout << "Ending program..." << endl;
            run++;
        }
    }
    return 0;
}