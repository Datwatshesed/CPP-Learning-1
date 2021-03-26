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

    User person;
    User user1, user2, user3;

    person.firstname = "Dude";
    person.lastname = "Guy";
    std::vector<User> users;
    std::vector<User> users2;

    users.push_back(person);

    cout << users[0].firstname << endl;

    users.push_back(User());

    cout << users[1].firstname << endl;

    // Try putting person.staus = "Hello" or whatever word and see what happens

    string person_status = person.get_status();

    cout << "Firstname: " << person.firstname << "\n" 
         << "Lastname: " << person.lastname << "\n"
         << "Status: " << person_status << endl;

    user1.firstname = "Hello";
    user1.lastname = "Goodbye";

    user2.firstname = "John";
    user2.lastname = "Cena";

    user3.firstname = "Mickey";
    user3.lastname = "Mouse";

    User user4;

    user4.firstname = "John";
    user4.lastname = "Cen";

    users2.push_back(user1);
    users2.push_back(user2);
    users2.push_back(user3);

    int existing_user_pos = add_unique_user(users2, user4);

    cout << "The pos of the new user: " << existing_user_pos << endl;

    return 0;
}