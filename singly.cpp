#include <iostream>
using namespace std;

struct node{
    int valuee;
    node *next;
};

struct SinglyLinkedList{
    node *head, *tail;
    SinglyLinkedList();

    void insertVal(int val);
    void insertValBeforeTail(int val);
    void insertAtHead(int val);
    void insertAfterHead(int val);
    void insertAtPos(int val, int pos);
    int findVal(int val);
    int findValAtPos(int pos);
    void traverse();
    void deleteVal(int val);
    void deletePos(int pos);
    void deleteAll();
    void deleteHead();
    void deleteTail();
};

SinglyLinkedList::SinglyLinkedList(){
        head = tail = NULL;
    }
void SinglyLinkedList::insertVal(int valuee)
    node *current=new node;
    current->valuee = val;
    current->next = NULL;
    if(head == NULL )
    {
        head = current;
        tail = current;
    }
    else
    {
        tail->next = current;
        tail = current;
    }
}
void SinglyLinkedList::insertValBeforeTail(int valu)////////////////////////////////
{
    node *scnd_last,*last;
    node *current=new node;
    current->valuee = val;
    if(head == NULL || head->next == NULL)
    {
        if(head == NULL)
        {
            head = current;
            tail = current;
            current->next = NULL;
        }
        else
        {
            current->next = head ;
            head = current;
        }
    }
    else
    {
        scnd_last = head ;
        last = scnd_last->next;
        while( last->next != NULL)
        {
            scnd_last = last ;
            last = last->next ;
        }
        current->next = last;
        scnd_last->next = current;
    }
}
void SinglyLinkedList::insertAtHead(int valu)
{
    node *current=new node;
    current->valuee = val;
    current->next = head ;
    head = current;
}
void SinglyLinkedList::insertAfterHead(int val)
{
    node *current=new node;
    current->valuee = val;
    current->next = head->next ;
    head->next = current;
}
void SinglyLinkedList::insertAtPos(int valu, int pos)
{
    int n = pos;
    node *priv = head;
    n-=2 ;
    while(n>0)
    {
        priv = priv->next;
        n--;
    }
    node *current=new node;
    current->valuee = val;
    if(pos == 1)
    {
        current->next = head;
        head = current;
    }
    else
    {
        current->next = priv->next;
        priv->next = current;
    }
}
int SinglyLinkedList::findVal(int valu)/////////////////////
{
    node *temp = head;
    int flag=0;
    while(1)
    {
        if(temp->valuee == val)
        {
            cout<<"value found"<<endl;
            flag=1;
            break;
        }
        else if(temp->next == NULL ) break;
        temp = temp->next;
    }
    if(flag == 0) cout<<"value Not found :( "<<endl;
}

int SinglyLinkedList::findValAtPos(int pos)
{
    int i;
    node *temp = head;
    for(i=2 ; i<= pos ; i++)
        temp = temp->next;
    cout<<temp->val<<endl;
}

void SinglyLinkedList::traverse()
{
    node *temp = head;
    if(head==NULL) cout<<"list empty"<<endl;
    else
    {
        while( temp != NULL)
        {
            cout<<temp->val<<endl;
            temp = temp->next;
        }
    }
}
void SinglyLinkedList::deleteVal(int valu)
{
    node *priv = head , *temp = priv->next;
    if(head->valuee == val)
    {
        head = head->next;
    }
    else
    {
        while(temp->valuee != val)
        {
            priv = temp;
            temp = temp->next;
        }
        priv->next = temp->next;
    }
}
void SinglyLinkedList::deletePos(int pos)////////////////////////////
{
    int n = pos;
    if(pos==1)
        head = head->next;
    else
    {
        node *priv = head,*temp ;
        n-=2;
        while(n>0)
        {
            priv = priv->next;
            n--;
        }
        priv->next = temp;
        priv->next = temp->next;
    }
}
void SinglyLinkedList::deleteAll()
{
    head = NULL;
    tail = NULL;
}
void SinglyLinkedList::deleteHead()
{
    head = head->next;
}
void SinglyLinkedList::deleteTail()
{
    node *priv,*last;
    if(head->next == NULL)
        head = NULL;
    else
    {
        last = head;
        while(last->next != NULL)
        {
            priv = last;
            last = last->next;
        }
        priv->next = NULL;
        tail = priv;
    }
}

int main()
{
    SinglyLinkedList *wow = new SinglyLinkedList;
    int operatn,i,ps,x,k;
    cout<<"How many operation u want to do?? :";
    cin>>operatn;
    cout<<"to insertVal , press 1"<<endl;
    cout<<"to insertValBeforeTail , press 2"<<endl;
    cout<<"to insertAtHead , press 3"<<endl;
    cout<<"to insertAfterHead press 4"<<endl;
    cout<<"to insertAtPos press 5"<<endl;
    cout<<"to findVal press 6"<<endl;
    cout<<"to findValAtPos press 7"<<endl;
    cout<<"to traverse press 8"<<endl;
    cout<<"to deleteVal press 9"<<endl;
    cout<<"to deletePos press 10"<<endl;
    cout<<"to deleteAll press 11"<<endl;
    cout<<"to deleteHead press 12"<<endl;
    cout<<"to deleteTail press 13"<<endl;
    for(i=1 ; i<=operatn ; i++)
    {
        cout<<"please press ur operation nmbr: " <<endl;
        cin>>k;
        if(k==1)
        {
            cin>>x;
            wow->insertVal(x);
        }
        else if(k==2)
        {
            cin>>x;
            wow->insertValBeforeTail(x);
        }
        else if(k==3)
        {
            cin>>x;
            wow->insertAtHead(x);
        }
        else if(k==4)
        {
            cin>>x;
            wow->insertAfterHead(x);
        }
        else if(k==5)
        {
           cout<<"give value then position"<<endl;
           cin>>x>>ps;
           wow->insertAtPos(x,ps) ;
        }
        else if(k==6)
        {
            cin>>x;
            wow->findVal(x);
        }
        else if(k==7)
        {
           cout<<"give position"<<endl;
           cin>>ps;
           wow->findValAtPos(ps);
        }
        else if(k==8)
        {
            wow->traverse();
        }
        else if(k==9)
        {
            cin>>x;
            wow->deleteVal(x);
        }
        else if(k==10)
        {
            cin>>ps;
            wow->deletePos(ps);
        }
        else if(k==11)
        {
            wow->deleteAll();
        }
        else if(k==12)
        {
            wow->deleteHead();
        }
        else if(k==13)
        {
            wow->deleteTail();
        }
    }

    delete wow;
    return 0;
}

