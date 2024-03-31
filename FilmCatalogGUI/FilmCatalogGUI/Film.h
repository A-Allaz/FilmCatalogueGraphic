#pragma once

#include <string>
#include <fstream>

#define DEFAULT_STR "-none-"
#define DEFAULT_INT 0

using namespace std;

ref class Film
{
    public:
        void setName(System::String^ newName);
        // change the name of the film

        void setNote(int& newNote);
        // change the film's note to newNote

        void setDirector(System::String^ newDirector);
        // change the film's director to newDirector

        void setYear(int& newYear);
        // change the film's note to newYear

        void setComment(System::String^ newComment);
        // change the film's comment to newComment

        System::String^ getName() ;
        // give the name of the film

        int getNote();
        // give the note of the film

        System::String^ getDirector();
        // give the name of the director of the film

        int getYear();
        // give the year of the film

        System::String^ getComment();
        // get the comment of the film

        Film(void);
        // default Film constructor

        Film(System::String^ filmName, int filmNote , System::String^ filmDirector , int filmYear , System::String^ filmComment );
        // complete Film constructor

        virtual ~Film();
        // Film class destructor

    protected:

        System::String^ name;        // title of the film
        int note;           // mark given to the film
        System::String^ director;
        int year;
        System::String^ comment;     // comment about the film
};

