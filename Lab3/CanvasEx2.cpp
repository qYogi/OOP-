//
// Created by Bogdan Viziru on 16.03.2024.
//

#include "CanvasEx2.h"
#include <iostream>
using namespace std;

CanvasEx2::CanvasEx2(int width, int height) {
    this->width=width;
    this->height=height;
    matrix = new char*[height];
        for (int i = 0; i < height; ++i) {
            matrix[i]=new char [width];
            for (int j = 0; j < width; ++j) {
                matrix[i][j]= ' '; //initializare cu spatii
            }
        }
}

void CanvasEx2::SetPoint(int x, int y, char ch) {
    if(x >= 0 && x < width&& y>= 0 && y <height){
        matrix[y][x] =ch;
    }
}

//mid-point algortihm
void CanvasEx2::DrawCircle(int x, int y, int ray, char ch) {
    int x0 = ray;
    int y0 = 0;
    int error =0;
    while (x0 >= y0){
        SetPoint(x+x0, y+y0, ch);
        SetPoint(x+y0, y+x0, ch);
        SetPoint(x-y0, y+x0, ch);
        SetPoint(x-x0, y+y0, ch);
        SetPoint(x-x0, y-y0, ch);
        SetPoint(x-y0, y-x0, ch);
        SetPoint(x+y0, y-x0, ch);
        SetPoint(x+x0, y-y0, ch);
        if (error<=0){
            y0++;
            error +=2*y0 +1;
        }
        if(error>0){
            x0--;
            error-=2*x0+1;
        }
    }
}

void CanvasEx2::FillCircle(int x, int y, int ray, char ch) {
    int x0 = ray;
    int y0 = 0;
    int error = 0;

    while (x0 >= y0) {
        DrawRect(x - x0, y + y0, x + x0, y + y0, ch);
        DrawRect(x - y0, y + x0, x + y0, y + x0, ch);
        DrawRect(x - y0, y - x0, x + y0, y - x0, ch);
        DrawRect(x - x0, y - y0, x + x0, y - y0, ch);

        if (error <= 0) {
            y0++;
            error += 2 * y0 + 1;
        }

        if (error > 0) {
            x0--;
            error -= 2 * x0 + 1;
        }
    }
}

void CanvasEx2::DrawRect(int left, int top, int right, int bottom, char ch) {
    for (int x = left; x <= right; ++x) {
        SetPoint(x, top, ch);
        SetPoint(x, bottom, ch);
    }
    for (int y = top + 1; y < bottom; ++y) {
        SetPoint(left, y, ch);
        SetPoint(right, y, ch);
    }
}

void CanvasEx2::FillRect(int left, int top, int right, int bottom, char ch) {
    for (int y = top; y <= bottom; ++y) {
        for (int x = left; x <= right; ++x) {
            SetPoint(x, y, ch);
        }
    }
}


void CanvasEx2::Print() {
    for(int i=0; i<height;++i){
        for(int j=0;j<width;j++){
            cout<< matrix[i][j];
        }
        cout << endl;
    }

}


void CanvasEx2::Clear() {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            matrix[i][j] = ' ';
        }
    }
}