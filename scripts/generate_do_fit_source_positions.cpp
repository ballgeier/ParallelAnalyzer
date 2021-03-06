#include <iostream>
#include <fstream>
using namespace std;

int main()
{

  // Output command file
  char tempOut[500];
  sprintf(tempOut, "do_fit_source_positions");
  ofstream outFile(tempOut);
  outFile << "#!/bin/csh" << endl;
  outFile << endl;

  // Source calibration runs
  int runNumber;
  char tempIn[500];
  for (int i=7; i<8; i++) {
    sprintf(tempIn, "../run_lists/Source_Calibration_Run_Period_%i.dat", i+1);
    cout << tempIn << endl;

    ifstream inFile(tempIn);
    while (!inFile.eof()) {
      inFile >> runNumber;
      if (inFile.fail()) break;
      cout << runNumber << endl;
      outFile << "root -b -q '../source_positions/fit_source_positions.C(\"" << runNumber << "\")'" << endl;
    }
  }

  // Xenon calibration runs
  for (int i=0; i<0; i++) {
    sprintf(tempIn, "../run_lists/Xenon_Calibration_Run_Period_%i.dat", i+1);
    cout << tempIn << endl;

    ifstream inFile(tempIn);
    while (!inFile.eof()) {
      inFile >> runNumber;
      if (inFile.fail()) break;
      cout << runNumber << endl;
      outFile << "root -b -q '../source_positions/fit_source_positions.C(\"" << runNumber << "\")'" << endl;
    }
  }

  outFile.close();

  return 0;
}
