//
// Created by Bogdan Viziru on 15.03.2024.
//

#include <cstdarg>
#include "Canvas.h"
#include <iostream>
using namespace std;

    // Constructor
   Canvas:: Canvas(int lines, int columns) : lines(lines), columns(columns) {
        pixels = new char*[lines];
        for (int i = 0; i < lines; ++i) {
            pixels[i] = new char[columns];
        }
        clear();
    }

    // set char la poz x & y
    void Canvas::set_pixel(int x, int y, char value) {
        if (x >= 0 && x < lines && y >= 0 && y < columns) {
            pixels[x][y] = value;
        }
    }

    // tuples of x, y, value
    void Canvas::set_pixels(int count, ...) {
        va_list args;
        va_start(args, count);
        for (int i = 0; i < count; ++i) {
            int x = va_arg(args, int);
            int y = va_arg(args, int);
            char value = va_arg(args, int); //promovare
            set_pixel(x, y, value);
        }
        va_end(args);
    }

    void Canvas:: clear() {
        for (int i = 0; i < lines; ++i) {
            for (int j = 0; j < columns; ++j) {
                pixels[i][j] = ' ';
            }
        }
    }

    void Canvas::print() const {
        for (int i = 0; i < lines; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout << pixels[i][j];
            }
            cout << endl;
        }
    }
