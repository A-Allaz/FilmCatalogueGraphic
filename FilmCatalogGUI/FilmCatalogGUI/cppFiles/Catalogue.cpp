#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "../hFiles/Catalogue.h"

void Catalogue::showCatalogue(int option) const
{
    for (int i = 0; i < this->nbFilms; i++)
    {
        (this->filmList[i]).showFilm(option);
    }
}

void Catalogue::addFilm(const Film & newFilm)
{
    filmList.push_back(newFilm); // add newFilm  at the end of the vector
    nbFilms++;

    return;
}

void Catalogue::importCatalogue(ifstream & ifs, const string & separator)
{
    Film newFilm;
    while(!ifs.eof())
    {
        newFilm.importFilm(ifs, separator);
        if(!ifs.eof())
        {
            if(this->searchFilm(newFilm.getName()) >= 0) //don't add the film if it already exist in the catalog
            {
                this->addFilm(newFilm);
            }
        }
    }

}

void Catalogue::exportCatalogue(ofstream & ofs, const string & separator) const
{
    int i = 0;
    while(i < nbFilms)
    {
        filmList[i].exportFilm(ofs, separator);
        i++;
    }
    return;
}

int Catalogue::searchFilm(const string & title) const
{
    int i = 0;

    while(i < this->nbFilms)
    {
        if((filmList[i]).getName() == title)
        {
            return i;
        }
        i++;
    }

    return (-1);
}

void Catalogue::deleteFilm(Film & film)
{
    int i = this->searchFilm(film.getName());
    if(i == -1)
    {
        cout << "This movie does not exist in this catalog\n" << endl;
        return;
    } else {
        (this->filmList).erase((this->filmList).begin() + i);
        cout << "Movie erased sucessfully\n" << endl;
        nbFilms--;
    }
    return;
}

vector<Film> * Catalogue::getFilmList()
{
    return &(this->filmList);
}

void Catalogue::sortCatalogue()
{
    sort(filmList.begin(), filmList.end());
}

Catalogue::Catalogue()
{
#ifdef MAP
    cout << "calling <Catalogue class constructor>" << endl;
#endif
    nbFilms = 0;
    vector<Film> filmlist;

    return;
}

Catalogue::~Catalogue()
{
#ifdef MAP
    cout << "calling <Catalogue class destructor>" << endl;
#endif
}