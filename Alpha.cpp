#include <iostream>

int main() {
    std::cout << "Don't run me... Just copy my code." << std::endl;
    return 0;
}

/*
 * Example snippets

    ?:
std::cout << (x > 0 ? "x is positive" : "x is non-positive");


 #define PI 3.14159
 #define MAX(a, b) ((a) > (b) ? (a) : (b))

 int x = 10;
 int y = 5;
 int max = MAX(x, y);


//Declare array
const int size = 5;
int numbers[size];


//Declare struct
struct asd {
  int idk;
  string asd_str;
  asd* next_link;
};


//Calculate array size
int arrSize = sizeof(arr) / sizeof(arr[0]);


//ASCII
    char space = ' ';               32
    char newline = '\n';            10
    char carriageReturn = '\r';     13
    char tab = '\t';                09
    char verticalTab = '\v';        11
    char formFeed = '\f';           12
    char backspace = '\b';          08


//Pointers
    int number = 42;
    int* ptr = &number;

    std::cout << "Value of number: " << number << std::endl;
    std::cout << "Address of number: " << &number << std::endl;
    std::cout << "Value of ptr: " << ptr << std::endl;
    std::cout << "Value pointed by ptr: " << *ptr << std::endl;




 */

//------------------------------------------------------------------------------------

#include <iostream>

char getCharInput() {
    char input;
    std::cout << "Enter a character: ";
    std::cin >> input;
    return input;
}


#include <iostream>
#include <string>

std::string getStringInput() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    return input;
}

#include <iostream>
#include <string>

std::string getStringInput(int& length) {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    length = input.length();
    return input;
}


#include <iostream>

int getIntInput() {
    int input;
    std::cout << "Enter an integer: ";
    std::cin >> input;
    return input;
}

#include <iostream>
#include <string>

int getIntInput(int& length) {
    int input;
    std::string inputString;
    std::cout << "Enter an integer: ";
    std::cin >> inputString;
    length = inputString.length();
    input = std::stoi(inputString);
    return input;
}


#include <iostream>

double getDoubleInput() {
    double input;
    std::cout << "Enter a double: ";
    std::cin >> input;
    return input;
}

#include <iostream>
#include <string>

double getDoubleInput(int& length) {
    double input;
    std::string inputString;
    std::cout << "Enter a double: ";
    std::cin >> inputString;
    length = inputString.length();
    input = std::stod(inputString);
    return input;
}


#include <iostream>

bool getBoolInput() {
    bool input;
    std::cout << "Enter a boolean (1 for true, 0 for false): ";
    std::cin >> input;
    return input;
}

//------------------------------------------------------------------------------------

#include <iostream>

int charToAscii(char c) {
    return static_cast<int>(c);
}

//------------------------------------------------------------------------------------

#include <iostream>
#include <string>

void convertToUppercase(std::string& str, int& changedCount, int& originalCount) {
    changedCount = 0;
    originalCount = 0;

    for (char& c : str) {
        if (std::islower(c)) {
            c = std::toupper(c);
            changedCount++;
        } else {
            originalCount++;
        }
    }
}

/*
std::string input = "Hello, World!";
int changedCount, originalCount;
convertToUppercase(input, changedCount, originalCount);
std::cout << "Modified string: " << input << std::endl;
std::cout << "Characters changed: " << changedCount << std::endl;
std::cout << "Characters original: " << originalCount << std::endl;
 */


#include <iostream>
#include <string>

void convertToLowercase(std::string& str, int& changedCount, int& originalCount) {
    changedCount = 0;
    originalCount = 0;

    for (char& c : str) {
        if (std::isupper(c)) {
            c = std::tolower(c);
            changedCount++;
        } else {
            originalCount++;
        }
    }
}

/*
std::string input = "Hello, World!";
int changedCount, originalCount;
convertToLowercase(input, changedCount, originalCount);
std::cout << "Modified string: " << input << std::endl;
std::cout << "Characters changed: " << changedCount << std::endl;
std::cout << "Characters original: " << originalCount << std::endl;
 */

