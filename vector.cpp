#include<iostream>
#include<string>
#include<vector>
#include <iomanip>

template <typename T> class Item{
public:
T name;
T expiration;
T category;
int quantity;
Item(T n, T e, T c, int q){
name = n;
expiration = e;
category = c;
quantity = q;
}
};

template<typename T> class Inventory{
public:
// Write Your code
std::vector<Item<T>> items;

void addNewItem(T name, T expiration, T category, int quantity){
   for (const Item<T>& item : items) {
    if (item.name == name && item.expiration == expiration & item.category == category) {
        std::cout << "Item is already present in inventory. " << std::endl;
        return; 
    }
   } 
   items.emplace_back(name, expiration, category, quantity);
};

void increaseQuantity(T itemName, int addQuantity) {
    for (Item<T>& item : items) { //iterate through the list of items
        if (item.name == itemName) {
            item.quantity += addQuantity;
            std::cout << "Quantity of " << itemName << " increase by " << addQuantity <<std::endl;
            return;
        }
    }
    std::cout << "Item not found in inventory. " << std::endl; 
};

void updateItem(T itemName, T newExpiration int newQuantity, T newCategory) {
 for (Item<T>& item : items) {
    if (item.name == itemName) {
        item.expiration = newExpiration;
        item.quantity = newQuantity;
        item.category = newCategory;
        std::cout << "Item updated: " << itemName << std::endl;
        return;
    }
 }
    throw "Item not found";
}

void removeItem(T itemName) {
    for (auto it = item.begin(); it != items.end(); ++it) {
        if (it->name = itemName) {
            items.erase(it);
            std::cout << "Item removed: " << itemName << std::endl;
            return;
        }
    }
    throw "Item not found";
};

int Total() {
    int totalItems = 0;
    for (size_t i = 0; i < items.size(); ++i ) {
        totalItems += items[i]. quantity;
    }
    return totalItems
};

void searchItem(T itemName) {
    for (const item<T>& item : items) {
        if (item.name == itemName) {
            return;
        }
    }
    throw "Item not found!";
}

void displayItems(){
std::cout<<"-------Inventory-------"<<std::endl;
std::cout<<std::left<<std::setw(20)<<"Name"<<std::setw(15)<<"Expiration"<<std::setw
(15)<<"Quantity"<<std::setw(10)<<"Category"<<std::endl;
for(int i=0; i<items.size();i++){
std::cout<<std::left <<
std::setw(20)<<items[i].name<<std::setw(15)<<items[i].expiration<<std::setw(15)<<it
ems[i].quantity<<std::setw(15)<<items[i].category<<std::endl;
}
}
};

template<typename T>class Appointment{
public:
T c_name;
T ap_date;
T ap_time;
T CWID;
Appointment(T n, T d, T t, T cw){
c_name = n;
ap_date = d;
ap_time = t;
CWID = cw;
}
};

template<typename T>class AppointmentSystem{
public:
// Write Your code
void display(){
std::cout<<"-------Appointments-------"<<std::endl;
std::cout<<std::left<<std::setw(20)<<"Name"<<std::setw(15)<<"Date"<<std::setw(15)<<
"Time"<<std::setw(15)<<"CWID"<<std::endl;
for(int i=0; i<ap.size();i++){
std::cout<<std::left <<
std::setw(20)<<ap[i].c_name<<std::setw(15)<<ap[i].ap_date<<std::setw(15)<<ap[i].ap_
time<<std::setw(15)<<ap[i].CWID<<std::endl;
}
}
};
int main(){
/* Remove comments and run following test cases
Inventory<std::string> i1;
Item<std::string> I1("Protien Bar","05/09/2023","Snacks",4);
i1.addNewItem(I1);
Item<std::string> I2("Milk","05/12/2023","Regular",2);
i1.addNewItem(I2);
Item<std::string> I3("Cerels","09/12/2023","Snacks",5);
i1.addNewItem(I3);
i1.displayItems();
i1.updateItem("Milk","09/24/2023","Regular",3);
i1.displayItems();
i1.increaseQuantity("Cerels",10);
i1.displayItems();
try{
i1.updateItem("bar","09/12/2023","Snacks",3);
}
catch(const char* msg){
std::cout <<msg << std::endl;
}
i1.displayItems();
i1.updateItem("Cerels","09/27/2023","Regular",4);
i1.displayItems();
i1.Total();
try{
i1.removeItem("Bread");
}
catch(const char* msg){
std::cout<<msg<<std::endl;
}
try{
i1.removeItem("Milk");
}
catch(const char* msg){
std::cout<<msg<<std::endl;
}
i1.displayItems();
try{
i1.searchItem("Cerels");
}
catch(const char* msg){
std::cout<<msg<<std::endl;
}
Appointment<std::string> a1("John Bob","09/12/2023","9:30AM","889456723");
Appointment<std::string> a2("Jim Lee","09/12/2023","10:30AM","883476923");
Appointment<std::string> a3("Chris Lynn","09/12/2023","12:00PM","879455714");
Appointment<std::string> a4("Arnav Shah","09/12/2023","12:00PM","879459583");
AppointmentSystem<std::string> s1;
s1.schedule(a1);
s1.schedule(a2);
s1.schedule(a3);
s1.schedule(a4);
s1.display();
s1.Total_appointments("09/12/2023","12:00PM");
Appointment<std::string> a5("Chris Lynn","09/12/2023","12:00PM","879455714");
s1.schedule(a4);
s1.removeRecent();
s1.display();*/
}
