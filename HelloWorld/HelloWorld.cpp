#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * @brief Main function that prints a greeting message.
 * 
 * This function creates a vector of strings containing parts of a message.
 * It then iterates over the vector and prints each word followed by a space.
 * Finally, it prints a newline character.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main()
{
    vector<string> msg{
        "Hello",
        "C++",
        "World",
        "from",
        "Visual Studio"
    };

    for (const string& word : msg)
    {
        cout << word << " ";
    }

    cout << endl;

    return 0;
}