#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;

class User {

    private:
        string status = "69";

    public:
        string firstname;
        string lastname;

        User() {

            std::cout << "Constructor" << std::endl;
        }

        User(std::string firstname, std::string lastname, std::string status) {

            this -> firstname = firstname;
            this -> lastname = lastname;
            this -> status = status;
        }

        string get_status() {

            return status;
        }
};

int add_unique_user(std::vector<User> &all_users, User user) {

    for(int i = 0; i < all_users.size(); i++) {
        if(user.firstname == all_users[i].firstname && user.lastname == all_users[i].lastname) {
            return i;
        }
    }

    all_users.push_back(user);
    return all_users.size() - 1;
}

main() {

    User person("Dude", "Guy", "Awesome");
    std::cout << person.get_status() << " " << person.lastname << std::endl;

    return 0;
}