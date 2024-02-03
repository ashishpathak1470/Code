#include <iostream>
#include <cstring>
using namespace std;
static int leave=0;
class User
{
protected:
string userId;
string userName;
string password;
string userRole;
public:
    User();
    User(string userId,string userName,string password,string userRole){
    this->userId=userId;
    this->userName=userName;
    this->password=password;
    this->userRole=userRole;
    }
    void login(){
        cout<<this->userName<<" Have logged in"<<endl;
    }
    void updateDetails(string userName,string password,string userRole){
this->userName=userName;
this->password=password;
this->userRole=userRole;
cout<<"New UserName "<<this->userName<<"New password "<<this->password<<" User role "<<this->userRole<<endl;
    }
       string getUsername() {
        return userName;
    }

   string getPassword() {
        return password;
    }
       string getuserRole() {
        return userRole;
    }
};
class Employee:public User
{
    protected:
string department;
int contact;
string nationality;
string qual;
public:
Employee();
Employee(string dep,int con,string nat,string qual,string userId,string userName,string password,string userRole) : User(userId,userName,password,userRole){
this->department=dep;
this->contact=con;
this->nationality=nat;
this->qual=qual;
}
void applyleave(){
    leave++;
    cout<<this->userName<<" Has applied for leave"<<endl;
}
void checkleavestatus(){
    cout<<"Checking status for user- "<<this->userName<<endl;
}
string getUsername(){
    return this->userName;
}
void viewEmployeeDetails(){
    cout << "Employee " << this->userName << " (ID: " << userId << ")\n"
            << "Department: " << this->department << "\n"
            << "Contact: " << this->contact << "\n"
            << "Nationality: " << this->nationality << "\n"
            << "Qualification: " << this->qual << endl;
}
};
class Administrator : public User {
public:
Administrator(string userId,string userName,string password,string userRole) : User( userId,userName,password,userRole){

}
   Employee* addemployee(string dep,int con,string nat,string qual,string userId,string userName,string password,string userRole) {
        Employee* e1 = new Employee(dep, con, nat, qual,userId, userName, password, "Employee");
        cout << "Administrator " << userName << " - Added new employee: " << e1->getUsername() << endl;
        return e1;
    }
    void viewEmployee(Employee* employee) {
        cout << "Administrator " << userName << " - Viewing employee details:" << endl;
        employee->viewEmployeeDetails();
    }
     void defineAccessLevel(User user, string newRole) {
        user.updateDetails(user.getUsername(), user.getPassword(), newRole);
        cout << "Administrator " << userName << " - Defined access level for user " << user.getUsername() << ": " << newRole << endl;
    }
     void editEmployee(Employee* employee,string newDepartment,int newContact,string newQualification) {
        employee->viewEmployeeDetails();
        employee->updateDetails(employee->getUsername(), employee->getPassword(), "Employee");
        employee->viewEmployeeDetails();
        employee->updateDetails(employee->getUsername(), employee->getPassword(), employee->getuserRole());
        cout << "Administrator " << userName << " - Edited employee details." << endl;
    }
     void createNewUser(string userId, string newUsername, string newPassword, string newUserRole) {
        User newUser(userId, newUsername, newPassword, newUserRole);
       cout << "Administrator " << userName << " - Created new user: " << newUsername <<endl;
    }
};
class HOD:Employee
{

public:
HOD(){}
    HOD(string dep,int con,string nat,string qual,string userId,string userName,string password,string userRole):Employee( dep,con, nat,qual,userId,userName,password,userRole){}

     void editEmployee(Employee* employee,string newDepartment,string newContact,string newQualification) {
        employee->viewEmployeeDetails();
        employee->updateDetails(employee->getUsername(), employee->getPassword(), "Employee");
        employee->viewEmployeeDetails();
        employee->updateDetails(employee->getUsername(), employee->getPassword(), employee->getuserRole());
        cout << "HOD " << userName << " - Edited employee details." << endl;
    }
    void viewEmployees(Employee* arr[]){
        for(int g=0;g<2;g++){
           arr[g]->viewEmployeeDetails();
        }
    }

};
class HRAdmin:Employee
{

public:
    HRAdmin(string dep,int con,string nat,string qual,string userId,string userName,string password,string userRole):Employee( dep,con, nat,qual,userId,userName,password,userRole){}

     void editEmployee(Employee* employee,string newDepartment,int newContact,string newQualification) {
        employee->viewEmployeeDetails();
        employee->updateDetails(employee->getUsername(), employee->getPassword(), "Employee");
        employee->viewEmployeeDetails();
        employee->updateDetails(employee->getUsername(), employee->getPassword(), employee->getuserRole());
        cout << "HOD " << userName << " - Edited employee details." << endl;
        employee->viewEmployeeDetails();
    }
    void viewEmployees(Employee* arr[]){
        for(int g=0;g<2;g++){
           arr[g]->viewEmployeeDetails();
        }
    }
    

};

int main(){
    Employee* arr[2];
    Employee* e1= new Employee("ECE",123,"indian","btech","TREWQ","E1","qwerty","Employee");
    Employee* e2= new Employee("ECE",123,"indian","btech","QWERT","E2","qwerty","Employee");
    arr[0]=e1;
    arr[1]=e2;
        e1->login();
    e1->applyleave();
    e1->updateDetails("Ashish","ghi","nothing");
    e1->checkleavestatus();
    Administrator a1= Administrator("admin123","Admin","admin_123","Administrator");
    Employee* e3=a1.addemployee("CSE",123,"indian","btech","QWERT","E3","qwerty","Employee");
    a1.viewEmployee(e2);
    a1.editEmployee(e1,"CSE",321,"Mtech");

    HOD h1=HOD("ECE",123,"indian","PHD","QWERT","E2","qwerty","HOD");
    h1.viewEmployees(arr);
    
    HRAdmin hr1=HRAdmin("ECE",123,"indian","PHD","QWERT","E2","qwerty","HOD");
    hr1.viewEmployees(arr);
     hr1.editEmployee(e1,"ECE",3221,"Mtech");
}
 
 
