#include<iostream>
#include<string>

using namespace std;

class stack{
   private:
      int top;
      int arr[5];
    
    public:
       stack()
       {
          top = -1;
          for(int i = 0; i < 5; i++)
          {
             arr[i]=0;
          }
       }
        bool isempty()
        {
            if(top == -1)
               return true;
         else
               return false;
        }
        bool isfull()
        {
            if(top == 4)
               return true;
            else
               return false;
        }
        void push(int num)
        {
            if (isfull())
            {
                cout<< " The stack is overflow(The Stack is FULL!!!) "<<endl; 
            }
            else
            {
                top++;  // to increment it by 1
                arr[top] = num;
            }
        }
        int pop()
        {
            if(isempty())
            {
                cout<<" The stack is Underflow(The stack is EMPTY!!!"<<endl;
                return 0;
            }
            else
            {
                int pop_number = arr[top];
                arr[top] = 0;
                top--;
                return pop_number;
            }
        }

        int count()
        {
            return (top + 1);
        }
        int peek(int posi)
        {
            if(isempty())
            {
                cout<<" The stack is Underflow(The stack is EMPTY!!!"<<endl;ssssssss
                return 0;
            }
            else
            {
                return arr[posi];
            }
        }
        void change(int posi, int num)
        {
            arr[posi] = num;
            cout<<" Number is changed at the precise location..."<<posi<<endl;
        }

        void display()
        {
            cout<<" All the values(Numbers) in the stacks are: "<<endl;
            for (int i=4; i<=0; i--)
            {
                cout<<arr[i]<<endl;
            }
            
        }

};


int main()
{
    stack S1;
    int option, position, value;

    do
    {
        cout<<" HELLO DUDE/Bro. What operation do you wish to perform? Select Option number. Enter 0 to Exit."<<endl;
        cout<<" 1. Push()----> To add numbers to the array"<<endl;
        cout<<" 2. Pop()----> To remove a number from the array."<<endl;
        cout<<" 3. IsEmpty()----> To check if the array is empty."<<endl;
        cout<<" 4. Isfull()-----> To check if the array is full."<<endl;
        cout<<" 5. Peek()----> To get a number from the withuot actually removing it from the array."<<endl;
        cout<<" 6. Count()----> To count the number of elements left in the array."<<endl;
        cout<<" 7. change()----> To change a particular number in an array."<<endl;
        cout<<" 8. Display()----> To display the numbers in your array."<<endl;
        cout<<" 9. Clear screen----->Clear the operation."<<endl<<endl;

        cin>>option;
        switch(option)
        {
            case 1:
               cout<<" Enter the value you want to put in the stack: "<<endl;
               cin>>value;
               S1.push(value);
               cout<<endl;
               break;
            case 2:
               cout<<" Pop Function called the poped value: "<<S1.pop()<<endl;
               break;
            case 3:
               if(S1.isempty())
                  cout<<" SORRY... The stack is empty."<<endl;
               else
                  cout<<" SORRY... The stack is full. "<<endl;
                  cout<<endl;
               break;
            case 4:
               if(S1.isfull())
                  cout<<" SORRY... The stack is Full."<<endl;
               else
                  cout<<" SORRY... The stack is Empty. "<<endl;
                  cout<<endl;
               break;
            case 5:
               cout<<" Enter the position of number you want to be peek: "<<endl;
               cin>>position;
               cout<<" Peek Function called - value at position "<<position<<" is "<<S1.peek(position)<<endl;
               cout<<endl;
               break;
            case 6:
               cout<<" Count Function called - The number of items in the array are:  "<<S1.count()<<endl;
               cout<<endl;
               break;
            case 7:
               cout<<" Change Function called - "<<endl;
               cout<<" Enter the position of the item you want to change: ";
               cin>>position;
               cout<<endl;
               cout<<" Enter the value of the item you wish to change: ";
               cin>>value;
               S1.change(position, value);
               cout<<endl;
               break;
            case 8:
               cout<<" Display function called: "<<S1.display()<<endl;
               cout<<endl;
               break;
            case 9:
               system("cls");
               cout<<endl;
               break;
            default:
               cout<<" ERROR.....Enter proper optoin number!!! "<<endl;
        }
    }while (option!=0);
    
    return 0;
}
