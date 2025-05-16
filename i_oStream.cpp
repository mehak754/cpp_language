//Input/Output Stream
/*stream means "flow of data"; #it could from input device to program (read data into program)-'INPUT STREAM'
                             #it could be from program to output device( write data out of program)-'OUTPUT STREAM'
1 input stream (input operation)basic object - cin 
2 output stream (output operation)basic object - cout    
3 file stream (file input and output)-<fstream>:  a.<ifstream> => input from file    b.<ofstream> => output to file
4 ios is base class to all the stream classes
*/
// FILE STREAM
#include<iostream> //input and output stream -<iostream>= <istream>+<ostream>
#include<fstream>  //file stream-<fstream>=<ifstream>+<ofstream>
#include<string>
using namespace std;
int main(){

     ofstream outfile ("data.txt" ); // open a file (without .open())
     outfile<<"hey! \n"; //pass data to file
     outfile.close();  //close file   
    
    ofstream appendFile ("data.txt",ios::app);//append thee file using file open mode append
    appendFile<<"hey! ITS APPENDED\n";
    appendFile.close();

    string line;
    ifstream fin; 
    fin.open("data.txt");  //open file with .open function
    cout<<"The content in data file is:\n";
    while(getline(fin,line)){  //using getline to read data from file line by line
        cout<<line<<"\n";
    }
    fin.close();
    return 0;
}