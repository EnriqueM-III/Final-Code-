#include <iostream>
#include <string>
using namespace std;

void coffee() {

    string coffee[3] = { "[1] Black Coffee - 1 AED", "[2] Milk Coffee - 2 AED", "[3] Ice Coffee - 3 AED", };
    int coffeeSelect;
    int money;
    char sugar;

    cout << "Thank you for choosing coffee! \n \nPlease select your coffee of choice :\n";
    for (int i = 0; i < 3; i++)
    {

        cout << coffee[i];
        cout << endl;
    }

    cin >> coffeeSelect;


    if (coffeeSelect == 1) {

        cout << "Please insert your money (Minimum 1 AED)\n";
        cin >> money;
        if (money >= 1) {

            cout << "\nYour Black Coffee is now being made . . . " << endl;
            cout << "Would you like to have sugar in your coffee? (Y/N) \n";
            cin >> sugar;

            switch (sugar) {
            case 'y':
            case 'Y':
                cout << "\nSugar added! \n";
                cout << "\nYour coffee is now ready to be served! \n";
                cout << "You inserted " << money << " AED. \n";
                cout << "You have a change of " << money - 1 << " AED." << endl;;
                cout << "Thank you for using our service!";
                break;
            case 'n':
            case 'N':
                cout << "\nYour coffee is now ready to be served! \n";
                cout << "You inserted " << money << " AED. \n";
                cout << "You have a change of " << money - 1 << " AED." << endl;;
                cout << "Thank you for using our service!";
                break;
            default:
                cout << "Invalid input";
            }


        }
        else if (money <= 0) {
            cout << "Insufficient funds/input.";
        }
        else {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Please type an amount... resetting. ";
        }
    }
    else if (coffeeSelect == 2) {
        cout << "Please insert your money (Minimum 2 AED)\n";
        cin >> money;
        if (money >= 2) {

            cout << "Your Milk Coffee is now being made . . . " << endl;
            cout << "Would you like to have sugar in your coffee? (Y/N) \n";
            cin >> sugar;

            switch (sugar) {
            case 'y':
            case 'Y':
                cout << "\nSugar added! \n";
                cout << "\nYour coffee is now ready to be served! \n";
                cout << "You inserted " << money << " AED. \n";
                cout << "You have a change of " << money - 2 << " AED." << endl;;
                cout << "Thank you for using our service!";
                break;
            case 'n':
            case 'N':
                cout << "\nYour coffee is now ready to be served! \n";
                cout << "You inserted " << money << " AED. \n";
                cout << "You have a change of " << money - 2 << " AED." << endl;;
                cout << "Thank you for using our service!";
                break;
            default:
                cout << "Invalid input";
            }


        }
        else if (money <= 0) {
            cout << "Insufficient funds/input.";
        }
        else {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Please type an amount... resetting. ";
        }
    }
    else if (coffeeSelect == 3) {
        cout << "Please insert your money (Minimum 3 AED)\n";
        cin >> money;
        if (money >= 3) {

            cout << "\nYour Ice Coffee is now being made . . . " << endl;
            cout << "Would you like to have sugar in your coffee? (Y/N) \n";
            cin >> sugar;

            switch (sugar) {
            case 'y':
            case 'Y':
                cout << "\nSugar added! \n";
                cout << "\nYour coffee is now ready to be served! \n";
                cout << "You inserted " << money << " AED. \n";
                cout << "You have a change of " << money - 3 << " AED." << endl;;
                cout << "Thank you for using our service!";
                break;
            case 'n':
            case 'N':
                cout << "\nYour coffee is now ready to be served! \n";
                cout << "You inserted " << money << " AED. \n";
                cout << "You have a change of " << money - 3 << " AED." << endl;;
                cout << "Thank you for using our service!";
                break;
            default:
                cout << "Invalid input";
            }


        }
        else if (money <= 0) {
            cout << "Insufficient funds/input.";
        }
        else {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Please type an amount... resetting. ";
        }
    }
    else {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Please select the only given options.";
    }


}

