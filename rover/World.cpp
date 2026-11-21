//
// Created by William Wright on 10/28/26.
// Modified by Andy Carle for the final project.
//

// You may add, remove, or change these methods as long as you can explain why.
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector> //added
#include "Location.h"
#include "World.h"

//World::World() changed from :
/* DO NOT ADD BACK - MB
World::World() {}

World::World(const int size, Location& chargerLoc) {
    width = size;
    height = size;
    chargingStationLocation = chargerLoc;
};
*/ // To :

using namespace std;

const string RED = "\033[31m"; // changes text color -> red
const string RESET = "\033[0m"; // changes text color -> white
// Error Output : 
// cerr << RED << "Error Message" << RESET << endl;


World::World(){}; 
World::World(const string &filename) : width(0), height(0){ 
//World::World(const string &filename) {
    ifstream file(filename);
    if (!file) {
        cerr << RED << "Could not open " << filename << RESET << endl;
        cout << "Ending Program...";
        exit(1); // stops program entirely
    }

    string firstLine;
    getline(file, firstLine); //stores from file upto newline into 'firstLine'

    istringstream worldInfo(firstLine); // allows extraction - seperated by whitespace 'worldInfo >> "" '
                                        // standard string will not allow this behavior
    //int w, h;
    //int count = 0;
    //string extra;
    vector<string> possibleInfo; // vector of strings that may or maynot contain 
                                 // valid world info
    vector<int> dimentions;
    string word; // stores string of ASCII values seperated by 'whitespace' -> 'ASCII = 32'
                // ie. word will never contain ASCII = 32
    int count = 0;
    int test;
    while (worldInfo >> word) { // true as long as something can be stored into 'word'
        possibleInfo.push_back(word); // stores that 'word' 
                                    // values in the last-most -> [last] slot of the vector[last]
        dimentions[count] = stoi(possibleInfo[count]);
        
    }





/*
    if(!(worldInfo >> w >> h)) {
        cerr << RED << "Missing File Info: Width (WHOLE number) or Height (WHOLE number)"<< RESET << endl;
        cout << "Ending Program...";
        exit(1); // stops program entirely
    }
    if (worldInfo >> extra) {
        cerr << RED << "Extra World info recieved after posssible valid Width and Height" << RESET << endl;
        cout << "Recorded Width: " << w << endl;
        cout << "Recorded Height: " << h << endl;
        cerr << RED << "Extra Info: "<< extra << RESET << endl;

        cout << "Would you like to ingnore Extra Info and continue -- or quit?" << endl
        << "Enter 'y' to Continue: ";
        char answer;
        cin >> answer;

        if (answer != 'y') {
            cout << "Ending Program...";
            exit(1); // stops program entirely
        }

    }
    width = w;
    height = h;
*/    
    

    // TODO (will need a different parameter list)
}


bool World::isOutOfBounds(Location& location) {
    return !location.isWithinBounds(width, height);
    // getMinCoord() -> width || getMaxCoord() -> height
}

bool World::isLocationAChargingStation(Location &location) {
    return false; // TODO
}

/* Removed from not graphic version:
Location& World::getChargingStationLocation() {
    return chargingStationLocation;
}

int World::getMinCoord() {
    return 0;
}

int World::getMaxCoord() {
    return width - 1;
}
*/