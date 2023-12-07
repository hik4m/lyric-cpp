#include <iostream>
#include <vector>
#include <chrono>
#include <thread>

using namespace std;

void printWithDelay(const string& text, int delayMillis) {
    for (char character : text) {
        cout << character << flush;
        this_thread::sleep_for(chrono::milliseconds(delayMillis));
    }
}

void printLyrics(const vector<string>& lyrics, int delayBetweenLyrics, int delayPerCharacter) {
    for (const string& line : lyrics) {
        printWithDelay(line, delayPerCharacter);
        cout << endl;
        this_thread::sleep_for(chrono::milliseconds(delayBetweenLyrics));
    }
}

int main() {
    cout << "============= December - Neckdeep ===============" << endl;

    int delayBetweenLyrics = 500;  
    int delayPerCharacter = 90;   

    vector<string> allLyrics = {
        "Pain is Never Permanent but tonight is killing me",
        "I Hope you'll get your ballroom floor",
        "Your perfect house with rose red doors",
        "I'm the last thing our remember",
        "its been a long lonely december"
    };

    printLyrics(allLyrics, delayBetweenLyrics, delayPerCharacter);
    
    cout << "\n================================================" << endl;

    return 0;
}
    