#include <iostream>
#include <string>

std::string invertCase(std::string str) {

    for (char& c : str) {
        if (std::islower(c)) {
            c = std::toupper(c);
        } else if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }

    return  str;
}

/*
std::string input = "Hello, World!";
int changedCount, originalCount;
invertCase(input, changedCount, originalCount);
std::cout << "Modified string: " << input << std::endl;
std::cout << "Characters changed: " << changedCount << std::endl;
std::cout << "Characters original: " << originalCount << std::endl;
 */

//------------------------------------------------------------------------------------

#include <iostream>
#include <string>

int countCharacters(int number) {
    std::string numberString = std::to_string(number);
    return numberString.length();
}


#include <iostream>
#include <string>

int countCharacters(double number) {
    std::string numberString = std::to_string(number);
    return numberString.length();
}

/*
int intValue = 12345;
double doubleValue = 3.14159;

int intCharCount = countCharacters(intValue);
int doubleCharCount = countCharacters(doubleValue);

std::cout << "Number of characters in int: " << intCharCount << std::endl;
std::cout << "Number of characters in double: " << doubleCharCount << std::endl;
 */

//------------------------------------------------------------------------------------

#include <iostream>

void findFirstLowest(const int* arr, int size, int& minValue, int& minIndex) {
    if (size <= 0) {
        // Handle the case where the array is empty or invalid.
        std::cout << "Invalid array size." << std::endl;
        minValue = 0;
        minIndex = -1;
        return;
    }

    minValue = arr[0];
    minIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
    }
}


#include <iostream>

void findFirstLargest(const int* arr, int size, int& maxValue, int& maxIndex) {
    if (size <= 0) {
        // Handle the case where the array is empty or invalid.
        std::cout << "Invalid array size." << std::endl;
        maxValue = 0;
        maxIndex = -1;
        return;
    }

    maxValue = arr[0];
    maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }
}

/*
int array[] = {5, 2, 8, 4, 1};
int size = sizeof(array) / sizeof(array[0]);

int minValue, minIndex;
findFirstLowest(array, size, minValue, minIndex);
std::cout << "First lowest value: " << minValue << " at index: " << minIndex << std::endl;

int maxValue, maxIndex;
findFirstLargest(array, size, maxValue, maxIndex);
std::cout << "First largest value: " << maxValue << " at index: " << maxIndex << std::endl;
 */

//------------------------------------------------------------------------------------

#include <iostream>

void findFirstLowest(const double* arr, int size, double& minValue, int& minIndex) {
    if (size <= 0) {
        // Handle the case where the array is empty or invalid.
        std::cout << "Invalid array size." << std::endl;
        minValue = 0.0;
        minIndex = -1;
        return;
    }

    minValue = arr[0];
    minIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
    }
}


#include <iostream>

void findFirstLargest(const double* arr, int size, double& maxValue, int& maxIndex) {
    if (size <= 0) {
        // Handle the case where the array is empty or invalid.
        std::cout << "Invalid array size." << std::endl;
        maxValue = 0.0;
        maxIndex = -1;
        return;
    }

    maxValue = arr[0];
    maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }
}

/*
double array[] = {5.5, 2.2, 8.8, 4.4, 1.1};
int size = sizeof(array) / sizeof(array[0]);

double minValue;
int minIndex;
findFirstLowest(array, size, minValue, minIndex);
std::cout << "First lowest value: " << minValue << " at index: " << minIndex << std::endl;

double maxValue;
int maxIndex;
findFirstLargest(array, size, maxValue, maxIndex);
std::cout << "First largest value: " << maxValue << " at index: " << maxIndex << std::endl;
 */

//------------------------------------------------------------------------------------

#include <iostream>
#include <vector>

template<typename T>
int findValueIndex(const std::vector<T>& vec, const T& value) {
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] == value) {
            return i;
        }
    }
    return -1; // Return -1 if the value is not found
}

