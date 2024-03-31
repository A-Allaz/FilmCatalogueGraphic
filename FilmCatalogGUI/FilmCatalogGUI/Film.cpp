#include "Film.h"
#include <iostream>
#include <fstream>

using namespace std;

void Film::setName(System::String^ newName)
{
    this->name = newName;
}

void Film::setNote(int& newNote)
{
    this->note = newNote;
}

void Film::setDirector(System::String^ newDirector)
{
    this->director = newDirector;
}

void Film::setYear(int& newYear)
{
    this->year = newYear;
}

void Film::setComment(System::String^ newComment)
{
    this->comment = newComment;
}

System::String^ Film::getName()
{
    return this->name;
}

int Film::getNote()
{
    return(this->note);
}

System::String^ Film::getDirector()
{
    return(this->director);
}

int Film::getYear()
{
    return(this->year);
}

System::String^ Film::getComment()
{
    return(this->comment);
}

Film::Film(void)
{
    name = "-none-";
    note = 0;
    director = "-none-";
    year = 0;
    comment = "-none-";
}

Film::Film(System::String^ filmName, int filmNote, System::String^ filmDirector,  int filmYear, System::String^ filmComment)
{
#ifdef MAP
    cout << "calling <Film class copy constructor>" << endl;
#endif
    name = filmName;
    note = filmNote;
    director = filmDirector;
    year = filmYear;
    comment = filmComment;
}

Film::~Film()
{
#ifdef MAP
    cout << "calling <Film class destructor>" << endl;
#endif
}
