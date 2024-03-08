//
// Created by Bogdan Viziru on 08.03.2024.
//

#include "movie.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void Movie::setName(const string &s) {
    if(s.length()<=256)
        movieName = s;
    else
        cout << "Movie name exceeds max length of 256" << endl;
}

string Movie::getName()  {
    return movieName;
}


void Movie::setReleaseYear(const int x) {
    releaseDate = x;
}
int Movie::getReleaseYear() {
    return releaseDate;
}


void Movie::setScoreIMDB(const double x) {
    scoreIMDB = x;
}

double Movie::getScoreIMDB() {
    return scoreIMDB;
}

void Movie::setLength(const int x) {
    length = x;
}

double Movie::getLength() {
    return length;
}

/*void Movie::setPassedYears(int currentYear) {
    passedYears = currentYear - releaseDate;
}*/

int Movie::getPassedYears() {
    const int currentYear = 2024;
    passedYears = currentYear - releaseDate;
    return passedYears;
}

void MovieSeries::Init() {
    count = 0;
}

bool MovieSeries::addEpisode(Movie* ep){
    if(count <16){
        seriesList[count++] = ep;
        return true;
    }
    else{
        return false; //limit reached
    }


}

void MovieSeries::display(){
    for(int i=0; i <count ;i++)
    {
        cout << seriesList[i]->getName() << endl;
        cout << seriesList[i]->getReleaseYear() << endl;
        cout << seriesList[i]->getScoreIMDB() << endl;
        cout << seriesList[i]->getLength() << endl;
    }
}

bool comparePassedYearsDescending(Movie *M1, Movie *M2) {
    return M1->getPassedYears() < M2->getPassedYears();
}

void MovieSeries::sortByOld() {
    sort(seriesList, seriesList+count, comparePassedYearsDescending);
}
