/*
 * [2020] Northeastern University - Network Programming
 *
 * All Rights Reserved.
 * 
 * Authors Michele Polese 
 */
#include<iostream>

using namespace std;
// remember to use the relevant #include

int main (int argc, char* argv[])
{
	// declare an array of C-style strings (i.e., string literals) 
	// which should contain the command-line arguments, except for the
	// name of this binary
	
    // initialize each entry in the array with the command-line arguments
	// (except for the name of the binary, which is the first entry in argv)
    char cmdline[argc][10];

    for(int i=1;i<argc;i++){
        int j=0;        
        while(argv[i][j]!='\0'){
            cmdline[i-1][j]=argv[i][j];
            j++;
        }

    }
    
	// print the content of the array to the terminal, one entry for each line
	// (without using argv!)
    for(int i=0;i<argc-1;i++)
        cout<<cmdline[i]<<"\n";

	// print the first string literal in the array, one letter for each line
    int i=0;
    while(cmdline[0][i] != '\0')
        cout<<cmdline[0][i++]<<"\n";

    return 0;
}
