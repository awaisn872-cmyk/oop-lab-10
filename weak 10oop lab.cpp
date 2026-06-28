// task 1

//#include<iostream>
//using namespace std;
//
//class doctor {
//	string name;
//	string specialization;
//	const int licenseid;
//public:
//	doctor(string n, string s, int id) :name(n), specialization(s), licenseid(id) {}
//	void display() {
//		cout << "Doctor Name:" << name << endl;
//		cout << "Specialization:" << specialization<< endl;
//		cout << "Licence ID:" << licenseid << endl;
//	}
//	
//};
//class ward {
//	string name;
//	int number;
//	int capacity;
//public:
//	ward(string n, int no, int c) :name(n), number(no), capacity(c) {}
//	void display(){
//		cout << "Ward Name:" << name << endl;
//		cout << "Ward Number:" << number << endl;
//		cout << "Ward Capacity:" << capacity << endl;
//		cout << "-----------------------------" << endl;
//	}
//};
//class Hospital {
//	ward w1, w2, w3;
//	doctor* docarray[10];
//	int currentdoc;
//public:
//	Hospital(ward a, ward b, ward c) :w1(a), w2(b), w3(c), currentdoc(0) {}
//	void adddoctor(doctor* d) {
//		if (currentdoc < 10) {
//			docarray[currentdoc] = d;
//			currentdoc++;
//		}
//		else {
//			cout << "Doctor array is full" << endl;
//		}
//	}
//	void display() {
//		w1.display();
//		w2.display();
//		w3.display();
//		for (int i = 0; i < currentdoc; i++) {
//			docarray[i]->display();
//			cout << endl;
//		}
//	}
//};
//int main() {
//	doctor d1("Ali", "Heart", 101);
//
//	{ 
//		ward w1("Cardiology", 1, 20);
//		ward w2("Neurology", 2, 15);
//		ward w3("Orthopedics", 3, 25);
//		Hospital h(w1, w2, w3);
//		h.adddoctor(&d1);
//		cout << "Inside the block:\n";
//		h.display();
//
//	} 
//
//	
//	cout << "\nAfter Hospital is destroyed:\n";
//	d1.display(); 
//
//	return 0;
//}

// task 2

//#include <iostream>
//#include <string>
//using namespace std;
//class LightSystem {
//    int brightness;
//    bool isOn;
//public:
//    LightSystem(int b, bool s) : brightness(b), isOn(s) {}
//
//    void dim(int value) {
//        brightness -= value;
//        if (brightness < 0) brightness = 0;
//        cout << "Lights dimmed by " << value << ". New brightness: " << brightness << "%" << endl;
//    }
//
//    void display() {
//        cout << "[Light System]: " << (isOn ? "ON" : "OFF")
//            << " | Brightness: " << brightness << "%" << endl;
//    }
//};
//
//class ThermostatSystem {
//    double targetTemp;
//    string mode;
//public:
//    ThermostatSystem(double t, string m) : targetTemp(t), mode(m) {}
//
//    void adjust(double newTemp) {
//        targetTemp = newTemp;
//        cout << "Temperature adjusted to: " << targetTemp << "C" << endl;
//    }
//
//    void display() {
//        cout << "[Thermostat]: Mode: " << mode
//            << " | Target Temp: " << targetTemp << "C" << endl;
//    }
//};
//
//class SecuritySystem {
//    bool isArmed;
//    int pin;
//public:
//    SecuritySystem(bool state, int p) : isArmed(state), pin(p) {}
//
//    void arm(int enteredPin) {
//        if (enteredPin == pin) {
//            isArmed = true;
//            cout << "Security System ARMED successfully." << endl;
//        }
//        else {
//            cout << "Invalid PIN! Cannot arm system." << endl;
//        }
//    }
//
//    void display() {
//        cout << "[Security]: Status: " << (isArmed ? "ARMED" : "DISARMED") << endl;
//    }
//};
//
//class SmartHome {
//    string homeAddress;
//    LightSystem light;
//    ThermostatSystem thermo;
//    SecuritySystem security;
//
//public:
//    SmartHome(string addr, int b, bool l_state, double temp, string m, bool s_state, int p)
//        : homeAddress(addr), light(b, l_state), thermo(temp, m), security(s_state, p) {
//    }
//
//    void fullStatus() {
//        cout << "\n--- SmartHome Status Report ---" << endl;
//        cout << "Address: " << homeAddress << endl;
//        light.display();
//        thermo.display();
//        security.display();
//        cout << "-------------------------------" << endl;
//    }
//};
//
//int main() {
//    SmartHome home1("House #123, Street 5", 80, true, 22.5, "Cool", false, 1234);
//    SmartHome home2("Apartment 4B, Blue Tower", 50, true, 28.0, "Heat", true, 5566);
//
//    home1.fullStatus();
//    home2.fullStatus();
//}