/*
std::vector<int> numbers = {5, 2, 8, 4, 6};

int valueToFind = 8;
int index = findValueIndex(numbers, valueToFind);
if (index != -1) {
    std::cout << "Value " << valueToFind << " found at index " << index << std::endl;
} else {
    std::cout << "Value " << valueToFind << " not found in the vector" << std::endl;
}

std::vector<std::string> names = {"Alice", "Bob", "Charlie", "Alice"};

std::string nameToFind = "Charlie";
index = findValueIndex(names, nameToFind);
if (index != -1) {
    std::cout << "Value " << nameToFind << " found at index " << index << std::endl;
} else {
    std::cout << "Value " << nameToFind << " not found in the vector" << std::endl;
}
 */

//------------------------------------------------------------------------------------

#include <iostream>
#include <algorithm>
#include <cmath>

double calculateAverage(const int* arr, int size) {
    if (size <= 0) {
        // Handle the case where the array is empty or invalid.
        std::cout << "Invalid array size." << std::endl;
        return 0.0;
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return static_cast<double>(sum) / size;
}

double calculateMedian(const int* arr, int size) {
    if (size <= 0) {
        // Handle the case where the array is empty or invalid.
        std::cout << "Invalid array size." << std::endl;
        return 0.0;
    }

    int* sortedArr = new int[size];
    std::copy(arr, arr + size, sortedArr);
    std::sort(sortedArr, sortedArr + size);

    double median;
    if (size % 2 == 0) {
        median = static_cast<double>(sortedArr[size / 2 - 1] + sortedArr[size / 2]) / 2.0;
    } else {
        median = static_cast<double>(sortedArr[size / 2]);
    }

    delete[] sortedArr;

    return median;
}


#include <iostream>
#include <algorithm>
#include <cmath>

double calculateAverage(const double* arr, int size) {
    if (size <= 0) {
        // Handle the case where the array is empty or invalid.
        std::cout << "Invalid array size." << std::endl;
        return 0.0;
    }

    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum / size;
}

double calculateMedian(const double* arr, int size) {
    if (size <= 0) {
        // Handle the case where the array is empty or invalid.
        std::cout << "Invalid array size." << std::endl;
        return 0.0;
    }

    double* sortedArr = new double[size];
    std::copy(arr, arr + size, sortedArr);
    std::sort(sortedArr, sortedArr + size);

    double median;
    if (size % 2 == 0) {
        median = (sortedArr[size / 2 - 1] + sortedArr[size / 2]) / 2.0;
    } else {
        median = sortedArr[size / 2];
    }

    delete[] sortedArr;

    return median;
}

/*
int intArray[] = {5, 2, 8, 4, 1};
int intSize = sizeof(intArray) / sizeof(intArray[0]);

double doubleArray[] = {5.5, 2.2, 8.8, 4.4, 1.1};
int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);

double intAverage = calculateAverage(intArray, intSize);
double intMedian = calculateMedian(intArray, intSize);

double doubleAverage = calculateAverage(doubleArray, doubleSize);
double doubleMedian = calculateMedian(doubleArray, doubleSize);

std::cout << "Integer Array Average: " << intAverage << std::endl;
std::cout << "Integer Array Median: " << intMedian << std::endl;

std::cout << "Double Array Average: " << doubleAverage << std::endl;
std::cout << "Double Array Median: " << doubleMedian << std::endl;

 */

//------------------------------------------------------------------------------------

#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> splitString(const std::string& str, char delimiter) {
    std::vector<std::string> substrings;
    std::string substring;

    for (char c : str) {
        if (c == delimiter) {
            substrings.push_back(substring);
            substring.clear();
        } else {
            substring += c;
        }
    }

    if (!substring.empty()) {
        substrings.push_back(substring);
    }

    return substrings;
}

