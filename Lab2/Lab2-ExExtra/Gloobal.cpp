//
// Created by Bogdan Viziru on 08.03.2024.
//

#include "Gloobal.h"
#include "movie.h"
#include <iostream>
#include <string>

using namespace std;

int compareName(Movie *M1, Movie *M2){
    cout << "Comparing Name: " << M1->getName() << " vs " << M2->getName() << endl; // Add this line
    if(M1->getName() > M2->getName())
       return 1;
    else if(M1->getName() < M2->getName())
        return -1;
    else
        return 0;
}


int compareYear(Movie *M1, Movie *M2){
    cout << "Comparing Year: " << M1->getReleaseYear() << " vs " << M2->getReleaseYear() << endl; // Add this line
    if(M1->getReleaseYear() > M2->getReleaseYear())
        return 1;
    else if(M1->getReleaseYear() < M2->getReleaseYear())
        return -1;
    return 0;
}


int compareScore(Movie *M1, Movie *M2){
    cout << "Comparing score: " << M1->getScoreIMDB() << " vs " << M2->getScoreIMDB() << endl; // Add this line
    if(M1->getScoreIMDB() > M2->getScoreIMDB())
        return 1;
    else if(M1->getScoreIMDB() < M2->getScoreIMDB())
        return -1;
    else
        return 0;
}


int compareLength(Movie *M1, Movie *M2){
    cout << "Comparing Length: " << M1->getLength() << " vs " << M2->getLength() << endl; // Add this line
    if(M1->getLength() > M2->getLength())
        return 1;
    else if(M1->getLength() < M2->getLength())
        return -1;
    else
        return 0;
}


int comparePassedYears(Movie *M1, Movie *M2){
    cout << "Comparing PY: " << M1->getPassedYears() << " vs " << M2->getPassedYears() << endl; // Add this line
    if(M1->getPassedYears() > M2->getPassedYears())
        return 1;
    else if(M1->getPassedYears() < M2->getPassedYears())
        return -1;
    else
        return 0;
}

