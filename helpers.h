#ifndef HELP_H
#define HELP_H

#include <dirent.h>
#include<fstream>
#include<iostream>
#include <string>

#include "playlist.h"
using namespace std;




void readData(ifstream&, Playlist&); //Done
bool createNewPlaylist(Playlist&,Playlist&); //In the process of implementing
bool deleteSongFromPlaylist(Playlist&); //Have yet to implement
bool addSongtoPlaylist(Playlist&,Playlist&); //Have yet to implement
bool deletePlaylist(Playlist); //Have yet to implement






#endif 