/*
std::string input = "Hello,World,How,Are,You";
char delimiter = ',';

std::vector<std::string> substrings = splitString(input, delimiter);

std::cout << "Substrings: ";
for (const std::string& substring : substrings) {
    std::cout << substring << " ";
}
std::cout << std::endl;
 */

//------------------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <string>

template <typename T>
T* vectorToArray(const std::vector<T>& vec) {
    T* arr = new T[vec.size()];
    for (size_t i = 0; i < vec.size(); i++) {
        arr[i] = vec[i];
    }
    return arr;
}

/*
std::vector<int> vec = {1, 2, 3, 4, 5};

int* arr = vectorToArray(vec);      //     std::string* arr = vectorToArray(vec);

// Printing the array
for (size_t i = 0; i < vec.size(); i++) {
std::cout << arr[i] << " ";
}
std::cout << std::endl;

delete[] arr;
*/


#include <iostream>
#include <vector>

template <typename T, size_t N>
std::vector<T> arrayToVector(const T (&arr)[N]) {
    std::vector<T> vec(arr, arr + N);
    return vec;
}

/*
int arr[] = {1, 2, 3, 4, 5};
std::string strArray[] = {"Hello", "World", "How", "Are", "You"};

std::vector<int> intVec = arrayToVector(arr);
std::vector<std::string> strVec = arrayToVector(strArray);

// Printing the vector elements
for (const auto& element : intVec) {
    std::cout << element << " ";
}
std::cout << std::endl;

for (const auto& element : strVec) {
    std::cout << element << " ";
}
std::cout << std::endl;
 */

//------------------------------------------------------------------------------------

#include <iostream>
#include <vector>

template <typename Container>
void printContainer(const Container& container) {
    for (const auto& element : container) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

/*
int arr[] = {1, 2, 3, 4, 5};
std::vector<double> vec = {1.1, 2.2, 3.3, 4.4, 5.5};
std::string strArray[] = {"Hello", "World", "How", "Are", "You"};

printContainer(arr);
printContainer(vec);
printContainer(strArray);
 */

//------------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::vector<std::string> readLinesFromFile(const std::string& filename) {
    std::vector<std::string> lines;
    std::ifstream file(filename);

    if (!file) {
        std::cerr << "Failed to open file: " << filename << std::endl;
        return lines;
    }

    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    file.close();

    return lines;
}

/*
std::string filename = "example.txt";

std::vector<std::string> lines = readLinesFromFile(filename);

std::cout << "Lines from file:" << std::endl;
for (const std::string& line : lines) {
std::cout << line << std::endl;
}
*/


#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void writeLinesToFile(const std::string& filename, const std::vector<std::string>& lines) {
    std::ofstream file(filename);

    if (!file) {
        std::cerr << "Failed to create file: " << filename << std::endl;
        return;
    }

    for (const std::string& line : lines) {
        file << line << std::endl;
    }

    file.close();

    std::cout << "Lines successfully written to file: " << filename << std::endl;
}

/*
std::string filename = "example.txt";
std::vector<std::string> lines = {"Hello", "World", "How", "Are", "You"};

writeLinesToFile(filename, lines);
 */


void appendLinesToFile(const std::string& filename, const std::vector<std::string>& lines) {
    std::ofstream file(filename, std::ios::app);

    if (!file) {
        std::cerr << "Failed to open file for appending: " << filename << std::endl;
        return;
    }

    for (const std::string& line : lines) {
        file << line << std::endl;
    }

    file.close();

    std::cout << "Lines successfully appended to file: " << filename << std::endl;
}

/*
std::string filename = "example.txt";
std::vector<std::string> lines = {"Hello", "World", "How", "Are", "You"};

appendLinesToFile(filename, lines);
 */

//------------------------------------------------------------------------------------

#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

