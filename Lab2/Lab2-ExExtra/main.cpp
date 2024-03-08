#include <iostream>
#include "movie.h"
#include "Gloobal.h"

int main() {
    Movie ep5;
    ep5.setName("Star Wars: Episode V - The Empire Strikes Back");
    ep5.setScoreIMDB(8.3);
    ep5.setReleaseYear(1980);
    ep5.setLength(124);

    Movie ep4;
    ep4.setName("Star Wars: Episode IV - A New Hope");
    ep4.setScoreIMDB(8.6);
    ep4.setReleaseYear(2007);
    ep4.setLength(121);

    Movie ep6;
    ep6.setName("Star Wars: Episode VI - Return of the Jedi");
    ep6.setScoreIMDB(8.3);
    ep6.setReleaseYear(1983);
    ep6.setLength(131);


    cout << "ep4, ep5 comparison: " << endl;
    //name comp
    int nameComparisonResult = compareName(&ep4, &ep5);  // Store the result
    if(nameComparisonResult == 1)
        cout << "name       : ep4 " << endl;
    else if(nameComparisonResult == -1)
        cout << "name        : ep5 " << endl;
    else
        cout << "name        : equal " << endl;

    cout << endl;

    // Year comp
    int yearComparisonResult = compareYear(&ep4, &ep5);
    if (yearComparisonResult == 1)
        cout << "year        : ep4 " << endl;
    else if (yearComparisonResult == -1)
        cout << "year        : ep5 " << endl;
    else
        cout << "year        : equal " << endl;

    cout << endl;

// Score comp
    int scoreComparisonResult = compareScore(&ep4, &ep5);
    if (scoreComparisonResult == 1)
        cout << "score       : ep4 " << endl;
    else if (scoreComparisonResult == -1)
        cout << "score       : ep5 " << endl;
    else
        cout << "score       : equal " << endl;

    cout << endl;

// Length comp
    int lengthComparisonResult = compareLength(&ep4, &ep5);
    if (lengthComparisonResult == 1)
        cout << "length      : ep4 " << endl;
    else if (lengthComparisonResult == -1)
        cout << "length      : ep5 " << endl;
    else
        cout << "length      : equal " << endl;

    cout << endl;

// Passed Years comp
    int passedYearsComparisonResult = comparePassedYears(&ep4, &ep5);
    if (passedYearsComparisonResult == 1)
        cout << "passed years: ep4 " << endl;
    else if (passedYearsComparisonResult == -1)
        cout << "passed years: ep5 " << endl;
    else
        cout << "passed years: equal " << endl;


    MovieSeries series{};
    series.Init();
    series.addEpisode(&ep5);
    series.addEpisode(&ep4);
    series.addEpisode(&ep6);

    series.sortByOld();
    series.display();
}
