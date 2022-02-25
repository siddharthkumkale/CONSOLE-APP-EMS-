#include <iostream>
#include <conio.h>


#define max 20

using namespace std;

class base                                      
{
public:
	int emp_id;
	int age;
	char name[20];
	char dep_name[20];
	int dep_code;

};

class department : public base
{
public:
	void add_dep();
	void edit_dep();
	void delete_dep();
	void display_dep();

};


class employee : public base {

public:
	void add_emp();
	void display_emp();
	void delete_emp();
	void edit_emp();
	void search_emp();
	void sort_emp();

};

int i;
int num;
employee ep[20], tempemp[max];
department dep1[20],tempdep[max];;





int main()
{
	void add_emp();
	void display_emp();
	void delete_emp();
	void edit_emp();
	void search_emp();
	void sort_emp();
	void add_dep();
	void edit_dep();
	void delete_dep();
	void display_dep();

	int choice;
	system("cls");
	cout << ("	\t\t\t\t\t------CONSOLE APP-----\n");
	cout << ("	\t\t\t\t\t   ------MENU-----\n");
	cout << " \n ______________________________________________________________________________________________________________________";
	cout << ("\n");
	cout << ("\n1. ADD EMPLOYEE  \n");
	cout << ("2. ADD DEPARTMENT \n");
	cout << ("3. DELETE EMPLOYEE\n");
	cout << ("4. DELETE DEPARTMENT \n");
	cout << ("5. DISPLAY EMPLOYEE DETAILS\n");
	cout << ("6. DISPLAY DEPARTMENT \n");
	cout << ("7. EDIT EMPLOYEE DETAILS\n");
	cout << ("8. EDIT DEPARTMENT DETAILS \n");
	cout << ("9. SEARCH EMPLOYEE ID \n");
	cout << ("10. SORT EMPLOYEE DETAILS (BY NAME)\n");
	cout << ("11.EXIT\n");
	cout << ("\nYOUR CHOICE : ");
	cin >> choice;
	do {
		switch (choice)
		{
		case 1:
			add_emp();
			break;
		case 2:
			add_dep();
			break;
		case 3:
			delete_emp();
			break;
		case 4:
			delete_dep();
			break;
		case 5:
			display_emp();
			break;
		case 6:
			display_dep();
			break;
		case 7:
			edit_emp();
			break;
		case 8:
			edit_dep();
			break;
		case 9:
			search_emp();
			break;
		case 10:
			sort_emp();
			break;
		case 11:
			exit(0);
			break;

		default:
			cout << ("YOUR CHOICE IS INVALID ");
			break;

		}
	} while (choice != 0);


}



void add_emp()
{

	system("cls");
	int i = num;

	num += 1;

	int temp;

	cout << "HOW MANY EMPLOYEES DO YOU WANT TO ADD?  ----->";                    //input from user

	cin >> num;


	cout << ("\n\n\n\t\t ADD EMPLOYEE \n");

	for (int i = 0; i <= num - 1; i++)
	{
		cout << ("ENTER EMPLOYEE NAME : ");
		cin >> ep[i].name;
		cout << ("ENTER EMPLOYEE ID : ");
		cin >> ep[i].emp_id;
		cout << ("ENTER EMPLOYEE AGE : ");
		cin >> ep[i].age;


	}
	int res = strcmp(ep[i].name, ep[i + 1].name);

	if (res == 0)
	{
		cout << ("NAME ALREADY EXISTS ");
		cout << "\nSELECT DELETE EMPLOYEE FROM MENU TO DELETE ID ";
		_getch();

		main();

	}



	cout << ("NEW ID INSERTED SUCCESFULLY ");
	cout << ("\nPRESS ENTER TO RETURN TO MENU ");
	_getch();
	main();

}

void display_emp()
{
	system("cls");
	char dig;
	int maxs;
	char temp;
	cout << "\nENTER THE NO. EMPLOYEES YOU WANT TO DISPLAY : ";
	cin >> maxs;
	cout << "\nPRESS 'n' TO VIEW  RECORDS : ";
	cin >> temp;

	cout << "    \t\t\t \t\tDETAILS OF EMPLOYEE " << endl;

	cout << "  \t\t\t ------------------------------------------------------" << endl;
	cout << "\t\t|  EMPLOYEE NAME  |";
	cout << "\t\t|  EMPLOYEE ID  |";
	cout << "\t\t|  EMPLOYEE AGE  |";
	cout << " \n _______________________________________________________________________________________________________________________";


	for (int i = 0; i < maxs ; i++)
	{

		cout << "\n\t\t" << ep[i].name << "\t\t|";

		cout << "\t\t\t" << ep[i].emp_id << "\t\t|";

		cout << "\t\t\t" << ep[i].age << "\t\t|";


	}
	_getch();
	cout << "\nPRESS 'q' TO RETURN TO MENU ";
	cin >> dig;
	if ( dig == 'q') {
		
        main();
	}

}




