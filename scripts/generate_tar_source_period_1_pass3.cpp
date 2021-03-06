#include <iostream>
#include <fstream>
using namespace std;

int main()
{

  // Output command file
  char tempOut[500];
  sprintf(tempOut, "tar_source_period_1_pass3");
  ofstream outFile(tempOut);
  outFile << "#!/bin/csh" << endl;
  outFile << endl;

  // Source calibration runs
  int runNumber;
  char tempIn[500];
  for (int i=0; i<1; i++) {
    sprintf(tempIn, "../run_lists/Source_Calibration_Run_Period_%i.dat", i+1);
    cout << tempIn << endl;

    outFile << "tar -cvf /extern/UCNA/replay_pass3/source_period_1_pass3.tar \\" << endl;

    ifstream inFile(tempIn);
    while (!inFile.eof()) {
      inFile >> runNumber;
      if (inFile.fail()) break;
      cout << runNumber << endl;
      outFile << "/extern/UCNA/replay_pass3/replay_pass3_"<<runNumber<<".root \\" << endl;
    }
  }

  outFile.close();

  return 0;
}
