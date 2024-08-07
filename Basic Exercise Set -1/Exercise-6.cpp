#include <iostream> // Including the input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    cout << "\n\n Check whether the primitive values crossing the limits or not :\n"; // Outputting a message to check primitive values
	cout << "--------------------------------------------------------------------\n"; // Outputting a separator line

    // Declaring and initializing various primitive data type variables
    char gender = 'F';             // char is single-quoted
    bool isEmployed = true;         // true(non-zero) or false(0)
    unsigned short numOfsons = 2;  // [0, 255]
    short yearOfAppt = 2009;       // [-32767, 32768]
    unsigned int YearlyPackage = 1500000; // [0, 4294967295]
    double height = 79.48;         // With fractional part
    float gpa = 4.69f;             // Need suffix 'f' for float
    long totalDrawan = 12047235L;  // Suffix 'L' for long
    long long balance = 995324987LL;// Need suffix 'LL' for long long int  

    // Outputting the values of the variables
    cout << " The Gender is : " << gender << endl;
    cout << " Is she married? : " << isEmployed << endl;
    cout << " Number of sons she has : " << numOfsons << endl;
    cout << " Year of her appointment : " << yearOfAppt << endl;
    cout << " Salary for a year : " << YearlyPackage << endl;
    cout << " Height is : " << height << endl;
    cout << " GPA is " << gpa << endl;
    cout << " Salary drawn up to : " << totalDrawan << endl;
    cout << " Balance till : " << balance << endl;

    return 0; // Returning 0 to indicate successful program execution
}; // End of the main function