void delete_emp()
{
	system("cls");



	int emp_id;

	int check;

	printf("\t\t\t ----DELETE AN EMPLOYEE ENTRY---- ");



	cout << endl;

	cout << "ENTER THE ID NUMBER TO BE DELETED :  ";

	cin >> emp_id;

	int i;

	for (i = 0; i <= num - 1; i++)

	{

		if (ep[i].emp_id == emp_id)

		{

			check = i;

		}

	}

	for (i = 0; i <= num - 1; i++)

	{

		if (i == check)

		{

			continue;

		}

		else

		{

			if (i > check)

			{

				tempemp[i - 1] = ep[i];

			}

			else

			{

				tempemp[i] = ep[i];

			}

		}

	}

	num--;


	for (i = 0; i <= num - 1; i++)

	{

		ep[i] = tempemp[i];

	}
	cout << "PRESS ENTER TO RETURN TO MENU ";
	_getch();

	main();
}


void edit_emp()
{
	system("cls");
	cout << "    \t\t\t \t\t EDIT DETAILS OF EMPLOYEE " << endl;
	cout << "  \t\t\t ------------------------------------------------------" << endl;
	if (num != 0) {

		int emp_id;

		cout << "ENTER ID OF EMPLOYEE WHICH YOU WANT TO EDIT " << endl;

		cin >> emp_id;

		for (int i = 0; i < num; i++) {

			if (ep[i].emp_id == emp_id) {

				cout << " OLD DETAILS OF EMPLOYEES " << i + 1 << endl;

				cout << " OLD NAME : " << ep[i].name << endl;

				cout << " OLD EMPLOYEE ID: " << ep[i].emp_id << endl;

				cout << " OLD EMPLOYEE AGE : " << ep[i].age << endl;



				cout << "\nENTER NEW EMPLOYEE DETAILS" << endl;

				cout << "ENTER EMPLOYEE NAME: ";

				cin >> ep[i].name;

				cout << "ENTER NEW ID: ";

				cin >> ep[i].emp_id;

				cout << "ENTER NEW AGE: ";

				cin >> ep[i].age;



				break;

			}

			if (i == num - 1) {

				cout << "NO SUCH ID FOUND" << endl;

			}

		}

	}
	else {

		cout << "NO DATA IS ENTERED" << endl;

	}

	cout << ("PRESS ENTER TO RETURN TO MENU");
	_getch();
	main();


}

void search_emp()
{

	system("cls");
	cout << "    \t\t\t \t\t SEARCH DETAILS OF EMPLOYEE " << endl;
	cout << "  \t\t\t ------------------------------------------------------" << endl;
	cout << "\n";
	if (num != 0) {

		int emp_id;

		cout << "ENTER EMPLOYEE ID YOU WANT TO SEARCH :  ";

		cin >> emp_id;

		for (int i = 0; i < num; i++) {

			if (ep[i].emp_id == emp_id) {

				cout << " DETAILS OF EMPLOYEE " << i + 1 << endl;

				cout << "NAME: " << ep[i].name << endl;

				cout << "ID: " << ep[i].emp_id << endl;

				cout << "AGE: " << ep[i].age << endl;


				break;

			}

			if (i == num - 1) {

				cout << "NO SUCH ID FOUND" << endl;

			}

		}

	}
	else {

		cout << "NO DATA IS ENTERED" << endl;

	}
	cout << ("PRESS ENTER TO RETURN TO MENU");
	_getch();
	main();

}

void sort_emp()
{
	system("cls");


	employee temp;

	for (int i = 0; i < num; i++)
	{
		for (int j = i + 1; j < num; j++)
		{
			int r = strcmp(ep[i].name, ep[j].name);
			if (r > 0)
			{
				temp = ep[i];
				ep[i] = ep[j];
				ep[j] = temp;
			}
		}
	}


	cout << "PRESS ENTER TO DISPLAY ";
	_getch;
	display_emp();
}


