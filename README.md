## Dual Clock Display Program

### Project Overview

This C++ console app shows a digital clock in both 12-hour and 24-hour formats. It lets the user adjust the time by adding one hour, one minute, or one second, all through an easy-to-use menu. The project helps with understanding how to visualize and update time in different formats while practicing concepts like time manipulation, struct usage, and modular programming.

### Reflection

What did you do particularly well?
One of the best things about this program is its clean, modular design. Each task—whether it's displaying time, formatting it, or handling user input—is neatly organized into separate functions. This makes the code straightforward and easy to maintain. The way the 12-hour and 24-hour clocks are displayed side by side is also user-friendly and shows a clear focus on making the output easy to read.

### Where could I enhance my code?

Input Validation: Right now, the program doesn’t handle invalid inputs, like strings or characters. Adding input validation would make the application more secure and reliable.

User Time Input: The program currently starts with a hardcoded time of {0, 0, 0}. Allowing users to input their own starting time would make the app more flexible.

Use of Classes: Instead of using a struct, switching to a class and organizing the logic within it would better align with object-oriented programming practices.
These improvements would enhance code efficiency, user interaction, and scalability.

### What pieces were the most challenging?

Handling the transition between time units (e.g., when seconds reach 60 and must roll over into minutes) required careful thought to avoid logic errors. These cascading updates were managed using helper functions (addSecond, addMinute, addHour), which made the solution cleaner. I was able to debug the program by stepping through the code and consulting online C++ resources like cppreference.com and Stack Overflow.

### Transferable Skills

Modular Programming: Creating independent, reusable functions will be valuable in nearly every future coding project.

Time Manipulation Logic: Understanding how to calculate and represent time precisely is a useful skill for both UI and backend systems.

Code Formatting & Output Design: Formatting output using iomanip and aligning UI displays will help in future CLI-based programs.
Code Maintainability

To keep the program readable and adaptable:

I used clear, descriptive function and variable names.
Logic was broken into small, single-purpose functions.
Inline comments were added to explain key segments.
Code was kept free of hardcoded values beyond the initial time setup.

---

This project solidified my understanding of time formatting and control flow, and I now feel more confident working with structured data and user interaction in C++.
