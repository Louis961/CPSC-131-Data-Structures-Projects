#pragma once

#include <string>

class Song 
{
private:
	std::string name_;
	std::string artist_;
	std::string album_;
	unsigned int duration_;
	bool explicit_lyrics_;

public:
	Song(std::string, std::string, std::string, unsigned int, bool);

	std::string name();
	std::string artist();
	std::string album();
	unsigned int minutes();
	unsigned int seconds();
	bool explicit_lyrics();
};

Song::Song(std::string name, std::string artist, std::string album, unsigned int duration, bool explicit_lyrics)
{
	this->name_ = name;

	this->artist_ = artist;

	this->album_ = album;

	this->duration_ = duration;

	this->explicit_lyrics_ = explicit_lyrics;
};

std::string Song::name()
{
	return name_;
};

std::string Song::artist()
{
	return artist_;
};

std::string Song::album()
{
	return album_;
};

unsigned int Song::minutes()
{
	return duration_ / 60;
};

unsigned int Song::seconds()
{
	return duration_ % 60;
};

bool Song::explicit_lyrics()
{
	return explicit_lyrics_;
};