void tea() {
    string tea[3] = { "[1] Black Tea - 1 AED", "[2] Milk Tea - 2 AED", "[3] Ice Tea - 3 AED", };
    int teaSelect;
    int money;
    char sugar;

    cout << "Thank you for choosing tea! \n \nPlease select your tea of choice :\n";
    for (int i = 0; i < 3; i++)
    {

        cout << tea[i];
        cout << endl;
    }

    cin >> teaSelect;


    if (teaSelect == 1) {

        cout << "Please insert your money (Minimum 1 AED)\n";
        cin >> money;
        if (money >= 1) {

            cout << "\nYour Black Tea is now being made . . . " << endl;
            cout << "Would you like to have sugar in your tea? (Y/N) \n";
            cin >> sugar;

            switch (sugar) {
            case 'y':
            case 'Y':
                cout << "\nSugar added! \n";
                cout << "Your tea is now ready to be served! \n";
                cout << "You inserted " << money << " AED. \n";
                cout << "You have a change of " << money - 1 << " AED." << endl;;
                cout << "Thank you for using our service!";
                break;
            case 'n':
            case 'N':
                cout << "\nYour tea is now ready to be served! \n";
                cout << "You inserted " << money << " AED. \n";
                cout << "You have a change of " << money - 1 << " AED." << endl;;
                cout << "Thank you for using our service!";
                break;
            default:
                cout << "Invalid input";
            }


        }
        else if (money <= 0) {
            cout << "Insufficient funds/input.";
        }
        else {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Please type an amount... resetting. ";
        }
    }
    else if (teaSelect == 2) {
        cout << "Please insert your money (Minimum 2 AED)\n";
        cin >> money;
        if (money >= 2) {

            cout << "\nYour Milk Tea is now being made . . . " << endl;
            cout << "Would you like to have sugar in your tea? (Y/N) \n";
            cin >> sugar;

            switch (sugar) {
            case 'y':
            case 'Y':
                cout << "\nSugar added! \n";
                cout << "\nYour tea is now ready to be served! \n";
                cout << "You inserted " << money << " AED. \n";
                cout << "You have a change of " << money - 2 << " AED." << endl;;
                cout << "Thank you for using our service!";
                break;
            case 'n':
            case 'N':
                cout << "\nYour tea is now ready to be served! \n";
                cout << "You inserted " << money << " AED. \n";
                cout << "You have a change of " << money - 2 << " AED." << endl;;
                cout << "Thank you for using our service!";
                break;
            default:
                cout << "Invalid input";
            }


        }
        else if (money <= 0) {
            cout << "Insufficient funds/input.";
        }
        else {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Please type an amount... resetting. ";
        }
    }
    else if (teaSelect == 3) {
        cout << "Please insert your money (Minimum 3 AED)\n";
        cin >> money;
        if (money >= 3) {

            cout << "\nYour Ice Tea is now being made . . . " << endl;
            cout << "Would you like to have sugar in your tea? (Y/N) \n";
            cin >> sugar;

            switch (sugar) {
            case 'y':
            case 'Y':
                cout << "\nSugar added! \n";
                cout << "\nYour tea is now ready to be served! \n";
                cout << "You inserted " << money << " AED. \n";
                cout << "You have a change of " << money - 3 << " AED." << endl;;
                cout << "Thank you for using our service!";
                break;
            case 'n':
            case 'N':
                cout << "\nYour tea is now ready to be served! \n";
                cout << "You inserted " << money << " AED. \n";
                cout << "You have a change of " << money - 3 << " AED." << endl;;
                cout << "Thank you for using our service!";
                break;
            default:
                cout << "Invalid input";
            }


        }
        else if (money <= 0) {
            cout << "Insufficient funds/input.";
        }
        else {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Please type an amount... resetting. ";
        }
    }
    else {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Please select the only given options.";
    }


}


int main()
{
    char drinkType;
    bool drink = false;

    do {
        cout << "Welcome to The Beverage's automated drink service! Please select your type of drink! \n ";
        cout << "Press [C] for Coffee \n ";
        cout << "Press [T] for Tea \n ";
        cin >> drinkType;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        switch (drinkType)
        {
        case 'C':
        case 'c':
            drink = true;
            coffee();
            break;

        case 'T':
        case 't':
            drink = true;
            tea();
            break;
        default:
            cout << "Please select the options only \n \n \n \n Resetting service. . . . . ." << endl;

        }
    } while (!drink);
}