/* #include <"TextDisplay.h">

double TextDisplay::timedDisplay() {}
int TextDisplay::lifeDisplay() {} */



/* #ifndef TEXTDISPLAY_HPP
#define TEXTDISPLAY_HPP */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//use ansi codes to change text color as running
/* class TextDisplay() {
    private:
        std::string passage;
        std::string userInput;
        std::vector<std::string> wordList;
    public:
        double timedDisplay();
        int lifeDisplay();
}; */


int main () {
    cout << "\x1b[sgoing to save cursor here" << endl;
    cout << "\x1b[37mAlright yall testing" << endl;
    cout << "\x1b[31mHey yall this is wrong" << endl;
    cout << "\x1b[32mHey yall this is right" << endl;
    cout << "\x1b[37mAlright yall back to normal" << endl;
    //cout << "\x1b[?25lI think cursor should be invisible" << endl;
    cout << "\x1b?25hOkay cursor back on" << endl;
    cout << "\x1b[ucursor should've gone back to the beginning and overwrote prev msg" << endl;
    cout << "\x1b[2J"; //clear screen

};

//#endif 