// task 3

//#include <iostream>
//using namespace std;
//
//class Classroom {
//private:
//    int roomNumber;
//    string building;
//    int capacity;
//
//public:
//    Classroom(int room, string bld, int cap) : roomNumber(room), building(bld), capacity(cap) {}
//    void display() const {
//        cout << "Room " << roomNumber << " in " << building << " (Capacity: " << capacity << ")";
//    }
//};
//
//class Lecturer {
//private:
//    string name;
//    const int employeeID;
//    string department;
//public:
//    Lecturer(string n, int id, string dept) : name(n), employeeID(id), department(dept) {}
//    void display() const {
//        cout << "Prof. " << name << " (ID: " << employeeID << ", Dept: " << department << ")";
//    }
//};
//
//class Course {
//private:
//    string courseCode;
//    string courseName;
//    Lecturer* assignedLecturer;
//
//public:
//    Course() : courseCode(""), courseName(""), assignedLecturer(nullptr) {}
//
//    Course(string code, string name, Lecturer* lec) : courseCode(code), courseName(name), assignedLecturer(lec) {}
//
//    void scheduleIn(Classroom& room) {
//        cout << courseCode << " (" << courseName << ") has been scheduled in: ";
//        room.display();
//        cout << endl;
//    }
//
//    void displayDetails() const {
//        cout << "Course: " << courseCode << " - " << courseName << " | Lecturer: ";
//        if (assignedLecturer) {
//            assignedLecturer->display();
//        }
//        else {
//            cout << "No lecturer assigned";
//        }
//        cout << endl;
//    }
//};
//
//class Semester {
//private:
//    string semesterName;
//    Course courses[6];
//    int courseCount;
//
//public:
//    Semester(string name) : semesterName(name), courseCount(0) {}
//
//    bool addCourse(const Course& c) {
//        if (courseCount < 6) {
//            courses[courseCount] = c;
//            courseCount++;
//            return true;
//        }
//        return false;
//    }
//
//    void displayAll() const {
//        cout << "\n=== " << semesterName << " Details ===" << endl;
//        for (int i = 0; i < courseCount; i++) {
//            courses[i].displayDetails();
//        }
//    }
//
//    ~Semester() {
//        cout << "\n[Destructor] " << semesterName << " has been destroyed." << endl;
//    }
//};
//
//int main() {
//    Classroom* room1 = new Classroom(302, "CS Block", 50);
//    Classroom* room2 = new Classroom(101, "Engineering Wing", 40);
//
//    Lecturer* lec1 = new Lecturer("Zeeshan", 5001, "Computer Science");
//    Lecturer* lec2 = new Lecturer("Ayesha", 5002, "Electrical Engineering");
//
//    Course c1("CS101", "Introduction to Programming", lec1);
//    Course c2("EE210", "Digital Logic Design", lec2);
//
//    cout << "=== Demonstrating Association (Temporary Interaction) ===" << endl;
//    c1.scheduleIn(*room1);
//    c2.scheduleIn(*room2);
//
//    {
//        cout << "\n=== Creating Semester (Demonstrating Composition) ===" << endl;
//        Semester fall2026("Fall 2026 Semester");
//
//        fall2026.addCourse(c1);
//        fall2026.addCourse(c2);
//
//        fall2026.displayAll();
//    }
//
//    cout << "\n=== Verifying Survival of Independent Objects ===" << endl;
//    cout << "Checking Lecturer 1: ";
//    lec1->display();
//    cout << endl;
//
//    cout << "Checking Classroom 1: ";
//    room1->display();
//    cout << endl;
//
//    delete room1;
//    delete room2;
//    delete lec1;
//    delete lec2;
//
//    return 0;
//}

