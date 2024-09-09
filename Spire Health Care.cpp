#include <iostream>
#include <vector>
#include <conio.h>                                                           //Masking Password
#include <string>

using namespace std;



// Define a struct for the Doctor entity
struct Doctor {
    int id;
    string name;
    string specialization;
    bool available;
};

// Declare a vector to store all the doctors in the system
vector<Doctor> doctors;

// Function to add a new doctor to the system
void addDoctor() {
    Doctor newDoctor;
    cout << "\n\t\t\tEnter doctor ID: ";
    cin >> newDoctor.id;
    cout << "\n\t\t\tEnter doctor name: ";
    cin >> newDoctor.name;
    cout << "\n\t\t\tEnter doctor specialization: ";
    cin >> newDoctor.specialization;
    newDoctor.available = true;
    doctors.push_back(newDoctor);
    cout << "\n\n\t\t\t\t\t\t!!!   ====    DOCTOR ADDED SUCCESSFULLY    ====   !!!" << endl;
}

// Function to display all the doctors in the system
void displayDoctors() {
    if (doctors.size() == 0) {
        cout << "No doctors in the system." << endl;
    } else {
        cout << "Doctor ID \t Doctor Name \t Specialization \t Availability" << endl;
        for (int i = 0; i < doctors.size(); i++) {
            cout << doctors[i].id << "\t\t" << doctors[i].name << "\t\t" << doctors[i].specialization << "\t\t";
            if (doctors[i].available) {
                cout << "Available" << endl;
            } else {
                cout << "Booked" << endl;
            }
        }
    }
}

// Function to edit a doctor's details by ID
void editDoctor() {
    int doctorID;
    bool found = false;
    cout << "\n\t\t\tEnter doctor ID to edit details: ";
    cin >> doctorID;
    for (int i = 0; i < doctors.size(); i++) {
        if (doctors[i].id == doctorID) {
            found = true;
            cout << "\n\t\t\tEnter new name (or press Enter to keep current name): ";
            cin.ignore();
            string name;
            getline(cin, name);
            if (!name.empty()) {
                doctors[i].name = name;
            }
            cout << "\n\t\t\tEnter new specialization (or press Enter to keep current specialization): ";
            string specialization;
            getline(cin, specialization);
            if (!specialization.empty()) {
                doctors[i].specialization = specialization;
            }
            cout << "\n\n\t\t\t\t\t\t!!!   ====    DOCTOR DETAILS UPDATED SUCCESSFULLY    ====   !!!" << endl;
            break;
        }
    }
    if (!found) {
        cout << "Doctor with ID " << doctorID << " not found." << endl;
    }
}


// Function to search for a doctor by ID
void searchDoctor() {
    int searchID;
    bool found = false;
    cout << "\n\t\t\tEnter doctor ID to search: ";
    cin >> searchID;
    for (int i = 0; i < doctors.size(); i++) {
        if (doctors[i].id == searchID) {
            found = true;
            cout << "\n\t\t\tDoctor ID: " << doctors[i].id << endl;
            cout << "\n\t\t\tDoctor Name: " << doctors[i].name << endl;
            cout << "\n\t\t\tDoctor Specialization: " << doctors[i].specialization << endl;
            if (doctors[i].available) {
                cout << "\n\t\t\tDoctor Availability: Available" << endl;
            } else {
                cout << "\n\t\t\tDoctor Availability: Booked" << endl;
            }
            break;
        }
    }
    if (!found) {
        cout << "\n\n\t\t\t\t\t\t!!!Doctor with ID " << searchID << " not found.!!!" << endl;
    }
}

// Function to schedule an appointment with a doctor
void scheduleAppointment() {
    int doctorID;
    bool found = false;
    cout << "\n\t\t\tEnter doctor ID to schedule appointment: ";
    cin >> doctorID;
    for (int i = 0; i < doctors.size(); i++) {
        if (doctors[i].id == doctorID) {
            found = true;
            if (doctors[i].available) {
                cout << "\n\t\t\tEnter appointment date and time (YYYY-MM-DD HH:MM): ";
                string appointment;
                cin >> appointment;
                doctors[i].available = false;
                cout << "\n\t\t\tAppointment with doctor " << doctors[i].name << " scheduled on " << appointment << endl;
            } else {
                cout << "\n\t\t\tDoctor " << doctors[i].name << " is not available for appointment." << endl;
            }
            break;
        }
    }
    if (!found) {
        cout << "Doctor with ID " << doctorID << " not found." << endl;
    }
}

