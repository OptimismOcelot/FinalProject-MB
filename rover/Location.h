//
// Created by William Wright on 10/28/26.
//

#ifndef CSCI1300_CS1_LOCATION_H
#define CSCI1300_CS1_LOCATION_H
#include <string>
using namespace std;

class Location {
    int x = 0;
    int y = 0;

public:
    Location();
    Location(int xPos, int yPos);
    // x_pos -> xPos || y_pos -> yPos

    void add(Location& other);
    void incX();
    void decX();
    void incY();
    void decY();
    bool equals(Location &other);
    //~~~~~~~~~~~Minimal Addition~~~~~~~~~~~
    string toString();
    // True if this location is inside a grid that is width cells wide and
    // height cells tall, with (0, 0) at the top left.
    bool isWithinBounds(int width, int height);
    // minCoord -> width || maxCoord -> height

    int getX();
    int getY();
    //~~~~~~~~~~~~~~Minimal Addition~~~~~~~~~~~~~~~~
};

#endif //CSCI1300_CS1_LOCATION_H