void add_dep()
{
	system("cls");
	int i = num;

	num += 1;
	int temp;
	cout << "HOW MANY DEPARTMENTS YOU WANT TO ENTER? ----->";

	cin >> num;
	

	cout << ("\n\n\t\t ADD DEPARTMENT \n");

	for (int i = 0; i < num ; i++)
	{
		cout << ("ENTER DEPARTMENT NAME : ");
		cin >> dep1[i].dep_name;
		cout << ("ENTER DEPARTMENT CODE : ");
		cin >> dep1[i].dep_code;
		
		
	}	
	int res = strcmp(dep1[i].dep_name, dep1[i + 1].dep_name);

	if (res == 0)
	{
		cout << ("DEPARTMENT ALREADY EXISTS ");
		cout << "\nSELECT DELETE EMPLOYEE FROM MENU TO DELETE ID ";
		_getch();

		main();

	}



	cout << ("NEW DEPARTMENT INSERTED SUCCESFULLY ");
	cout << ("\nPRESS ENTER TO RETURN TO MENU ");
	_getch();
	main();	

}

void delete_dep()
{
	system("cls");



	int dep_code;

	int check;

	printf("\t\t\t ----DELETE AN EMPLOYEE ENTRY---- ");



	cout << endl;

	cout << "ENTER THE DEPARTMENT CODE TO BE DELETED :  ";

	cin >> dep_code;

	int i;

	for (i = 0; i <= num - 1; i++)

	{

		if (dep1[i].dep_code == dep_code)

		{

			check = i;

		}

	}

	for (i = 0; i <= num - 1; i++)

	{

		if (i == check)

		{

			continue;

		}

		else

		{

			if (i > check)

			{

				tempdep[i - 1] = dep1[i];

			}

			else

			{

				tempdep[i] = dep1[i];

			}

		}

	}

	num--;


	for (i = 0; i <= num - 1; i++)

	{

		dep1[i] = tempdep[i];

	}
	cout << "PRESS ENTER TO RETURN TO MENU ";
	_getch();

	main();

}


void edit_dep()
{
	system("cls");
	cout << "    \t\t\t \t\t EDIT DETAILS OF DEPARTMENT " << endl;
	cout << "  \t\t\t ------------------------------------------------------" << endl;
	if (num != 0) {

		int dep_code;

		cout << "ENTER CODE OF DEPARTMENT YOU WANT TO EDIT " << endl;

		cin >> dep_code;

		for (int i = 0; i < num; i++) {

			if (dep1[i].dep_code == dep_code) {

				cout << " OLD DETAILS OF DEPARTMENT " << i + 1 << endl;

				cout << " OLD NAME : " << dep1[i].dep_name << endl;

				cout << " OLD CODE : " << dep1[i].dep_code << endl;

				
                cout << "\nENTER NEW DEPARTMENT DETAILS" << endl;

				cout << "ENTER DEPARTMENT NAME: ";

				cin >> dep1[i].dep_name;

				cout << "ENTER NEW CODE: ";

				cin >> dep1[i].dep_code;

				break;

			}

			if (i == num - 1) {

				cout << "NO SUCH DEPARTMENT FOUND" << endl;

			}

		}

	}
	else {

		cout << "NO DATA IS ENTERED" << endl;

	}

	cout << ("PRESS ENTER TO RETURN TO MENU");
	_getch();
	main();

}
void display_dep()
{
	system("cls");
	char var;
	int maxs;
	char temp;
	cout << "\nENTER THE NO. DEPARTMENTS YOU WANT TO DISPLAY : ";
	cin >> maxs;
	cout << "\nPRESS 'n' TO VIEW  RECORDS : ";
	cin >> temp;

	system("cls");
	
		if (temp == 'n')
		{
			system("cls");

			cout << "    \t\t\t \t\tDETAILS OF EMPLOYEE " << endl;
			cout << "  \t\t\t ------------------------------------------------------" << endl;
			cout << "\t\t|  DEPARTMENT NAME  |";
			cout << "\t\t|  DEPARTMENT CODE |";

			cout << " \n _______________________________________________________________________________________________________________________";

			for (i = 0 ; i < maxs ; i++)
			{

				cout << "\n\t\t" << dep1[i].dep_name << "\t\t|";

				cout << "\t\t\t" << dep1[i].dep_code << "\t\t|";
			}
		}
		_getch();
		cout << "\n\nPRESS 'q' TO RETURN TO MENU : ";
		cin >> var;
		if (var == 'q')
		{
			main();
		}
	}



//Comments Please


