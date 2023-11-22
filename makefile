jukebox: main.o playlist.o song.o helpers.o
	g++ -o jukebox main.o playlist.o song.o helpers.o
main.o: main.cpp playlist.cpp song.cpp helpers.cpp
	g++ -c main.cpp
playlist.o: playlist.cpp playlist.h song.h
	g++ -c playlist.cpp
song.o: song.cpp song.h
	g++ -c song.cpp
helpers.o: helpers.cpp helpers.h
	g++ -c helpers.cpp
clean:
	rm *.o jukebox