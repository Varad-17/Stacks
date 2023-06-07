// We are gonna make a stack with help of linked list which will do a syntatic check on whether all the brackets are closed or not.

# include <bits/stdc++.h>

using namespace std;

struct node
{
 char bracket;
 node* next;

 node(char brackets)
 {
   bracket  = brackets;
 }
};

class Stack
{
    public :
 node* current;

 Stack()
 {
    current = NULL;
 }

 void check(string check)
 {
    bool error = false;
    for (int i = 0; i < check.length(); i++)    
    {
        char character = check[i];
    switch(character)
    {
        case '{':
        {
          node* add;
          add = new node('{');
          add->next = current;
          current   = add;
          break;
        }

        case '}':
        {   if (current == NULL) 
            {
            cout<<"ERROR! There is no opening of curly braces "<<'{'<<endl;
            error = true;
            }
            else if (current->bracket == '{')
            {
                current = current->next;
            }
            else 
            {
                cout<<"ERROR! First close the "<<current->bracket<<endl;
                error = true;
            }
            break;
        }


         case '(':
        {
          node* add;
          add = new node('(');
          add->next = current;
          current   = add;
          break;
        }

        case ')':
        {   if (current == NULL) 
            {
            cout<<"ERROR! There is no opening of brackets "<<'('<<endl;
            error = true;
            }
            else if (current->bracket == '(')
            {
                current = current->next;
            }
            else 
            {
                cout<<"ERROR! First close the "<<current->bracket<<endl;
                error = true;
            }
            break;
        }

        case '[':
        {
          node* add;
          add = new node('[');
          add->next = current;
          current   = add;
          break;
        }

        case ']':
        {   if (current == NULL) 
            {
            cout<<"ERROR! There is no opening of square brackets "<<'['<<endl;
            error = true;
            }
            else if (current->bracket == '[')
            {
                current = current->next;
            }
            else 
            {
                cout<<"ERROR! First close the "<<current->bracket<<endl;
                error = true;
            }
            break;
        }

        default:
        {
            break;
        }
    }
    }

    if(current != NULL) cout<<"ERROR! There are some unclosed brackets"<<endl;
    else if (!error) cout<<"Everything is ok"<<endl;
 }
};

int main()
{
    Stack bracket_check;
    bracket_check.check("[[({(Some Random text here !)})]]");
    bracket_check.check("[[({[)()})]]");

    return 0;
}