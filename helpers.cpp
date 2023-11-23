#include "helpers.h"

void readData(ifstream& cin, Playlist& playlist){
    //MUST CREATE THE ADDITION OPERATOR OVERLOAD IN ORDER TO CONTINUE TO IMPLEMENT FURTHER
    int count = 0;

    while(!cin.eof()){
        string junk;
        getline(cin,junk);
        // cout << junk << endl;

        string title;
        getline(cin,title);
        // cout << title << endl;

        string artist;
        getline(cin,artist);
        // cout << artist << endl;

        // Song* temp = new Song(title, artist, nullptr);
        playlist.addNewSong(Song(title, artist, nullptr), count);
        count++;
    }
    

}

ostream& operator <<(ostream& out, const Song& song){
    out << song.title << song.artist<< endl;
    return out;
}
/*
bool createNewPlaylist(Playlist&,Playlist&){
    
}
*/