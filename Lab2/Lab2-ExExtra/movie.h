//
// Created by Bogdan Viziru on 08.03.2024.
//

#ifndef MOVIE_MOVIE_H
#define MOVIE_MOVIE_H
#include <iostream>
#include <string>
using namespace std;


class Movie {
    string movieName;
    int releaseDate, passedYears, length;
    double scoreIMDB;
public:
    void setName(const string& s);
    string getName();

    void setReleaseYear(int const x);
    int getReleaseYear();

    void setScoreIMDB(double const x);
    double getScoreIMDB();

    void setLength(int const x);
    double getLength();

   // void setPassedYears(int curentYear = 2024);
    int getPassedYears();
};

class MovieSeries{
    int count;
    Movie* seriesList[16];
public:
    void Init();

    bool addEpisode(Movie* ep);

    void display();
    void sortByOld();


};



#endif //MOVIE_MOVIE_H
