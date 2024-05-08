#include "PhoneBook.hpp"

int main()
{
    int num_contacts;
    PhoneBook contacts[8];

    num_contacts = 0;
    std::string choice;
    do
    {
        std::cout << "\nSelect an option. Available commands: ADD, SEARCH, EXIT\n" << std::endl;
        std::cin >> choice;
        process_choice(choice, contacts, &num_contacts);
    } while(choice != "EXIT");
    return 0;
}

int is_digit(int n)
{
    if(n >= 0 && n <= 9)
        return 1;
    return 0;
}

int process_choice(std::string opt, PhoneBook *contacts, int *num_contacts)
{
    if(opt == "ADD" || opt == "SEARCH" || opt == "H")
    {   
        if(opt == "ADD")
        { 
            if(*num_contacts > 7)
                std::cout << "\nYour phonebook is full!" << std::endl;
            else
            {
                add_contact(contacts, *num_contacts);
                ++(*num_contacts);
            }
            std::cout << "\nNumber of contacts: " << *num_contacts << std::endl;
        }
        else if(opt == "SEARCH")
            search_contact(contacts, *num_contacts);
        else
            std::cout << "Invalid Input. Try again." << std::endl;
        return 1;
    }
    return 0;
}

void add_contact(PhoneBook *info, int contacts)
{ 
    std::cout << std::endl;
    std::cout << "You selected ADD. Please fill the following fields: " << std::endl;
    std::cout << std::endl;
    std::cout << "First Name: ";
    std::cin >> info[contacts].first_name;
    std::cout << "Last Name: ";
    std::cin >> info[contacts].last_name;
    std::cout << "Nickname: ";
    std::cin >> info[contacts].nickname;
    std::cout << "Login: ";
    std::cin >> info[contacts].login;
    std::cout << "Postal Address: ";
    std::cin >> info[contacts].postal_address;
    std::cout << "Email Address: ";
    std::cin >> info[contacts].email_address;
    std::cout << "Phone Number: ";
    std::cin >> info[contacts].phone_number;
    std::cout << "Birthday Date: ";
    std::cin >> info[contacts].birthday;
    std::cout << "Favourite Meal: ";
    std::cin >> info[contacts].fav_meal;
    std::cout << "Underwear color: ";
    std::cin >> info[contacts].underwear;
    std::cout << "Darkest Secret: ";
    std::cin >> info[contacts].secret;
}

int search_contact(PhoneBook *info, int contacts)
{
    int i;
    const int width = 10;
    const int fields = 4;
    const std::string separator = "|" ;
    const int total_width = width * 4 + separator.size() * fields ;
    const std::string line = std::string( total_width, '-' );

    std::cout << "\nYou selected SEARCH. Please choose the desired index:" << std::endl;
    std::cout << "\n";
    std::cout << line << '\n'
              << std::setw(width) << "index" << separator << std::setw(width) << "first n." << separator
              << std::setw(width) << "last n." << separator << std::setw(width) << "nickname" << separator << '\n' << line << '\n' ;

    for(i = 0 ; i < contacts ; ++i)
    {
        std::cout << std::setw(width) << i << separator << std::setw(width) << truncate(info[i].first_name, 9) << separator
                  << std::setw(width) << info[i].last_name << separator << std::setw(width) << info[i].nickname << separator
                  << std::fixed << std::setprecision(2) << '\n' ;
    }

    i = 0;
    std::cout << "\n\nContact number: ";
    std::cin >> i;
    std::cout << std::endl;
    std::cout << line << '\n';
    show_contact_info(info, &i);
    std::cout << line << '\n';
    return 1;
}

std::string truncate(std::string str, size_t width)
{
    if (str.length() > width)
            return str.substr(0, width) + ".";
    return str;
}

void show_contact_info(PhoneBook *contacts, int *i)
{
    std::cout << "Contact information: " << std::endl;
    std::cout << "\nFirst Name: ";
    std::cout << contacts[*i].first_name << std::endl;
    std::cout << "Last Name: ";
    std::cout << contacts[*i].last_name << std::endl;
    std::cout << "Nickname: ";
    std::cout << contacts[*i].nickname << std::endl;
    std::cout << "Login: ";
    std::cout << contacts[*i].login << std::endl;
    std::cout << "Postal Address: ";
    std::cout << contacts[*i].postal_address << std::endl;
    std::cout << "Email Address: ";
    std::cout << contacts[*i].email_address << std::endl;
    std::cout << "Phone Number: ";
    std::cout << contacts[*i].phone_number << std::endl;
    std::cout << "Birthday Date: ";
    std::cout << contacts[*i].birthday << std::endl;
    std::cout << "Favourite meal: ";
    std::cout << contacts[*i].fav_meal << std::endl;
    std::cout << "Underwear Color: ";
    std::cout << contacts[*i].underwear << std::endl;
    std::cout << "Darkest Secret: ";
    std::cout << contacts[*i].secret << std::endl;
    std::cout << std::endl;
}

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}