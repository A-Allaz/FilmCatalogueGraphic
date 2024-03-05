#include <iostream>
#include <fstream>

#include "../hFiles/Film.h"

using namespace std;

void Film::showFilm( int option ) const
{
    int i;
    cout << "Film : " << name << "\tNote: ";
    for (i = 0; i < 5; i++) // minimal display of the film
    {
        if (i < note) // Display of the note
        {
            cout << "0";
        } else {
            cout << "-";
        }
    }
    cout << endl;

    if (option == 2) // full display of the film
    {
        cout<< "Year : " << year << "\tDirector : " << director << endl ;
        cout << " - " << comment << " - " << endl ;
    }
    cout << endl;

    return ;
}

void Film::importFilm(ifstream & ifs, const string & separator)
{
    getline(ifs, name, separator[0]);

    ifs >> note;
    ifs.ignore(); // Ignore the separator
    
    getline(ifs, director, separator[0]);
    
    ifs >> year;
    ifs.ignore(); // Ignore the separator
    
    getline(ifs, comment);

    return;
} 

void Film::exportFilm(ofstream & ofs, const string & separator) const
{
    ofs << name << separator << note << separator << director << separator << year << separator << comment << "\n";

    return;
}

void Film::setName(string & newName)
{
    this->name = newName;
}

void Film::setNote(int & newNote)
{
    this->note = newNote;
}

void Film::setDirector(string & newDirector)
{
    this->director = newDirector;
}

void Film::setYear(int & newYear)
{
    this->year = newYear;
}

void Film::setComment(string & newComment)
{
    this->comment = newComment;
}

string Film::getName() const
{
    return this->name;
}

int Film::getNote()
{
    return(this->note);
}
        
string Film::getDirector()
{
    return(this->director);
}
        
int Film::getYear()
{
    return(this->year);
}
        
string Film::getComment()
{
    return(this->comment);
}

bool Film::operator==(const Film & other) const
{
    return((this->name == other.name) && (this->note == other.note) && (this->director == other.director) && (this->year == other.year));
}

bool Film::operator<(const Film & other) const
{
    return(!(this->note < other.note)); // atrocity but works
}

Film::Film(const Film & film)
{
#ifdef MAP
    cout << "calling <Film class constructor>" << endl;
#endif
    name = film.name;
    note = film.note;
    director = film.director;
    year = film.year;
    comment = film.comment;

    return ;
}

Film::Film(void)
{
    name = "-none-";
    note = 0;
    director = "-none-";
    year = 0;
    comment = "-none-";
}

Film::Film(const string filmName , const int filmNote , const string filmDirector , const int filmYear, const string filmComment)
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