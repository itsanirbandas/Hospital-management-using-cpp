#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "-------- Hospital Management System ---------" << endl;
    cout << "--------- Howrah People Service Hospital ---------" << endl;
    cout << "140, S.N.N.G Road Howrah" << "   " << "Contact us: +1234567" << "   " << "Online Booking" << endl;
    cout << "Your health is our priority" << endl;
    cout << "Our Treatments are: \n";
    cout << "1. Diabetes Mellitus" << endl;
    cout << "2. Hypertension (High Blood Pressure)" << endl;
    cout << "3. Asthma" << endl;
    cout << "4. Cancer" << endl;
    cout << "5. Stroke" << endl;
    cout << "6. Dengue Fever" << endl;
    cout << "7. Covid-19" << endl;
    cout << "8. Pneumonia" << endl;
    cout << "What do you want to checkup: ";

    int choice;
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Doctors available for Diabetes Mellitus:\n";
            cout << "1. Dr. Arunavo Rakshit - Fee: $500\n";
            cout << "2. Dr. Bhuvan Rao - Fee: $600\n";
            cout << "3. Dr. Bishnu Kumar - Fee: $700\n";
            break;
        case 2:
            cout << "Doctors available for Hypertension:\n";
            cout << "1. Dr. Debjit Bhowmick - Fee: $500\n";
            cout << "2. Dr. Ayan Pal - Fee: $600\n";
            cout << "3. Dr. Srikanta das - Fee: $700\n";
            break;
        case 3:
            cout << "Doctors available for Asthma:\n";
            cout << "1. Dr. Goranga Dhar - Fee: $500\n";
            cout << "2. Dr. Himran ALI - Fee: $600\n";
            cout << "3. Dr. Ishan Pal - Fee: $700\n";
            break;
        case 4:
            cout << "Doctors available for Cancer:\n";
            cout << "1. Dr. Jasmine sen - Fee: $500\n";
            cout << "2. Dr. Karima Khatun - Fee: $600\n";
            cout << "3. Dr. Lopa Roy - Fee: $700\n";
            break;
        case 5:
            cout << "Doctors available for Stroke:\n";
            cout << "1. Dr. Minu Palit - Fee: $500\n";
            cout << "2. Dr. Naren Ghosh - Fee: $600\n";
            cout << "3. Dr. Oran hik - Fee: $700\n";
            break;
        case 6:
            cout << "Doctors available for Dengue Fever:\n";
            cout << "1. Dr. Piyush Das - Fee: $500\n";
            cout << "2. Dr. Jishnu pal - Fee: $600\n";
            cout << "3. Dr. ROhit Das - Fee: $700\n";
            break;
        case 7:
            cout << "Doctors available for Covid-19:\n";
            cout << "1. Dr. Swarnavo Ghosh - Fee: $500\n";
            cout << "2. Dr. Tuhin Pramanik - Fee: $600\n";
            cout << "3. Dr. Utsav Roy - Fee: $700\n";
            break;
        case 8:
            cout << "Doctors available for Pneumonia:\n";
            cout << "1. Dr. Vishnu Das - Fee: $500\n";
            cout << "2. Dr. Pramit Pal - Fee: $600\n";
            cout << "3. Dr. kishan Das - Fee: $700\n";
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 0;
    }

    cout << "Choose a doctor by entering the corresponding number: ";
    int doctor_choice;
    cin >> doctor_choice;

    switch(doctor_choice) {
        case 1:
            cout << "You have chosen Doctor 1. Your appointment is successful." << endl;
            break;
        case 2:
            cout << "You have chosen Doctor 2. Your appointment is successful." << endl;
            break;
        case 3:
            cout << "You have chosen Doctor 3. Your appointment is successful." << endl;
            break;
        default:
            cout << "Invalid doctor choice!" << endl;
    }

    return 0;
}
