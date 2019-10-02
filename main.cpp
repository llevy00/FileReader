#include <iostream>
#include <fstream> //for File I/O
#include <string>

using namespace std;

int main()
{
  string fileName; //to get the name of the file to open
  string line; //to store a single line of a text file
  fstream fileStream; //to open a file for reading
  int number = 0;
  int c = 0;

  cout<<"What file do you want to open? ";
  getline(cin, fileName);
  
  fileStream.open (fileName.c_str(),ios::in);
  
  if(fileStream.is_open())
  {
    cout<<fileName<<" opened.\nFILE CONTENTS:\n";
   
    do
    {
        getline(fileStream, line);
        cout<<line<<endl;
        number++;
        c += line.length();

    } while (line.empty() == false);
    
  }
  else
  {
    cout<<fileName<<" could not be opened.\n";
  }
    
  if(fileStream.is_open())
  {
        cout<<"METADATA\nFile: "<<fileName<<endl;
        cout<<"Lines: "<<number-1<<endl;
        cout<<"Charachters: "<<c<<endl;
  }
  
  fileStream.close();

  return 0;
}
