//
// Created by Bogdan Viziru on 08.03.2024.
//

#ifndef MOVIE_GLOOBAL_H
#define MOVIE_GLOOBAL_H
#pragma once
#include "movie.h"

int compareName(Movie *M1, Movie *M2);
int compareYear(Movie *M1, Movie *M2);
int compareScore(Movie *M1, Movie *M2);
int compareLength(Movie *M1, Movie *M2);
int comparePassedYears(Movie *M1, Movie *M2);
bool comparePassedYearsDescending(Movie *M1,Movie *M2);

#endif //MOVIE_GLOOBAL_H
