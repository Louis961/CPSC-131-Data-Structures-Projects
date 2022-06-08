# Project 2: Rad.io Music
### CSUF CPSC 131, Spring 2019

##Louis Zuckerman

##louiszman@csu.fullerton.edu

##Introduction
Welcome to Rad.io, you've been hired to work on our music streaming app, think of it as Spotify
only more rad! You're in charge of handling our customer’s song list. When a user selects a
playlist it will load into the list a number of songs. Users can skip to the next song, move to the
previous, they can select a song to play next or select a song to add to the end of their list.

##Objective
You are given two header files, Song.hpp and RadList.hpp. Song holds a song’s name, artist,
album, duration (in seconds) and whether or not it contains explicit lyrics. RadList keeps track
of all Song objects in the linked list List . RadList also has an iterator that points to the Song
object currently playing.

Complete the implementation of these classes, and make sure all tests pass. Your instructor
may require you to keep your header and implementation code seperate in both .hpp and .cpp
files. Your code is tested in the provided main.cpp.

You will need to implement the following functions:
● Song Constructor - This should initialize all Song member variables.
● Song Getters - name, artist, album, minutes, seconds and explicit lyrics should all be
returned with these member functions. Keep in mind the duration in seconds is stored.
The minutes() and seconds() getters should return the minutes and leftover seconds of a
song. For example a song with a duration of 291 seconds should return 4 minutes and
51 seconds.
● next() - This should move the nowPlaying iterator to the next song in the list.
● prev() - This should move the nowPlaying iterator to the previous song in the list.
● nowPlaying() - This should return the current Song the nowPlaying iterator is
currently pointing to.
● addToList() - This should add the passed in song to the end of the list.
● playNext() - This should add the passed in song as the next song in the list right after
the current song playing.

Initially the given code will not compile. As you complete the code, the tests should start to pass
in main.cpp.
##Source Code Files
You are given “skeleton” code files with declarations that may be incomplete and without any
implementation. Implement the code and ensure that all the tests in main.cpp pass
successfully.

● Song.hpp : This is to be completed
● RadList.hpp : This is to be completed
● main.cpp : The main function tests the output of your functions. You may wish to add
additional tests. During grading your main.cpp file will be replaced with the one you were
provided with.
● README.md : You must edit this file to include your name and CSUF email. This
information will be used so that we can enter your grades into Titanium.
