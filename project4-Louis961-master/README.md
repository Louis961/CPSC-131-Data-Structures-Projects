# Project 4 - Gate Control
### CSUF CPSC 131, Spring 2019

Group members:

## Louis Zuckerman louiszman@csu.fullerton.edu

This project implements software to control access to a company’s facility. The company has several buildings and a parking lot for its staff, all surrounded by a fence that has an electrically-operated gate for employees to drive through if they have an authorized access card. The gate has a card reader that is connected to a computer that will receive a card’s identifying number, validate the access, and operate the gate operator’s motor to open the gate. The computer will record each transaction—the date and time of each access, allowed or denied.

The GateControl project involves the use of the C++ Standard Library map class for the software’s authorization table. Each table record is identified by a four-digit card number and contains the cardholder’s name and the permissible access. A cardholder’s access can be restricted to a specific time range such as 8 AM to 5 PM.
The GateControl software is surrounded by other software, outside the scope of this project, that provides functions such as managing the authorization database, checking the transaction log, interfacing to the card reader, and operating the motor that opens the gate. This project’s Main.cpp simulates this other software, calling GateControl functions to determine if a card that has been read is authorized, to retrieve authorization records, or to retrieve transaction records.

GateControl has eight functions:

1.	AccessAllowed(), whose input argument is a card number. It validates access and returns true if access is permitted and false if it is not. The attempted access, allowed or denied, is recorded in a transaction log. The format of a transaction record is defined in GateControl.hpp.

2.	AddAuthorization(), whose arguments are a card number, a cardholder name, and a time range (a start time / end time pair). The format of these times is the same as described below in the Data and Time section. It returns a boolean success/failure status; failure (false) means the item was already present and couldn’t be added.

3.	DeleteAuthorization(), whose argument is a card number. It returns a boolean success/failure status; failure (false) means the card was not found and couldn’t be deleted.

4.	ChangeAuthorization(), whose arguments are a card number, a cardholder name, and a time range. It changes the name and time range of an existing card. It returns a boolean success/failure status; failure (false) means the card was not found and couldn’t be changed.

5.	GetAllAuthorizations(), which has one output argument: the address of a vector to receive all of the authorization records. It doesn’t return anything; the vector will be cleared if there are no authorization records. The format of an authorization record is defined in GateControl.hpp.

6.	GetOneAuthorization(), whose input argument is a card number. It has one output argument: the address of an authorization record. It returns a boolean success/failure status; failure (false) means the card was not found. The format of an authorization record is defined in GateControl.hpp.

7.	GetAllTransactions(), which has one output argument: the address of a vector to receive the complete set of transaction records. The format of a transaction record is defined in GateControl.hpp. If there are no transactions, the vector will be cleared.

8.	GetCardTransactions(), whose input argument is a card number. It has one output argument: the address of a vector to receive transaction records for the specified card. The format of a transaction record is defined in GateControl.hpp. If there are no transactions, the vector will be cleared. It returns a boolean success/failure status; failure (false) means the card was not found and no transactions could be found.

In the past, projects that had to produce output files have failed because the actual and expected formats didn’t match exactly, often merely differences in spacing or punctuation. This project’s alternative is to have the actual results stored in the authorization or transaction record’s data members so that format isn’t  relevant. Groups of records are inserted into a vector instead of being saved in a readable file.

## Date and Time
Date and time are needed by the AccessAllowed() function to determine whether access should be allowed or denied and to mark transaction records.
It will be available through two global string variables that the Main.cpp test driver will set as needed to test the GateControl functions. These strings have these formats:

●	Date: YYYYMMDD, where YYYY is a four-digit year, MM is a two-digit month, and DD is a two-digit day.

●	Time: HHMM, where HH is a two-digit hour from 00 to 23 and MM is a two-digit minute.

These formats allow dates and times to be compared by simply using the standard operators such as ==, <, and > on the strings. There is no need to extract fields from the strings and compare the individual parts of dates or times.

Each test will be defined to occur at a specific date and time; having Main.cpp set these times makes the tests repeatable and not dependent on the actual time-of-day.

## Source Code Files
You are given “skeleton” code files with declarations that may be incomplete and don’t have any implementation. Implement the code and ensure that all the tests in Main.cpp pass successfully.

●	GateControl.cpp: This is to be completed. Your code should go into this file, not the .h file.

●	GateControl.hpp: This is already completed. It contains declarations of the Authorization and Transaction structures, including the associated map and vector. You may add data and functions if desired to help your implementation but you’re not required to do so.

●	Main.cpp: This is already completed. It’s provided for you to use to test your software while you’re writing it. It has several functions whose names begin with Test…; you can comment out the calls to tests of functions that you haven’t implemented yet. You may change this file if you wish to add helpful functions for your own testing.

When we test your project, we’ll discard your version of Main.cpp and replace it with a different version of Main.cpp, not the one you were given. Our version will use different test data to prevent you from writing code that handles only specific test cases.
