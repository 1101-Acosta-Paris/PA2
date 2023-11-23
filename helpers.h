#ifndef HELP_H
#define HELP_H

#include<fstream>
#include<iostream>
#include <string>
#include <dirent.h>

#include "playlist.h"

using namespace std;

void readData(ifstream&, Playlist&); //In the process of implementing
bool createNewPlaylist(Playlist&,Playlist&); //In the process of implementing
bool deleteSongFromPlaylist(Playlist&); //Have yet to implement
bool addSongtoPlaylist(Playlist&,Playlist&); //Have yet to implement
bool deletePlaylist(Playlist); //Have yet to implement






#endif 