std::string reverseString(const std::string& input) {
    std::string reversed = input;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

std::string reverseDouble(double input) {
    std::ostringstream oss;
    oss << input;
    std::string inputString = oss.str();
    std::reverse(inputString.begin(), inputString.end());
    double reversed = std::stod(inputString);
    return std::to_string(reversed);
}

/*
std::string str = "Hello, World!";
std::string reversedStr = reverseString(str);
std::cout << "Reversed string: " << reversedStr << std::endl;

double number = 1234.5678;
std::string reversedNumber = reverseDouble(number);
std::cout << "Reversed double: " << reversedNumber << std::endl;
*/

//------------------------------------------------------------------------------------

#include <iostream>

const int ROWS = 3;
const int COLS = 3;

int sumRow(const int arr[ROWS][COLS], int row) {
    int sum = 0;
    for (int col = 0; col < COLS; ++col) {
        sum += arr[row][col];
    }
    return sum;
}

int sumColumn(const int arr[ROWS][COLS], int col) {
    int sum = 0;
    for (int row = 0; row < ROWS; ++row) {
        sum += arr[row][col];
    }
    return sum;
}

/*
int arr[ROWS][COLS] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

int rowSum = sumRow(arr, 1);
std::cout << "Sum of row 1: " << rowSum << std::endl;

int colSum = sumColumn(arr, 2);
std::cout << "Sum of column 2: " << colSum << std::endl;
 */


#include <iostream>

//const int ROWS = 3;
//const int COLS = 3;

void rotateArray(int arr[ROWS][COLS], int direction) {
    int rotated[COLS][ROWS];

    if (direction == 1) {  // Rotate right
        for (int i = 0; i < COLS; ++i) {
            for (int j = 0; j < ROWS; ++j) {
                rotated[i][j] = arr[ROWS - 1 - j][i];
            }
        }
    } else if (direction == -1) {  // Rotate left
        for (int i = 0; i < COLS; ++i) {
            for (int j = 0; j < ROWS; ++j) {
                rotated[i][j] = arr[j][COLS - 1 - i];
            }
        }
    }

    // Copy the rotated array back to the original array
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr[i][j] = rotated[i][j];
        }
    }
}

/*
int arr[ROWS][COLS] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

//std::cout << "Original array:" << std::endl;
//printArray(arr);

rotateArray(arr, 1);  // Rotate right
//std::cout << "Array rotated right:" << std::endl;
//printArray(arr);

rotateArray(arr, -1);  // Rotate left
//std::cout << "Array rotated left:" << std::endl;
//printArray(arr);
 */

//------------------------------------------------------------------------------------

#include <iostream>

template<typename T>
T* createArray(int size) {
    return new T[size];
}

template<typename T>
T** create2DArray(int rows, int cols) {
    T** arr = new T*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new T[cols];
    }
    return arr;
}

/*
// Create a 1D array of integers with size 5
int* intArray = createArray<int>(5);
for (int i = 0; i < 5; ++i) {
    intArray[i] = i;
}

std::cout << "1D Array of integers:" << std::endl;
for (int i = 0; i < 5; ++i) {
    std::cout << intArray[i] << " ";
}
std::cout << std::endl;

// Create a 2D array of doubles with dimensions 3x4
double** doubleArray = create2DArray<double>(3, 4);
for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 4; ++j) {
        doubleArray[i][j] = i + j;
    }
}

std::cout << "2D Array of doubles:" << std::endl;
for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 4; ++j) {
        std::cout << doubleArray[i][j] << " ";
    }
    std::cout << std::endl;
}

// Cleanup memory
delete[] intArray;

for (int i = 0; i < 3; ++i) {
    delete[] doubleArray[i];
}
delete[] doubleArray;

//
//FOR STRUCT:
//
#include <iostream>

struct Person {
    std::string name;
    int age;
};

template<typename T>
T* createArray(int size) {
    return new T[size];
}

int main() {
    int size = 3;

    // Create an array of Person structs using createArray function
    Person* persons = createArray<Person>(size);

    // Initialize the array with some values
    persons[0] = {"Alice", 25};
    persons[1] = {"Bob", 30};
    persons[2] = {"Charlie", 35};

    // Print the array
    for (int i = 0; i < size; ++i) {
        std::cout << "Person " << i + 1 << ": "
                  << "Name: " << persons[i].name << ", Age: " << persons[i].age << std::endl;
    }

    // Cleanup memory
    delete[] persons;

    return 0;
}
*/

