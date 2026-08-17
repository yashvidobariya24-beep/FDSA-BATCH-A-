
#include <iostream>
using namespace std;


class node
{
public:

    int data;
    node* next;

    node(int info)
    {
        data = info;
        next = NULL;
    }

};


class queue
{
private:

    node* head;

public:

    queue()
    {
        head = NULL;
    }


    void insertfront(int info)
    {
        node* newnode = new node(info);

        newnode->next = head;
        head = newnode;
    }


    void insertend(int info)
    {
        node* newnode = new node(info);

        if(head == NULL)
        {
            head = newnode;
            return;
        }

        node* temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }


    void atposition(int info, int position)
    {
        if(position == 0)
        {
            insertfront(info);
            return;
        }

        node* temp = head;

        for(int i = 0; i < position - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }

        if(temp == NULL)
        {
            cout << "Invalid position!" << endl;
            return;
        }

        node* newnode = new node(info);

        newnode->next = temp->next;
        temp->next = newnode;
    }


    
    void deleteby(int info)
    {
        if(head == NULL)
        {
            return;
        }

     
        if(head->data == info)
        {
            node* deletenode = head;

            head = head->next;

            delete deletenode;

            return;
        }

        node* temp = head;

       
        while(temp->next != NULL && temp->next->data != info)
        {
            temp = temp->next;
        }

      
        if(temp->next == NULL)
        {
            return;
        }

        node* deletenode = temp->next;

        temp->next = deletenode->next;

        delete deletenode;
    }


    void reverse(node* temp)
    {
        if(temp == NULL)
        {
            return;
        }

        reverse(temp->next);

        cout << temp->data << " ";
    }


    void reversePrint()
    {
        cout << "Reverse: ";

        reverse(head);

        cout << endl;
    }


    
    void display()
    {
        node* temp = head;

        while(temp != NULL)
        {
            cout << temp->data << " ";

            temp = temp->next;
        }

        cout << endl;
    }

};


int main()
{

    queue q;


    q.insertfront(98);
    q.display();

    q.insertfront(99);
    q.display();

    q.insertfront(100);
    q.display();

    q.insertfront(101);
    q.display();

    q.insertend(102);
    q.display();

    q.insertend(103);
    q.display();

    q.insertend(104);
    q.display();


  
    q.deleteby(101);
    q.display();


   
    q.atposition(10,3);
    q.display();


    q.atposition(500,5);
    q.display();


    q.reversePrint();


    return 0;
}