// Function to edit an appointment
void editAppointment() {
    int doctorID;
    bool found = false;
    cout << "\n\t\t\tEnter doctor ID whose appointment needs to be edited: ";
    cin >> doctorID;
    for (int i = 0; i < doctors.size(); i++) {
        if (doctors[i].id == doctorID) {
            found = true;
            if (doctors[i].available) {
                cout << "Doctor " << doctors[i].name << " does not have any appointments to edit." << endl;
            } else {
                cout << "\n\t\t\tEnter new appointment date and time (YYYY-MM-DD HH:MM): ";
                string appointment;
                cin >> appointment;
                doctors[i].available = true;
                cout << "\n\t\t\tAppointment with doctor " << doctors[i].name << " canceled." << endl;
                cout << "\n\t\t\tEnter new appointment date and time (YYYY-MM-DD HH:MM): ";
                cin >> appointment;
                doctors[i].available = false;
                cout << "Appointment with doctor " << doctors[i].name << " rescheduled on " << appointment << endl;
            }
            break;
        }
    }
    if (!found) {
        cout << "Doctor with ID " << doctorID << " not found." << endl;
    }
}

void displayCompanyDetails() {
    cout << "\n\t\t\tCompany Details\n";
    cout << "\t\t\tName: Spire Health Care Hospital\n";
    cout << "\t\t\tContact: +4255455844\n";
    cout << "\t\t\tAddress: Main street, London\n";
}
// Function to logout of the system
void logout() {
    cout << "\n\t\t\tLogging out of the system...\n\n";
    // Add any necessary cleanup code here
    // For example, clearing sensitive data from memory
    exit(0); // Terminate the program
}









int main() {
	
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t         =x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=\n";
	cout<< "\n                                                                     *** SPIRE HEALTH CARE HOSPITAL ***" ;
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t =x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=\n";
    // Populate the system with some initial doctors
    Doctor doctor1 = {1, "John Doe", "Cardiology", true};
    Doctor doctor2 = {2, "Jane Smith", "Pediatrics", true};
    Doctor doctor3 = {3, "Bob Johnson", "Orthopedics", true};
    doctors.push_back(doctor1);
    doctors.push_back(doctor2);
    doctors.push_back(doctor3);
    {
			int ch;
		
	string username;                                                                                                   
	string password;
	cout<<"\n\n                    PLEASE INPUT USERNAME :";
	cin>>username;
	cout<<"\n\n                    PLEASE INPUT PASSWORD :";
	
	
	ch=getch();
	
	while (ch!=13)

{
	password.push_back(ch);
	cout<<'*';
	ch=getch();
	}
		if(username=="SPIRE"){
		if(password=="123456"){
		
		cout<<"\n\n\n\t\t\t\t\t\t\t\t  ==========CONGRATULATIONS LOGIN!==========="<<endl;
	}else{
		cout<<"\n\n\n\t\t\t\t\t\t\t\t  !!!!!!!!!!  INVALID  PASSWORD!  !!!!!!!!!!"<<endl;
	}
	}else{
		cout<<"\n\n\n\t\t\t\t\t\t\t\t  !!!!!!!!!!  INVALID USERNAME!  !!!!!!!!!!!"<<endl;
	}	
cout<<"\n\n\n\t\t\t\t +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +   \n\n\n";



	

	
	}
    // Main menu loop
    while (true) {
        
        cout << "\n\n\t\t\t\t\t\t1. Add new doctor" << endl;
        cout << "\n\n\t\t\t\t\t\t2. Display all doctors" << endl;
        cout << "\n\n\t\t\t\t\t\t3. Edit Doctor " << endl;
        cout << "\n\n\t\t\t\t\t\t4. Search for a doctor" << endl;
        cout << "\n\n\t\t\t\t\t\t5. Schedule an appointment" << endl;
        cout << "\n\n\t\t\t\t\t\t6. Edit  appointment" << endl;
        cout << "\n\n\t\t\t\t\t\t7. View Company Details" << endl;
        cout << "\n\n\t\t\t\t\t\t8. Logout" << endl;
        cout << "Enter your choice (1-6): ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                addDoctor();
                break;
            case 2:
                displayDoctors();
                break;
            case 3:
                editDoctor();
                break;
            case 4:
                searchDoctor();
                break;
            case 5:
            	scheduleAppointment();
            	break;
            case 6:
				editAppointment();
				break;
			case 7:
                displayCompanyDetails();
                break;
			case 8:
                logout(); // Call the logout function
                break;		
			case 9:		
                cout << "Exiting program..." << endl;
                
            default:
                cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
                break;
        }
    }
    return 0;
}

