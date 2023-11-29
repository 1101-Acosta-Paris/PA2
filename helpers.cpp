#include "helpers.h"

void readData(ifstream& cin, Playlist& playlist){
    //MUST CREATE THE ADDITION OPERATOR OVERLOAD IN ORDER TO CONTINUE TO IMPLEMENT FURTHER
    int count = 0;
    while(!cin.eof()){
        string title;
        getline(cin,title,'-');
        //cout << title << endl;
        string artist;
        getline(cin,artist);
         //cout << artist << endl;
        Song temp(title, artist, nullptr);
        
        playlist + temp;
        //playlist.addNewSong(Song(title, artist, nullptr), count);
        count++;
    }

}


//THE ONLY SONG METHOD CONFIRMED WORKING
ostream& operator <<(ostream& out, const Song& song){
    out << song.getTitle() << " " << song.getArtist()<< endl;
    return out;
}
//PLAYLIST METHOD CONFIRMED WORKING
ostream& operator << (ostream& out, Playlist& rhs){
   int count = 0;
   Song* ptr = rhs.firstSong;

   while(count < rhs.numsong){
     out << count+1 <<". ";
     out << *ptr << endl;
     ptr = ptr->getNextSong();
     count ++;
   }
    return out;
}


/*
bool createNewPlaylist(Playlist&,Playlist&){
    
}
*/