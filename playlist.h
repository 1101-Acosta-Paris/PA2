#ifndef PLAY_H
#define PLAY_H
#include "song.h"

class Playlist{
//attributes
string playlistName;
Song* firstSong;
Song* lastSong;
int numsong;
//private methods
void deleteSong();
void deleteSong(int);
void addNewSong(const Song);


public:
Playlist();
Playlist(Song*, Song*, string, int);
Playlist(const Playlist&);
~Playlist();
//Methods


//getters
string getplaylistName();
Song* getfirstSong();
Song* getlastSong();
int getnumSong();
//setters
void setplaylistName(string);
void setfirstSong(Song*);
void setlastSong(Song*);

//specific functions
Song* getSongAtIndex(int); //Done
void addNewSong(const Song, int); //Done
Playlist& operator =(const Playlist&); //Done
void operator +(Song); //Done
Playlist& operator -(const Playlist&);//Need to Implement
friend ostream& operator << (ostream &out, Playlist &c); //Done

};

#endif