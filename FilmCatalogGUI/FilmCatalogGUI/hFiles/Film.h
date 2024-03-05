#pragma once
#include <string>
#include <fstream>

#define DEFAULT_STR "-none-"
#define DEFAULT_INT 0

using namespace std;

class Film
{
    public :
        void showFilm ( int option ) const;
            // show the content of the Film class
            // option = 0: basic display (Name, Note)
            // option = 1: complete display (+ Director, Year, Comment)
        
        void importFilm(ifstream & ifs, const string & separator);
            // import a Film from a file (ifs)

        void exportFilm(ofstream & ofs, const string & separator) const;
            // export a Film to a file (ofs)
        
        void setName(string & newName);
            // change the name of the film

        void setNote(int & newNote);
            // change the film's note to newNote

        void setDirector(string & newDirector);
            // change the film's director to newDirector

        void setYear(int & newYear);
            // change the film's note to newYear
        
        void setComment(string & newComment);
            // change the film's comment to newComment
        
        string getName() const;
            // give the name of the film

        int getNote();
            // give the note of the film
        
        string getDirector();
            // give the name of the director of the film
        
        int getYear();
            // give the year of the film
        
        string getComment();
            // get the comment of the film
        
        bool operator==(const Film & other) const;
            // test if the current film and "other" are the same (except for the comment)
        
        bool operator<(const Film & other) const;
            // test if the note of "other" is greater than the one of the current film

        Film(const Film & film);
            // copy constructor
        
        Film(void);
            // default Film constructor

        Film (const string filmName, const int filmNote = DEFAULT_INT, const string filmDirector = DEFAULT_STR, const int filmYear = DEFAULT_INT, const string filmComment = DEFAULT_STR);
            // complete Film constructor

        virtual ~Film ();
            // Film class destructor

    protected:

        string name;        // title of the film
        int note;           // mark given to the film
        string director;
        int year;
        string comment;     // comment about the film
};