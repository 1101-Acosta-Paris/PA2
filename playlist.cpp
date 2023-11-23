#include "playlist.h"
Playlist::Playlist(){
    playlistName = "Twizzy Tonks Greatest Hits!!!";
    numsong = 0;
    firstSong = nullptr;
    lastSong = nullptr;
}

Playlist::Playlist(Song* f, Song* l, string name, int num){
    playlistName = name;
    numsong = num;
    if(firstSong != nullptr){    
        Song* temp = f;
        firstSong = new Song;
        lastSong = firstSong;
        firstSong->setArtist(temp->getArtist());
        firstSong->setTitle(temp->getTitle());
        firstSong->setNextSong(temp->getNextSong());
        firstSong->setNextSong(nullptr);
        temp = temp->getNextSong();
        while(temp!= nullptr){
            lastSong->setNextSong(new Song);
            lastSong = lastSong->getNextSong();
            firstSong->setArtist(temp->getArtist());
            firstSong->setTitle(temp->getTitle());
            lastSong->setNextSong(temp->getNextSong());
            lastSong->setNextSong(nullptr);
            temp = temp->getNextSong();
        }
    }
    else{
        firstSong = nullptr;
        lastSong = nullptr;
    }

}


Playlist::Playlist(const Playlist& rhs){
    playlistName = rhs.playlistName;
    numsong = rhs.numsong;
    if(firstSong != nullptr){    
        Song* temp = rhs.firstSong;
        firstSong = new Song;
        lastSong = firstSong;
        firstSong->setArtist(temp->getArtist());
        firstSong->setTitle(temp->getTitle());
        firstSong->setNextSong(temp->getNextSong());
        firstSong->setNextSong(nullptr);
        temp = temp->getNextSong();
        while(temp!= nullptr){
            lastSong->setNextSong(new Song);
            lastSong = lastSong->getNextSong();
            firstSong->setArtist(temp->getArtist());
            firstSong->setTitle(temp->getTitle());
            lastSong->setNextSong(temp->getNextSong());
            lastSong->setNextSong(nullptr);
            temp = temp->getNextSong();
        }
    }
    else{
        firstSong = nullptr;
        lastSong = nullptr;
    }
}

Playlist::~Playlist(){
    Song* temp = firstSong;
    while(temp != nullptr){
        Song* removed = temp;
        temp = temp->getNextSong();
        delete removed;
    }
    lastSong = nullptr;
    firstSong = nullptr;
}

Playlist& Playlist::operator =(const Playlist& rhs){
    if(this == &rhs){
        return *this;
    }
    this->~Playlist();
    playlistName =  rhs.playlistName;
    if(firstSong != nullptr){    
        Song* temp = rhs.firstSong;
        firstSong = new Song;
        lastSong = firstSong;
        firstSong->setArtist(temp->getArtist());
        firstSong->setTitle(temp->getTitle());
        firstSong->setNextSong(temp->getNextSong());
        firstSong->setNextSong(nullptr);
        temp = temp->getNextSong();
        while(temp!= nullptr){
            lastSong->setNextSong(new Song);
            lastSong = lastSong->getNextSong();
            firstSong->setArtist(temp->getArtist());
            firstSong->setTitle(temp->getTitle());
            lastSong->setNextSong(temp->getNextSong());
            lastSong->setNextSong(nullptr);
            temp = temp->getNextSong();
        }
    }
    else{
        firstSong = nullptr;
        lastSong = nullptr;
    }
    return *this;
}

void Playlist::operator +(const Song newsong){
    addNewSong(newsong, ++numsong);
}

string Playlist::getplaylistName(){
    return playlistName;
}
Song* Playlist::getfirstSong(){
    return firstSong;
}
Song* Playlist::getlastSong(){
    return lastSong;
}
int Playlist::getnumSong(){
    return numsong;
}

void Playlist::setplaylistName(string s){
    playlistName = s;
}

void Playlist::setfirstSong(Song* f){
    firstSong = f;
}
void Playlist::setlastSong(Song* l){
    lastSong = l;
}

void Playlist::addNewSong(const Song jkdf){
    Song* temp = new Song;
    
    // test if already present
    // if not already present

    temp->setArtist(jkdf.getArtist());
    temp->setTitle(jkdf.getTitle());
    temp->setNextSong(nullptr);

    if(numsong = 0){
        firstSong = lastSong;
        lastSong = temp;
    } else {
        lastSong->setNextSong(temp);
        lastSong = temp;
    }
    numsong++;

}

void Playlist::addNewSong(const Song sonng, int loc){
    if(loc > numsong){
        cout << "Invalid index!" << endl;
        return;
    }
    Song * next = new Song;
    int count = 0;
    while(count < loc && next != nullptr){
        
        if(count == loc){

        }
    }
}

ostream & operator << (ostream &out, Playlist &p){
    if(p.getnumSong() == 0){
        out << "Playlist is empty!" << endl;
    }
    return out;
}