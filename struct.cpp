#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

struct User {

    string get_status() {
        return status;
    }

    string firstname;
    string lastname;

    private:
        string status = "69";
};

main() {

    User person;

    person.firstname = "Dude";
    person.lastname = "Guy";

    // Try putting person.staus = "Hello" or whatever word and see what happens

    string person_status = person.get_status();

    cout << "Firstname: " << person.firstname << "\n" 
         << "Lastname: " << person.lastname << "\n"
         << "Status: " << person_status << endl;

    return 0;
}