//------------------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <ctime>

int getRandomNumber(int min, int max) {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    return min + std::rand() % (max - min + 1);
}

/*
// Generate a random number between 0 and 9 INCLUSIVE
int randomNumber1 = getRandomNumber(0, 9);
std::cout << "Random number between 0 and 9: " << randomNumber1 << std::endl;

// Generate a random number between -5 and 5 INCLUSIVE
int randomNumber2 = getRandomNumber(-5, 5);
std::cout << "Random number between -5 and 5: " << randomNumber2 << std::endl;
*/

//------------------------------------------------------------------------------------

#include <iostream>
#include <vector>

template<typename T>
void insertElement(std::vector<T>& vec, int index, const T& element) {
    if (index >= 0 && index <= vec.size()) {
        vec.insert(vec.begin() + index, element);
    } else {
        std::cout << "Invalid index. Element not inserted." << std::endl;
    }
}

template<typename T>
void removeElement(std::vector<T>& vec, int index) {
    if (index >= 0 && index < vec.size()) {
        vec.erase(vec.begin() + index);
    } else {
        std::cout << "Invalid index. Element not removed." << std::endl;
    }
}

/*
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Original vector: ";
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    // Insert an element at index 2
    insertElement(numbers, 2, 10);

    std::cout << "After insertion at index 2: ";
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    // Remove the element at index 4
    removeElement(numbers, 4);

    std::cout << "After removal at index 4: ";
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
*/


//------------------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>

// Function to sort an array in increasing order
template<typename T>
void sortArrayIncreasing(T arr[], int size) {
    std::sort(arr, arr + size);
}

// Function to sort a vector in increasing order
template<typename T>
void sortVectorIncreasing(std::vector<T>& vec) {
    std::sort(vec.begin(), vec.end());
}

// Function to sort an array in decreasing order
template<typename T>
void sortArrayDecreasing(T arr[], int size) {
    std::sort(arr, arr + size, std::greater<T>());
}

// Function to sort a vector in decreasing order
template<typename T>
void sortVectorDecreasing(std::vector<T>& vec) {
    std::sort(vec.begin(), vec.end(), std::greater<T>());
}

/*
    int arr[] = {5, 2, 8, 1, 9};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    std::vector<double> vec = {3.14, 1.23, 2.71, 0.99};

    //std::string arr[] = {"banana", "apple", "orange", "grape"};
    //int arrSize = sizeof(arr) / sizeof(arr[0]);

    //std::vector<std::string> vec = {"cat", "dog", "elephant", "bear"};

    // Sort array and vector in increasing order
    sortArrayIncreasing(arr, arrSize);
    sortVectorIncreasing(vec);

    // Sort array and vector in increasing order
    sortArrayIncreasing(arr, arrSize);
    sortVectorIncreasing(vec);

    std::cout << "Array in increasing order: ";
    for (int i = 0; i < arrSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Vector in increasing order: ";
    for (const auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Sort array and vector in decreasing order
    sortArrayDecreasing(arr, arrSize);
    sortVectorDecreasing(vec);

    std::cout << "Array in decreasing order: ";
    for (int i = 0; i < arrSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Vector in decreasing order: ";
    for (const auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
*/

//------------------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
void removeDuplicates(std::vector<T>& input) {
    std::sort(input.begin(), input.end()); // Sort the vector

    auto last = std::unique(input.begin(), input.end()); // Remove consecutive duplicates

    input.erase(last, input.end()); // Erase the duplicate elements from the vector
}

/*
    // Create a vector with duplicates
    std::vector<int> numbers = {1, 2, 2, 3, 3, 3, 4, 5, 5};

    // Remove duplicates from the vector
    removeDuplicates(numbers);

    // Print the vector after removing duplicates
    std::cout << "Vector after removing duplicates: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
*/

