#include <iostream>

using namespace std;



string removeComments(string prog)

{

	int k = prog.length();

	string result;

	bool single_comments = false;

	bool multiple_comments = false;

	for (int j=0; j<k; j++)

	{

		if (single_comments == true && prog[j] == '\n')

			single_comments = false;

		else if (multiple_comments == true && prog[j] == '*' && prog[j+1] == '/')

			multiple_comments = false, j++;

		else if (single_comments || multiple_comments)

			continue;


		else if (prog[j] == '/' && prog[j+1] == '/')

			single_comments = true, j++;

		else if (prog[j] == '/' && prog[j+1] == '*')

			multiple_comments = true, j++;


		else result += prog[j];

	}

	return result;

}


int main ()

{

	string prog = " /* Example program */ \n"

				" int main int() \n"

				" {		 \n"

				"	 // variable declaration \n"

				"	 int x, y, z; \n"

				"	 /* This is an example of \n"

				"		 multiline	 \n"

				"		 comment for \n"

				"		 testing */	 \n"

				"	 x = y + z;	 \n"

				" }		 \n";

	cout << "Given Program \n";

	cout << prog << endl;

	cout << " Modified Program ";

	cout << removeComments(prog);

	return 0;

}
