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
    numsong = rhs.numsong;
    playlistName = rhs.playlistName;
    if(rhs.firstSong == nullptr){
        firstSong = lastSong = nullptr;
    }
    Song* temp = rhs.firstSong;
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
    numsong = rhs.numsong;
    playlistName = rhs.playlistName;
    if(rhs.firstSong == nullptr){
        firstSong = lastSong = nullptr;
    }
    Song* temp = rhs.firstSong;
    return *this;
}

void Playlist::operator +(Song newsong){
    addNewSong(newsong);
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
    temp->setArtist(jkdf.getArtist());
    temp->setTitle(jkdf.getTitle());
    temp->setNextSong(nullptr);

    if(firstSong == nullptr){
        firstSong = lastSong = temp;
    } 
    else {
        lastSong->setNextSong(temp);
        lastSong = lastSong->getNextSong();
    }
    lastSong = temp;
    numsong++;

}



void Playlist::addNewSong(const Song song, int loc){
    int count = 0;
    if(loc > numsong){
        cout << "Invalid index!" << endl;
        return;
    }
   
    firstSong = nullptr;
    lastSong = nullptr;
    Song* temp = new Song;
    for(int i = 0 ; i< loc; i++){
        
       // if(song == )
    }

    while(count < loc && temp != nullptr){
        /*
        if(count == loc){

        }
        */
    }
}

Song* Playlist::getSongAtIndex(int index){
    Song* temp = new Song;
    int count = 0;
    while(count<=index){
        if(count == index){
            return temp;
        }
        temp = temp->getNextSong(); 
        count++;
    }
    return nullptr;
}




void Playlist::deleteSong(){

}
void Playlist::deleteSong(int a){

}