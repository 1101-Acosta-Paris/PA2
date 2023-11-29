jukebox: main.o playlist.o song.o helpers.o
	g++ -o jukebox main.o playlist.o song.o helpers.o -g
main.o: main.cpp playlist.cpp song.cpp helpers.cpp
	g++ -c main.cpp -g
playlist.o: playlist.cpp playlist.h song.h
	g++ -c playlist.cpp -g
song.o: song.cpp song.h
	g++ -c song.cpp -g
helpers.o: helpers.cpp helpers.h
	g++ -c helpers.cpp -g
clean:
	rm *.o jukebox