/*main.cpp*/

//
// Divvy analysis: station and ride analysis.
//
// << your name >>
// << your development environment >>
// U. of Illinois, Chicago
// CS341, Spring 2017
// Project #02
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
#include <cassert>
#include <cmath>

using namespace std;


//
// DistBetween2Points: returns the distance in miles between 2 points 
// (lat1, long1) and (lat2, long2).
// 
double distBetween2Points(double lat1, double long1, double lat2, double long2)
{
  //
  // Reference: http://www8.nau.edu/cvm/latlon_formula.html
  //
  constexpr double PI = 3.14159265;
  constexpr double earth_rad = 3963.1;  // statue miles:

  double lat1_rad = lat1 * PI / 180.0;
  double long1_rad = long1 * PI / 180.0;
  double lat2_rad = lat2 * PI / 180.0;
  double long2_rad = long2 * PI / 180.0;

  double dist = earth_rad * acos(
    (cos(lat1_rad)*cos(long1_rad)*cos(lat2_rad)*cos(long2_rad))
    +
    (cos(lat1_rad)*sin(long1_rad)*cos(lat2_rad)*sin(long2_rad))
    +
    (sin(lat1_rad)*sin(lat2_rad))
  );

  return dist;
}


//
// getFileName: inputs a filename from the keyboard, make sure the file can be
// opened, and returns the filename if so.  If the file cannot be opened, an
// error message is output and the program is exited.
//
string getFileName()
{
  string filename;

  // input filename from the keyboard:
  getline(cin, filename);

  // make sure filename exists and can be opened:
  ifstream file(filename);
  if (!file.good())
  {
    cout << "**Error: cannot open file: " << filename << endl;
    std::terminate();
  }

  return filename;
}


int main()
{
  // setup output format:
  cout << std::fixed;
  cout << std::setprecision(4);

  // get filenames from the user/stdin:
  string StationsFileName = getFileName();
  string RidesFilename = getFileName();



  //
  // TODO:
  //



  //
  // allow user to enter 0 or more commands, stop when 
  // the user inputs the command "exit":
  //
  string command, restOfLine;

  cin >> command;

  while (command != "exit")
  {
    if (command == "find")
    {
      //
      // find latitude longitude distance
      //
      // Example: find 41.86 -87.62 0.5
      //
      double latitude, longitude, distance;
      
      cin >> latitude;
      cin >> longitude;
      cin >> distance;


      cout << "todo" << endl;


    }
    else if (command == "info")
    {
      //
      // info stationID:
      //
      // Example: info 338
      //
      int stationID;

      cin >> stationID;


      cout << "todo" << endl;


    }
    else if (command == "top")
    {
      //
      // top N:
      //
      // Example: top 10
      //
      int N;

      cin >> N;

      if (N < 1)  // invalid input?  Default to top 10:
        N = 10;


      cout << "todo" << endl;


    }
    else if (command == "hourly")
    {
      //
      // hourly:
      //


      cout << "todo" << endl;


    }
    else
    {
      cout << "**Invalid, try again" << endl;
    }

    getline(cin, restOfLine);  // discard rest of line:

    //
    // input next command and repeat:
    cin >> command;
  }

  //
  // done:
  //
  return 0;
}