//------------------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
bool valueExists(const std::vector<T>& input, const T& value) {
    return std::find(input.begin(), input.end(), value) != input.end();
}

/*
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Check if a value exists in the vector
    int searchValue = 3;
    bool exists = valueExists(numbers, searchValue);

    // Print the result
    std::cout << "Value " << searchValue << (exists ? " exists" : " does not exist") << " in the vector." << std::endl;
*/

//------------------------------------------------------------------------------------

#include <iostream>
#include <vector>

template<typename T>
void switchValues(std::vector<T>& input, int index1, int index2) {
    if (index1 >= 0 && index1 < input.size() && index2 >= 0 && index2 < input.size()) {
        T temp = input[index1]; // Store the value at index1 in a temporary variable
        input[index1] = input[index2]; // Assign the value at index2 to index1
        input[index2] = temp; // Assign the temporary variable value to index2
    }
}

/*
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Switch values at indices 1 and 3
    switchValues(numbers, 1, 3);

    // Print the vector after switching values
    std::cout << "Vector after switching values: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
*/

//------------------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>

// Define a struct
struct Person {
    std::string name;
    int age;
};

// Comparator function to compare persons based on age in ascending order
bool compareByAge(const Person& p1, const Person& p2) {
    return p1.age < p2.age;
}

bool compareByName(const Person& p1, const Person& p2) {
    return p1.name < p2.name;
}

void SortStruct() {
    // Create a vector of Person structs
    std::vector<Person> people = {{"John", 25}, {"Alice", 30}, {"Bob", 20}};

    // Sort the vector based on age using the compareByAge function
    std::sort(people.begin(), people.end(), compareByAge);

    // Sort the vector based on name using the compareByName function
    std::sort(people.begin(), people.end(), compareByName);

    // Print the sorted vector
    for (const auto& person : people) {
        std::cout << "Name: " << person.name << ", Age: " << person.age << std::endl;
    }
}

//------------------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
std::vector<T> makeCopy(const std::vector<T>& input) {
    std::vector<T> copy(input.size()); // Create a vector with the same size as the input vector

    std::copy(input.begin(), input.end(), copy.begin()); // Copy elements from input to copy

    return copy;
}

/*
    // Create a vector
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Make a copy of the vector
    std::vector<int> copy = makeCopy(numbers);

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the copied vector
    std::cout << "Copied vector: ";
    for (const auto& num : copy) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
*/

//------------------------------------------------------------------------------------

/* PONTER EXAMPLES - PONTER EXAMPLES - PONTER EXAMPLES
#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int* ptr = numbers;

    for (int i = 0; i < 5; i++) {
        std::cout << "Element " << i << ": " << *(ptr + i) << std::endl;
    }

    return 0;
}


#include <iostream>

int main() {
    int* ptr = new int; // Dynamically allocate memory for an integer

    *ptr = 10; // Assign a value to the dynamically allocated integer

    std::cout << "Value: " << *ptr << std::endl;

    delete ptr; // Deallocate the dynamically allocated memory

    return 0;
}

 */

//------------------------------------------------------------------------------------

