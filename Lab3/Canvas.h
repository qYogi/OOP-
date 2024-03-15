//
// Created by Bogdan Viziru on 15.03.2024.
//

#ifndef UNTITLED1_CANVAS_H
#define UNTITLED1_CANVAS_H


class Canvas {
    int lines;
    int columns;
    char **pixels;
public:
    // contructor will call the clear method
    Canvas(int lines, int columns);

    // set the character at the position x and y to value
    void set_pixel(int x, int y, char value);

    // tuples of x, y, value
    void set_pixels(int count, ...);

    void clear();
    void print() const;
};


#endif //UNTITLED1_CANVAS_H
