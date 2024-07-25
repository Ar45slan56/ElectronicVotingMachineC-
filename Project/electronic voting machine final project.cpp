#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
#include<windows.h>
using namespace std;
class Node {
public:
		string name;
	int d = 0;	
  string data;
  Node* next;
   Node* prev;   
void insertparty( Node** head, string data) {
   Node* newNode = new Node;
  newNode->data = data;
  newNode->next = NULL;
   Node* temp = *head;
  if (*head == NULL) {
    newNode->prev = NULL;
    *head = newNode;
    return;
  }
  while (temp->next != NULL)
    temp = temp->next;
  temp->next = newNode;
  newNode->prev = temp;
}

void display( Node* node,Node* head,string a) {
  Node* last;
  	int i = 0;
  while (node != NULL||head != NULL) {
  	i++;
  	cout <<"\t" <<i<<"."<<node->data <<"\t";
    last = node;
    node = node->next;
    head = head->next;
    
  }
  
}
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->next);
        cout << root->data << ":";
        inorder(root->prev);
    }
}

void displayList( Node* node,Node* head,string a) {
  Node* last;
  	int i = 0;
  while (node != NULL||head != NULL) {
  	i++;
  	cout <<"\t\t\t\t\t\t" <<i<<"."<<node->data << "->"<<head->d<<endl;
  	
cout << "\t\t\t--------------------------------------------------------------------------" << endl ;
  	string name = a;
  	name = name+".text";
	ofstream obj1(name.c_str(),ios :: app);
		obj1 <<"\t\t\t\t\t\t" <<i<<"."<<node->data << "->"<<head->d<<endl;
  	
obj1 << "\t\t\t--------------------------------------------------------------------------" << endl ;


    last = node;
    node = node->next;
    head = head->next;
    
  }
  
}
void Search(Node **head,Node **root,string searchValue) {
  Node* temp = *head= *root;
  int found = 0;
  int i = 0; 
  if(temp != NULL) {
    while(temp != NULL) {
      i++;
      if(temp->data == searchValue) {
        found++;
        break;
      }
      temp = temp->next;
    }
    if (found == 1) {
      cout<<searchValue<<" party is found  "<<".\n"<<endl;

++(temp->d);
      cout<<"vote successful"<<endl;
	  }
     else {
      cout<<searchValue<<" is not found in the list.\n";
    }
  } else {
    cout<<"The list is empty.\n";
  }
}
  int LargestInDLL( Node** head_ref,Node **root,string a)
  {
     Node *max, *temp;
    temp = max = *head_ref = *root;
    while (temp != NULL)
    {
        if (temp->d > max->d)
            max = temp;
        temp = temp->next;
		     
    }
    system("cls");
    cout<<endl;
    cout<<endl;
    cout<<endl;
 cout << "\t\t\t--------------------------------------------------------------------------" << endl ;   
    cout<<"\t\t\t\t\t\tWINNER = "<<max->data<<"->"<< max->d<<endl;
    
    string name = a;
    name = name+".text";
ofstream obj1(name.c_str(),ios :: app);
      obj1<<"\t\t\t\t\t\tWINNER  "<<max->data<<"->"<<max->d<<endl;
      obj1.close();


}
   
 

	void id()
{
	string name ,st;
	q:
	cin>>name;
	ifstream in;
	in.open("id.text",ios::app);
	while(in.eof()==0)
	{
		getline(in,st);
		if(st != name)
		{
			ofstream file("id.text",ios::app);
			
			file<<name<<endl;
			file.close();
			in.close();
			break;
		}
		else
		{
			cout<<"\t ID already use plz again enter ID"<<endl;
				
			in.close();
			goto q;
		}
		
	
	}
}

};
class admin :public Node {
public:
	Node* head = NULL;
	int number;
	int a, year;
public:
	void show2()
{
		string name ;
		cout<<"enter year"<<endl;
	cin>>name;
	name = name+".text";
	ifstream obj1(name.c_str());
	if(!obj1)
	{
		cout<<" Election is not produce yet"<<endl;
	}
	else
	{
		string ch;

		while (1) {
			obj1 >> ch;
			if (obj1.eof())
				break;

			cout << ch;
cout<<endl;			
		}
	}
	obj1.close();
	
}

