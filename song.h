#ifndef SONG_H
#define SONG_H
#include<fstream>
#include<iostream>
using namespace std;

class Song{
//attributes 
string title;
string artist;
Song* nextsong;

public: 
Song();
Song(string, string , Song*);
Song(const Song&);

//Methods

string getTitle() const;
string getArtist() const;
Song* getNextSong();

void setTitle(string);
void setArtist(string);
void setNextSong(Song*);


friend ostream& operator <<(ostream&, const Song&);
Song& operator =(const Song&);

};

#endif 