// task 4

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class ShippingAddress {
//private:
//    string street;
//    string city;
//    string country;
//    string postalCode;
//
//public:
//    ShippingAddress() : street(""), city(""), country(""), postalCode("") {}
//    ShippingAddress(string st, string ct, string cn, string pc)
//        : street(st), city(ct), country(cn), postalCode(pc) {
//    }
//
//    void display(ostream& os) const {
//        os << street << ", " << city << ", " << country << " (" << postalCode << ")";
//    }
//};
//
//class PaymentInfo {
//private:
//    string cardType;
//    string lastFourDigits;
//    string expiry;
//
//public:
//    PaymentInfo() : cardType(""), lastFourDigits(""), expiry("") {}
//    PaymentInfo(string type, string digits, string exp)
//        : cardType(type), lastFourDigits(digits), expiry(exp) {
//    }
//
//    void display(ostream& os) const {
//        os << cardType << " ending in ************" << lastFourDigits << " (Exp: " << expiry << ")";
//    }
//};
//
//class OrderItem {
//private:
//    string productName;
//    int quantity;
//    double unitPrice;
//
//public:
//    OrderItem() : productName(""), quantity(0), unitPrice(0.0) {}
//    OrderItem(string name, int qty, double price)
//        : productName(name), quantity(qty), unitPrice(price) {
//    }
//
//    double getTotal() const {
//        return quantity * unitPrice;
//    }
//
//    void display(ostream& os) const {
//        os << productName << " x" << quantity << " @ Rs." << unitPrice << " = Rs." << getTotal();
//    }
//};
//
//class Order {
//private:
//    ShippingAddress address;
//    PaymentInfo payment;
//    OrderItem items[5];
//    int itemCount;
//
//public:
//    Order(ShippingAddress addr, PaymentInfo pay) : address(addr), payment(pay), itemCount(0) {}
//
//    bool addItem(const OrderItem& item) {
//        if (itemCount < 5) {
//            items[itemCount] = item;
//            itemCount++;
//            return true;
//        }
//        return false;
//    }
//
//    double calculateTotal() const {
//        double grandTotal = 0;
//        for (int i = 0; i < itemCount; i++) {
//            grandTotal += items[i].getTotal();
//        }
//        return grandTotal;
//    }
//
//    friend ostream& operator<<(ostream& os, const Order& order) {
//        os << "==========================================" << endl;
//        os << "             ORDER RECEIPT                " << endl;
//        os << "==========================================" << endl;
//
//        os << "Shipping Address: ";
//        order.address.display(os);
//        os << endl;
//
//        os << "Payment Method:   ";
//        order.payment.display(os);
//        os << endl;
//
//        os << "------------------------------------------" << endl;
//        os << "Items Ordered:" << endl;
//        for (int i = 0; i < order.itemCount; i++) {
//            os << "  " << i + 1 << ". ";
//            order.items[i].display(os);
//            os << endl;
//        }
//
//        os << "------------------------------------------" << endl;
//        os << "Grand Total:      Rs." << order.calculateTotal() << endl;
//        os << "==========================================" << endl;
//
//        return os;
//    }
//};

int main() {
    ShippingAddress customerAddr("123-B, Main Boulevard", "Lahore", "Pakistan", "54000");
    PaymentInfo customerPay("Visa", "4321", "12/29");

    Order orderObj(customerAddr, customerPay);

    orderObj.addItem(OrderItem("Gaming Laptop", 1, 185000.0));
    orderObj.addItem(OrderItem("Wireless Mouse", 2, 3500.0));
    orderObj.addItem(OrderItem("Mechanical Keyboard", 1, 12000.0));

    cout << orderObj;

    return 0;
}