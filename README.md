# File-handling-taks-1

COMPANY: CODTECH IT SOLUTIONS PVT.LTD
*NAME: Vinay Kumar Hembram
INTERN ID:CT04DG1922 
DOMAIN: C++ LANGUAGE
DURATION: 4 WEEKS
MENTOR: NEELA SANTOSH KUMAR
PARAGRAPH :
In this C++ program a simple and effective demonstration of basic file-handling operations have been provided. It showcases how to read from, write to, and append data to a text file using the fstream library in C++. File handling is an essential part of many software applications, as it allows data to be stored permanently and retrieved later. This program utilizes standard C++ features such as ofstream for output (writing and appending) and ifstream for input (reading), along with the use of strings and user input for interactive functionality. The program is menu-driven, meaning it continuously asks the user to choose an operation (write, append, read, or exit) until the exit option is selected.

The program starts by including the necessary headers: <iostream> for input/output operations, <fstream> for file handling, and <string> to manage textual data. Inside the main() function, the user is prompted to enter the name of the file they wish to work with. This filename is stored in a string variable and passed to each file-handling function as needed. The main part of the program is a while (true) loop that keeps running until the user decides to exit. Within this loop, a menu is displayed with four choices: 1 for writing, 2 for appending, 3 for reading, and 4 for exiting the program.

When the user selects option 1 (write), the writeFile() function is called. This function opens the file in write mode using ofstream. If the file does not open successfully (for example, due to permission issues or invalid paths), an error message is shown. If the file opens successfully, the user is prompted to enter some data to write. The cin.ignore() statement is used before getline() to clear any leftover newline characters in the input buffer from previous inputs. After collecting the user input, the program writes the data to the file and closes it. This operation overwrites the existing content of the file, meaning any previous data in the file is lost.

If the user selects option 2 (append), the appendFile() function is called. This function opens the file using ofstream with the ios::app flag, which stands for append mode. In this mode, the new data is added to the end of the existing content in the file without deleting the old content. The user is again prompted to enter the data to append, and the data is written to the file followed by closing it. This is useful when maintaining logs or when multiple pieces of information need to be stored sequentially.

Option 3 triggers the readFile() function. This function opens the file in read mode using ifstream. If the file is not found or cannot be opened, an error message is displayed. If the file opens correctly, the function reads its content line by line using a while loop with getline(). Each line is printed on the console, allowing the user to see the contents of the file. After the end of the file is reached, the file is closed.

Option 4 simply exits the program using return 0, which breaks out of the infinite loop and ends the execution. For any other number entered, an error message “Invalid choice” is displayed, and the menu is shown again.

This program is a good example for beginners learning how to work with files in C++. It covers the basic operations that are commonly used in real-world applications involving file storage and retrieval. It also demonstrates good practice in terms of user interaction, checking for file opening errors, and separating logic into well-named functions for clarity. With minor modifications, this code can be extended into more advanced applications like student databases, log systems, or note-taking tools. Overall, this is a foundational program that showcases the importance and use of file-handling techniques in C++ in a simple and structured way.

OUTPUT: 
<img width="1920" height="1020" alt="Image" src="https://github.com/user-attachments/assets/10244537-aba1-4cd6-bddf-891542fefb2c" />
