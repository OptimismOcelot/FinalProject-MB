//
// Created by William Wright on 10/28/26.
// Modified by Andy Carle for the final project.
//

#ifndef CSCI1300_CS1_WORLD_H
#define CSCI1300_CS1_WORLD_H

#include <string> // Added
#include <vector> // Added
#include "Location.h"

using namespace std;

// You may add, remove, or change these methods as long as you can explain why.

class World {
    int width;
    int height;

    // Removed : Location chargingStationLocation; (DO NOT ADD BACK - MB)

public:
    // TODO: Use an appropriate constructor to initialize from the world.txt file.

    World();
    //World(const string& filename) : width(), height() {};
    World(const string& filename);




    bool isOutOfBounds(Location& location);
    bool isLocationAChargingStation(Location &location);
    int getWidth() { return width;}
    int getHeight() { return height;}

    /*Removed or Altered (DO NOT CHANGE BACK - MB):
    World(const int size, Location& chargerLoc);

    bool isOutOfBounds(Location& location);
    Location& getChargingStationLocation();
    int getMinCoord();
    int getMaxCoord();
    */
};

#endif //CSCI1300_CS1_WORLD_H
