#pragma once

#include <fstream>
#include <iostream>
#include <list>
#include <stdexcept>
#include <string>

#include "Song.hpp"

class RadList 
{
private:
	std::list<Song> queue_;
	std::list<Song>::iterator nowPlaying_;
public:
	void loadPlaylist(const std::string&);
	void next();
	void prev();
	Song nowPlaying();
	void addToQueue(const Song&);
	void playNext(const Song&);
};

void RadList::loadPlaylist(const std::string& filename) 
{
	std::ifstream playlist(filename);

	if (playlist.is_open()) 
	{
		std::string name, artist, album, duration, explicit_lyrics, toss;

		// Read in everything from comma seperated values file
		while (std::getline(playlist, name, ',')) 
		{
			std::getline(playlist, toss, ' '); // ignore leading space
			std::getline(playlist, artist, ',');
			std::getline(playlist, toss, ' '); // ignore leading space
			std::getline(playlist, album, ',');
			std::getline(playlist, toss, ' '); // ignore leading space
			std::getline(playlist, duration, ',');
			std::getline(playlist, toss, ' '); // ignore leading space
			std::getline(playlist, explicit_lyrics);

			// Construct Song and add to queue
			queue_.push_back(Song(name, artist, album, stoi(duration), explicit_lyrics == "true"));
		}

		playlist.close();
		nowPlaying_ = queue_.begin();
	}
	else 
	{
		throw std::invalid_argument("Could not open " + filename);
	}
}

void RadList::next() 
{
	nowPlaying_++; //increments iterator, pointing to next song
}

void RadList::prev() 
{
	nowPlaying_--; //decrements iterator, pointing to previous song in list
}

Song RadList::nowPlaying() 
{
	return *nowPlaying_; //returns current song pointed to by iterator in list
}

void RadList::addToQueue(const Song& newSong) 
{
	queue_.push_back(newSong); //adds new song to end of list
}

void RadList::playNext(const Song& newSong) 
{
	nowPlaying_++; //increment iterator to next song in list
	queue_.insert(nowPlaying_, newSong); //inserts new song behind currently targeted song
	nowPlaying_--; //iterator is now pointed at newly added song
	nowPlaying_--; //iterator is now pointed at the current song
}
