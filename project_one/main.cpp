#include <iostream>
#include <iomanip>
using namespace std;

// Struct to hold time
struct Time
{
    int hour;
    int minute;
    int second;
};

// Function Prototypes
void displayClocks(const Time &);
void displayMenu();
void addHour(Time &);
void addMinute(Time &);
void addSecond(Time &);
void format12Hour(int, int &, string &);

int main()
{
    Time currentTime = {0, 0, 0}; // Get user input here if needed

    while (true)
    {
        displayClocks(currentTime);
        displayMenu();

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            addHour(currentTime);
            break;
        case 2:
            addMinute(currentTime);
            break;
        case 3:
            addSecond(currentTime);
            break;
        case 4:
            cout << "Exiting program.\n";
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }
}

// Display both 12-hour and 24-hour clocks
void displayClocks(const Time &t)
{
    string am_pm;
    int hour12;
    format12Hour(t.hour, hour12, am_pm);

    cout << "\n***************************     ***************************\n";
    cout << "*     12-Hour Clock      *     *      24-Hour Clock      *\n";
    cout << "*     " << setw(2) << setfill('0') << hour12 << ":"
         << setw(2) << setfill('0') << t.minute << ":"
         << setw(2) << setfill('0') << t.second << " " << am_pm
         << "      *     *      "
         << setw(2) << setfill('0') << t.hour << ":"
         << setw(2) << setfill('0') << t.minute << ":"
         << setw(2) << setfill('0') << t.second << "       *\n";
    cout << "***************************     ***************************\n";
}

// Display user menu
void displayMenu()
{
    cout << "\nMenu:\n";
    cout << "1 - Add One Hour\n";
    cout << "2 - Add One Minute\n";
    cout << "3 - Add One Second\n";
    cout << "4 - Exit Program\n";
    cout << "Enter your choice: ";
}

// Add one hour to the time
void addHour(Time &t)
{
    t.hour = (t.hour + 1) % 24;
}

// Add one minute to the time
void addMinute(Time &t)
{
    t.minute++;
    if (t.minute >= 60)
    {
        t.minute = 0;
        addHour(t);
    }
}

// Add one second to the time
void addSecond(Time &t)
{
    t.second++;
    if (t.second >= 60)
    {
        t.second = 0;
        addMinute(t);
    }
}

// Convert to 12-hour format
void format12Hour(int hour24, int &hour12, string &am_pm)
{
    if (hour24 == 0)
    {
        hour12 = 12;
        am_pm = "AM";
    }
    else if (hour24 < 12)
    {
        hour12 = hour24;
        am_pm = "AM";
    }
    else if (hour24 == 12)
    {
        hour12 = 12;
        am_pm = "PM";
    }
    else
    {
        hour12 = hour24 - 12;
        am_pm = "PM";
    }
}
