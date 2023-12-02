#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
  //make vectors for book titles and book aviability
    vector<string> bookTitles = {"Babel", "Forth Wing", "Shadow and Bone", "Throne of Glass", "Narnia"};
    vector<bool> availability(bookTitles.size(), true); // книжка доступна

    int choice;

    while (true) 
    {
        cout << "MENU"<<endl;
        cout << "1. The list of all books"<<endl;
        cout << "2. Borrow a book"<<endl;
        cout << "3. Return a book"<<endl;
        cout << "4. Exit"<<endl;

        cout<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                cout << "List of all books: "<<endl;
                for (const auto& title : bookTitles) 
                {
                  cout << title << endl;
                }
                break;

            case 2:
             while (true) 
             {
             cout << "Enter the book title you want to borrow: "<<endl;
             string borrowTitle;
             cin >> borrowTitle;
   
             int index = -1;
               for (int i = 0; i < bookTitles.size(); ++i) 
               {
                if (bookTitles[i] == borrowTitle) 
                {
                index = i;
                break;  
                }  
               }

               if (index != -1) 
               {
                 if (availability[index]) 
                 {
                 cout << "You borrowed the book: " << borrowTitle << endl;
                 availability[index] = false;
                 break;  
                 } else 
                    {
                      cout << "Sorry, this book is not available. Please choose another one."<<endl;
                    }
                } else
                  {
                      cout << "Book was not found. Please enter a valid book title."<<endl;
                  }
                 }
                 break;

                 case 3:
                 while (true) 
                 {
                    cout << "Enter the book title you want to return: "<<endl;
                    string returnTitle;
                    cin >> returnTitle;

                 
                  int index = -1;
                  for (int i = 0; i < bookTitles.size(); ++i) 
                  {
                     if (bookTitles[i] == returnTitle) 
                     {
                         index = i;
                         break;  
                     }
                  }

                    if (index != -1) 
                    {
                      if (!availability[index]) 
                      {
                         cout << "You returned the book: " << returnTitle << endl;
                         availability[index] = true;
                         break;  
                      } else 
                      {
                         cout << "This book was not borrowed from the library. Please enter another book title."<<endl;
                      }
                    } else 
                       {
                         cout << "Book not found. Please enter a valid book title."<<endl;
                       }
                 }
                 break;


            case 4:
                cout << "You are exiting the program, goodbye!"<<endl;
                return 0;

            default:
                cout << "Invalid choice. Please choose an option from the list."<<endl;
                goto error;
        }

        // Ask the user if they want to perform another operation
        cout << "Do you want to perform another operation? \n1 - Yes \n0 - No"<<endl;
        cin >> choice;
        if (choice != 1) 
        {
            break;
        }
    }

   
    error:
        cout << "Returning to the main menu."<<endl;
        return 0;
    }   




