#include <string>
#include <fstream>
#include <vector>
#include "Film.h"

using namespace std;

class Catalogue
{
    public :
        virtual void addFilm(const Film & newFilm);
            //add a Film to the catalog
        
        void showCatalogue(int option) const;
            //display of the catalog

        void importCatalogue(ifstream & ifs, const string & separator);
            //import a catalog from a file (ifs)
        
        void exportCatalogue(ofstream & ofs, const string & separator) const;
            //export a catalog to a file (ofs)
        
        int searchFilm(const string & title) const;
            // search if a film is in the catalog by ts title
            // out : - (-1) if not found
            //       - index to the film if found
        void deleteFilm(Film & film);
            // delete the given film from the catalog
            // contract : the film needs to be in the catalog
        
        vector<Film> * getFilmList();
            // gives back a pointer to filmList
        
        void sortCatalogue();
            //sort the films by note

        Catalogue();
            //default Catalogue class constructor
        
        virtual ~Catalogue();
            //Catalogue class dafault destructor


    protected :
        int nbFilms;
        vector<Film> filmList;
};