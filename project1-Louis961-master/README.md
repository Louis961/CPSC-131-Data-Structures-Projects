# Project 1: Gilded Rose Store Inventory
## CSUF CPSC 131, Spring 2019
## Name: Louis Zuckerman
## Email: louiszman@csu.fullerton.edu

## Introduction
Hi and welcome to team Gilded Rose. As you know, we are a small inn with a prime location in
a prominent city ran by a friendly innkeeper named Allison. We also buy and sell only the finest
goods.

You are provided a listing of items from the latest shipment to the Gilded Rose with each items
name, sell in value, and quality. The sell in value is based on gold coins (there is no fraction of a
coin). The store wants you to build a program that is able to store each item in an internal list
and later retrieve the information in a number of ways.

## Objective
You are given a partial implementation of one header file, GildedRose.h. Item is a class that
holds the information for each item for the inn. GildedRose is a class that holds an internal
listing of many Item objects. This inventory should hold at least 10 items. For this you can use
arrays, the std::array class, or even the vector class.

Complete the implementation of these classes, adding public/private member variables and
functions as needed. You should choose an appropriate data structure to maintain this inventory
with an unknown size known only at runtime. Your code is tested in the provided main.cpp.
You will need to implement the following functions:
● Constructors/Destructors - Initialize your data. Allocate memory if using a native
array. The destructor should deallocate memory if using a native array.
● size() - This should return the number of items currently for sale (this is different from
the max).
● get(size_t) - This should return the item with the matching index. For example if
given an index of 3, you should return the item at index 3 in the list.
● add(Item) - This should add another item for sale in the Gilded Rose by adding it to
your inventory.
● operator[](size_t) - This should perform identical to the get(size_t) function.
Initially the given code will not compile. As you complete the code, the tests should start to pass
in main.cpp.

## Source Code Files
You are given “skeleton” code files with declarations that may be incomplete and without any
implementation. Implement the code and ensure that all the tests in main.cpp pass
successfully.
● GildedRose.h : This is to be completed
● main.cpp : The main function tests the output of your functions. You may wish to add
additional tests. During grading your main.cpp file will be replaced with the one you were
provided with.
● README.md : You must edit this file to include your name and CSUF email. This
information will be used so that we can enter your grades into Titanium.
