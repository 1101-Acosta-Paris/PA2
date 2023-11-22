// main dawg
#include "song.h"
#include "playlist.h"
#include "helpers.h"

int main(int argc, char* argv[]){
    int choice;
    string playlistName;
    string placeholder = "yup yes";
    ifstream fin; //intitalizing file stream
    if(argc !=2)//checking if stream and csv file exists, or whether it was inputted correctly
    {
        cout<< "Please try again by entering the dbSmall.txt File after the executable name. Thank You! \n";
        return 0;
    }
    
    Playlist ptrPlaylist;
    fin.open(argv[1]);
    // readData(fin, ptrPlaylist); //

    do{
        cout << "Welcome to Spotify" << endl;
        cout << "1.Load an existing playlist.\n2.Create a new playlist.\n3.Exit Spotify"<< endl;
        cout << "Make your selection: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "choice 1 inactive" << endl;
                return 0;
                break;
            case 2:
                cout << "Playlist Name: "<< endl;
                getline(cin >> ws,playlistName);
                while(playlistName == placeholder){
                    cout << "Please enter another name for your playlist: ";
                    getline(cin >> ws,playlistName);
                }
                cout <<"Displaying Available Songs: " << endl;
                break;
            case 3:
                return 0;
            default:
                cout << "Please choose an existing option" << endl;
        }
     } while(choice!=3);
    return 0;
}