#include "song.h"

Song::Song(){
    title = "Yeat's beginning";
    artist = "Noah Smith";
    nextsong = nullptr;

}

Song::Song(string t, string a,Song* ptr){
    title = t;
    artist = a;
    nextsong = ptr;
}

Song::Song(const Song& rhs){
    title = rhs.title;
    artist = rhs.artist;
    nextsong = rhs.nextsong;
}



string Song::getTitle(){
    return title;
}
string Song::getArtist(){
    return artist;
}
Song* Song::getNextSong(){
    return nextsong;
}

void Song::setTitle(string s){
    title = s;
}
void Song::setArtist(string a){
    artist = a;
}
void Song::setNextSong(Song* b){
    nextsong = b;
}