	void create()
	{
		system("cls");
		cout << "\t\t\t--------------------------------------------------------------------------" << endl ;
		cout << "\t\t\t\t\tpress 1 for create a Election" << endl;
		cout << "\t\t\t\t\tpress 2 for show  a ELection results" << endl;
		cout << "\t\t\t--------------------------------------------------------------------------" << endl ;
		cin >> a;
		if (a == 1)
		{
			system("cls");
			cout<<endl;
cout << "\t\t\t--------------------------------------------------------------------------" << endl ;
		cout<<"\t\t\t\t\t\tYou are in Election Zone"<<endl;	
cout << "\t\t\t--------------------------------------------------------------------------" << endl ;
			cout<<"Enter year"<<endl;
			
	cin>>name;
	cout<<"please enter  how many party participate in alation of "<<name<<endl;
		name = name+".text";
	ofstream obj1(name.c_str(),ios :: app);
			Node n;
   Node* head1 = NULL;
   Node* head2 = NULL;
   
  int size;
 d:
 cin>>size;
 string number;
 cout<<"Please enter List of party"<<endl;
 for(int i=1;i<=size;i++) 
 {
 cin>>number;
  n.insertparty(&head1, number);
 
 n.insertparty(&head2,number); 
}
cout<<"parties is register"<<endl;
cout<<"you want to add more parties : "<<"y/n"<<endl;
string a;
cin>>a;
if(a == "y" )
{
	goto d;
}
w:

string r;
	bool quit=false;
    	string y;
	while (quit == false)
	{
		cout<<"Do you want start voting?"<<endl;
		cout<<"yes/no"<<endl;
		cin>>y;
		system("cls");
	if(y == "yes")
	{
		string nam;
		int id;
		int age;
		
		cout<<"enter your name "<<endl;
		cin>>nam;
			cout<<"enter age"<<endl;
		cin >> age;


		if (age >= 13 && age <= 19)
		{
			cout << "Person is Teenager" << endl;
		}
		else
		{
			cout << "Person is not a Teenager" << endl;
		}


		//condition to check voting eligility
		if (age >= 18)
		{
			cout << "Personl is eligible for voting" << endl;
		}
		else
		{
			cout << "Person is not eligible for voating" << endl;
			cout<<"vote waste"<<endl;
			goto w; 
		}

		cout<<"Enter your id"<<endl;
		n.id();
	string e;
	system("cls");
	cout<<"list of parties"<<endl;
     	n.display(head1,head2,e);
     	//n.inorder(head);
     	cout<<endl;
cout<<"Enter the party name of the given list"<<endl;
cin>>r;
n.Search(&head1,&head2,r);
}
      else
      {
      	n.LargestInDLL(&head1,&head2,name);
      	n.displayList(head1,head2,name);
      	quit = true;
	  }
	  
}
			
		}
		else if(a == 2)
		{
		
admin nm;
nm.show2();

		}
		else
		{
			cout<<"vaild"<<endl;
		}
system("pause");
system("cls");
	}
		
};


class login : public Node {
public:
	
	string user_name;
	string password;
		
	void store()
	{
	ofstream obj;
			obj.open("o.text", ios :: app);
			cout << "Enter user name ";
			getline(cin, user_name);
			cout << "Enter password  ";
			
			
			obj << user_name << endl;
			cin>>password;
			obj << password <<endl;
			
			
			obj.close();
	cout<<"sign up successful plz login";
	
system("cls");
	}
	void show()
	{

		
			string n;
			string code;
			bool flag = false;
			cout << "Enter user name ";
			getline(cin, user_name);
			cout << "Enter password  ";
		
			cin>>password  ;
				
			
			ifstream obj1;
			obj1.open("o.text", ios :: app);
			while(!obj1.eof())
			{
				getline (obj1 , n);
				getline (obj1 , code);
				if(password == code && n == user_name)
				{
					flag = true;
				cout << "login successful" << endl;
				admin m;
				m.create();
				break;

				cout <<"thank you"<<endl;
			}
		}
		if (flag == false)
			cout << endl << "something went wrong" << endl;
		obj1.close();
	}
	int id;
	void forget()
	{

		string n;
		string code;
		bool flag = false;
		cout << "Enter user name ";
		getline(cin, user_name);
		ifstream obj1;
		obj1.open("login.text", ios::app);
		while (!obj1.eof())
		{
			getline(obj1, n);
			getline(obj1, code);
			if (n == user_name)
			{
				flag = true;
				cout << endl;
				cout << "your password " << code;
			}
		}
		if (flag == false)
			cout << endl << "something went wrong" << endl;
		obj1.close();
		
	}

	void cancel()
	{
		exit();
	}
	
};
int main()
{
	login obj;
	char choice;

	while (true) {
		cout << endl;
		cout<<endl;
		cout<<endl;
cout << "\t\t\t--------------------------------------------------------------------------" << endl ;
		cout << "\t\t\t\t\tWELCOME IN ELECTRONIC VOTNG MACHINE " << endl;
	cout << "\t\t\t--------------------------------------------------------------------------" << endl << endl;
	
		system("pause");
		cout << endl;
		system("cls");
		cout<<endl;
cout << "\t\t\t--------------------------------------------------------------------------" << endl ;
		cout << "\t\t\t\t\t\tpress 1 for sign up  " << endl;
		cout << "\t\t\t\t\t\tpress 2 for login    " << endl;
		cout << "\t\t\t\t\t\tpress 3 for forget   " << endl;
		cout << "\t\t\t\t\t\tpress 4 for exit     " << endl;

cout << "\t\t\t--------------------------------------------------------------------------" << endl ;

		
		cin >> choice;
		cin.ignore();
		if (choice == '1')
			obj.store();
		else if (choice == '2')
			obj.show();
		else if (choice == '3')
			obj.forget();
		else if (choice == '4')
			obj.cancel();

	}

}
