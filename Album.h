#ifndef __ALBUM_H__
#define __ALBUM_H__



#include <iostream>
using namespace std;
#include "Livre.h"

class Album : public Livre {
    private:
        string illustrations ;
    public:
        Album(string,string,string,string);
        Album(Livre*,string);
};

#endif // __ALBUM_H__