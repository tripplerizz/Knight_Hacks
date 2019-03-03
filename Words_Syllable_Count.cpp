#include <iostream>
#include <string>
#include <cstring>

using namespace std;
//void Loop(int&, string); more stuff

int main()
{
	
	char uLine[4000];
	string Line_Spaces, Line_No_Spaces;
	
	string space = " ";
	
	
	cout << "Enter a line" << endl;
	
	cin.getline(uLine, 4000);
	
	
	int Line_Length = strlen (uLine);	
	
	string size = strtok(uLine, "\n");

	for(int i = 0; i < Line_Length; i++)
	{
		 	

		if (size [i] != ' ')
			Line_No_Spaces += size[i];
		if (size[i] != ' ')
 			Line_Spaces += size[i];
		 else 
			Line_Spaces += space;	
		
	}
	int first = Line_Spaces.length();
	int second = Line_No_Spaces.length();
	int WordCount = (first - second) + 1;
	
	int sil = WordCount * 1.5 - .5;
	
	cout << "The word count is: " << WordCount << endl;

	if (sil < WordCount)
		cout << "The syllabul count is: " << WordCount << endl;
	if (sil > WordCount)
		cout << "The syllabul count is: " << sil << endl;
	
	

	
	
	return 0;
	
}


/*
void Loop(int x, string charector, string &f_word)     // function needs to take in more parameters.d
{
	string vLine;
	vLine = strtok(charector, " ");
	f_word [x] = vLine;
	
}

*/