/* TIME - TIME - TIME - TIME - TIME
#include <iostream>
#include <chrono>

int main() {
    // Get the current system time
    auto currentTime = std::chrono::system_clock::now();

    // Convert the system time to a timepoint with millisecond precision
    auto timepoint = std::chrono::time_point_cast<std::chrono::milliseconds>(currentTime);

    // Get the millisecond count since the epoch
    auto milliseconds = timepoint.time_since_epoch().count();

    std::cout << "Current system time in milliseconds: " << milliseconds << std::endl;

    return 0;
}

#include <iostream>
#include <chrono>

void performTask() {
    // Simulate some time-consuming task
    std::chrono::milliseconds taskDuration(2000);
    std::this_thread::sleep_for(taskDuration);
}

int main() {
    // Start measuring execution time
    auto startTime = std::chrono::high_resolution_clock::now();

    // Perform the task
    performTask();

    // Stop measuring execution time
    auto endTime = std::chrono::high_resolution_clock::now();

    // Calculate the duration in milliseconds
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();

    std::cout << "Task execution time: " << duration << " milliseconds" << std::endl;

    return 0;
}

#include <iostream>
#include <chrono>
#include <iomanip>

int main() {
    // Get the current system time
    auto currentTime = std::chrono::system_clock::now();

    // Convert the system time to a time_t object
    std::time_t currentTimeT = std::chrono::system_clock::to_time_t(currentTime);

    // Convert the time_t object to a string
    std::string timeString = std::ctime(&currentTimeT);

    // Print the formatted time
    std::cout << "Current system time: " << std::put_time(std::localtime(&currentTimeT), "%Y-%m-%d %H:%M:%S") << std::endl;

    return 0;
}
*/

//------------------------------------------------------------------------------------

#include <iostream>

struct Node {
    int data;
    Node* next;
};

Node* createSinglyLinkedList(const std::vector<int>& values) {
    Node* head = nullptr;
    Node* tail = nullptr;

    for (const auto& value : values) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}


/*
void printSinglyLinkedList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> values = {1, 2, 3, 4, 5};

    Node* singlyLinkedList = createSinglyLinkedList(values);
    std::cout << "Singly Linked List: ";
    printSinglyLinkedList(singlyLinkedList);

    // TODO: Clean up the memory by deleting the nodes

    return 0;
}
*/


#include <iostream>

struct Node2 {
    int data;
    Node2* prev;
    Node2* next;
};

Node2* createDoublyLinkedList(const std::vector<int>& values) {
    Node2* head = nullptr;
    Node2* tail = nullptr;

    for (const auto& value : values) {
        Node2* newNode = new Node2;
        newNode->data = value;
        newNode->prev = nullptr;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    return head;
}

/*
void printDoublyLinkedList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> values = {1, 2, 3, 4, 5};

    Node* doublyLinkedList = createDoublyLinkedList(values);
    std::cout << "Doubly Linked List: ";
    printDoublyLinkedList(doublyLinkedList);

    // TODO: Clean up the memory by deleting the nodes

    return 0;
}
*/

//------------------------------------------------------------------------------------

#include <iostream>

/*struct Node2 {
    int data;
    Node* prev;
    Node* next;
};*/

// Function to traverse a singly linked list
void traverseSinglyLinkedList(Node2* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Function to traverse a doubly linked list forward
void traverseDoublyLinkedListForward(Node2* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Function to traverse a doubly linked list backward
void traverseDoublyLinkedListBackward(Node2* tail) {
    while (tail != nullptr) {
        std::cout << tail->data << " ";
        tail = tail->prev;
    }
    std::cout << std::endl;
}

/*int main() {
    // Singly Linked List
    Node* singlyLinkedListHead = new Node{1, nullptr, nullptr};
    Node* node2 = new Node{2, nullptr, nullptr};
    Node* node3 = new Node{3, nullptr, nullptr};

    singlyLinkedListHead->next = node2;
    node2->next = node3;

    std::cout << "Singly Linked List: ";
    traverseSinglyLinkedList(singlyLinkedListHead);

    // Doubly Linked List
    Node* doublyLinkedListHead = new Node{4, nullptr, nullptr};
    Node* node5 = new Node{5, nullptr, nullptr};
    Node* node6 = new Node{6, nullptr, nullptr};

    doublyLinkedListHead->next = node5;
    node5->prev = doublyLinkedListHead;
    node5->next = node6;
    node6->prev = node5;

    std::cout << "Doubly Linked List Forward: ";
    traverseDoublyLinkedListForward(doublyLinkedListHead);

    std::cout << "Doubly Linked List Backward: ";
    traverseDoublyLinkedListBackward(node6);

    // TODO: Clean up the memory by deleting the nodes

    return 0;
}
*/

//------------------------------------------------------------------------------------