#include <iostream>
#include <fstream> //for File I/O
#include <string>

using namespace std;

int main()
{
  string fileName; //to get the name of the file to open
  string line; //to store a single line of a text file
  fstream fileStream; //to open a file for reading

  cout<<"What file do you want to open? ";
  getline(cin, fileName);
  
  fileStream.open (fileName.c_str(),ios::in);
  
  if(fileStream.is_open())
  {
    cout<<fileName<<" opened.\nFILE CONTENTS:\n";
   
    
        cout<<fileName<<endl;
    
    // 3A: read a line from fileStream into the variable line
    // 3B: display the line, followed by an endline
  
    //STEP 4: close the fileStream
  
  }
  else
  {
    cout<<fileName<<" could not be opened.\n";
  }

  return 0;
}
