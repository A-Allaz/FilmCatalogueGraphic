#include "hFiles/Saga.h"

void addFilm(const Film & newFilm)
{
    filmList.push_back(newFilm); // add newFilm  at the end of the vector
    nbFilms++;
    globalNote = ((globalNote * (nbFilms - 1)) + newFilm.getNote()) / nbFilms;

    return;
}

void showSaga() const
{
    cout << "Saga title : \r\n" << this->sagaTitle << endl << endl;
    for(int i = 0; i < this->nbFilms; i++)
    {
        (this->filmList[i]).showFilm(1);
    }
    cout << "Global Note :" << this->globalNote << endl;
}

Saga::Saga(string & sagaTitle)
{
#ifdef MAP
    cout << "calling <Saga class constructor>" << endl;
#endif
    title = sagaTitle;
    globalNote = 0;
}

virtual Saga::~Saga()
{
#ifdef MAP
    cout << "calling <Saga class destructor>" << endl;
#endif
    
}