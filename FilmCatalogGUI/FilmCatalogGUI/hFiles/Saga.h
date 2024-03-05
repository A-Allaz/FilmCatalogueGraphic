#include <iostream>
#include "Catalogue.h"
#include "Film.h"

using namespace std;

class Saga : public Catalogue
{
    public:
        virtual void addFilm(const Film & newFilm);
            //add a Film to the saga
        
        void showSaga() const;
            //display the saga

        Saga(string & sagaTitle);
            //Saga class default constructor

        virtual ~Saga();
            //Saga class default destructor

    private:
        string title;
        float globalNote;
};