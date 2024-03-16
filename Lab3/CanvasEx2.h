//
// Created by Bogdan Viziru on 16.03.2024.
//

#ifndef UNTITLED1_CANVASEX2_H
#define UNTITLED1_CANVASEX2_H


class CanvasEx2 {
    // add private data members
    int width, height;
    char **matrix;

public:
    CanvasEx2(int width,int height);
    void DrawCircle(int x, int y, int ray, char ch);
    void FillCircle(int x, int y, int ray, char ch);
    void DrawRect(int left, int top, int right, int bottom, char ch);
    void FillRect(int left, int top, int right, int bottom, char ch);
    void SetPoint(int x, int y, char ch);
    void DrawLine(int x1, int y1, int x2, int y2, char ch);
    void Print(); // shows what was printed
    void Clear(); // clears the canvas
};


#endif //UNTITLED1_CANVASEX2_H
