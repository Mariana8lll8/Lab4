#include "inheritance.h"
#include <iostream>
#include <ctime>

void ShowMenu()
{
    std::cout << "\n\n=== Міні-гра: Вибір транспорту ===\n\n";
    std::cout << "1. Звичайна машина\n";
    std::cout << "2. Універсал\n";
    std::cout << "3. Спортивна машина\n";
    std::cout << "4. Вантажівка\n";
    std::cout << "5. Автобус\n";
    std::cout << "6. Електровелосипед\n";
    std::cout << "7. Мотоцикл\n";
    std::cout << "8. Потяг\n";
    std::cout << "9. Трамвай\n";
    std::cout << "10. Електропоїзд\n";
    std::cout << "11. Літак\n";
    std::cout << "12. Вантажний літак\n";
    std::cout << "13. Пасажирський літак\n";
    std::cout << "14. Вийти\n\n";
    std::cout << "Ваш вибір: ";
}

void ShowTransportInfo(Vehicle &vehicle)
{
    std::cout << "\n\n--- Покращення транспорту ---\n\n";
    std::cout << "Покращення потужності двигуна\n";
    std::cout << "Покращення корпусу\n";
}

void UpgradeVehicle()
{
    std::cout << "\n--- Вибір покращення ---\n\n";
    std::cout << "1. Покращити двигун\n";
    std::cout << "2. Покращити корпус\n";
    std::cout << "\nВаш вибір: ";
}

void Upgrade(Vehicle& vehicle)
{
    int upgradeChoice;
    std::cin >> upgradeChoice;
    if (upgradeChoice == 1) std::cout << "\nДвигун покращено\n";
    else if (upgradeChoice == 2) std::cout << "\nКорпус покращено\n";
    else if (upgradeChoice != 1 && upgradeChoice != 2 && upgradeChoice != 3) exit(0);
}


void Vehicle::DriversOrPilots(int q) { drivers_or_pilots = q; }

void Vehicle::Engine(std::string e) { engine = e; }

void Vehicle::Body(std::string b) { body = b; }

void Vehicle::trunkCapacity(std::string trunk_capacity_v) { trunk_capacity = trunk_capacity_v; }

void Vehicle::Display_info() 
{
    std::cout << "\nДвигун: " << engine << "\nКорпус: " << body << "\nБагажник: " << trunk_capacity << std::endl;
    std::cout << "\n";
}

void Car::NumberOfDoors(int q) { Number_of_doors = q; }

void WagonCar::Brand(std::string brand_car) { brand = brand_car; }

void SportCar::Speed(int s) { speed = s; }

void Truck::LoadCapacity(int w) { load_capacity = w; }

void Bus::PassengerCapacity(int q) { passenger_capacity = q; }

void Bus::RouteNumber(int n) { route_number = n; }

void ElectricBicycle::GearCount(int gear_count_e) { gear_count = gear_count_e; }

void ElectricBicycle::Type(std::string type_e) { type = type_e; }

void Motorcycle::HasSidecar(std::string has_sidecar_m) { has_sidecar = has_sidecar_m; }

void ElectricTrain::SetFuelType(std::string set_fuel_type_e) { set_fuel_type = set_fuel_type_e; }

void Tram::TrainType(std::string train_type_t) { train_type = train_type_t; }

void Plane::AverageSpeed(int s) { average_speed = s; }

void CargoPlane::LoadCapacityPlane(int load_capacity_plane_c) { load_capacity_plane = load_capacity_plane_c; }

void PassengerPlane::NumberOfPassengers(int number_of_passengers_p) { number_of_passengers = number_of_passengers_p; }

Car::Car()
{
    DriversOrPilots(1);
    Engine("потужний");
    Body("гарний");
    trunkCapacity("стандартний");
    NumberOfDoors(4);
    Display_info();
}

WagonCar::WagonCar(std::string brand_car, int Number_of_doors)
{
    Brand(brand_car);
    NumberOfDoors(Number_of_doors);
    std::cout << "\nМарка авто - " << brand << ", кількість дверей: " << Number_of_doors;
    std::cout << "\n\n";
}

WagonCar::WagonCar() {}

SportCar::SportCar(std::string brand_car, int speed)
{
    Brand(brand_car);
    Speed(speed);
    std::cout << "\nАвто марки " << brand_car << " є дуже швидкі, максимальна швидкість: " << speed << " км/год.\n\n";
}

Truck::Truck()
{
    DriversOrPilots(1);
    Engine("потужний");
    Body("гарний");
    trunkCapacity("невеличкий");
    LoadCapacity(7000);
    Display_info();
}

Bus::Bus()
{
    DriversOrPilots(1);
    Engine("потужний ");
    Body("гарний");
    trunkCapacity("невеличкий");
    PassengerCapacity(50);
    RouteNumber(92);
    Display_info();
}

ElectricBicycle::ElectricBicycle()
{
    DriversOrPilots(1);
    Engine("потужний");
    Body("гарний");
    trunkCapacity("невеличкий");
    GearCount(5);
    Type("міський");
    Display_info();
}

Motorcycle::Motorcycle(int gear_count, std::string type, std::string has_sidecar)
{
    GearCount(gear_count);
    Type(type);
    HasSidecar(has_sidecar);
    std::cout << "\nЦе " << type << " мотоцикл, він має " << gear_count << " передач, також він " << has_sidecar << " спеціальну бокову коляску.\n\n";
}

Motorcycle::Motorcycle() {}

Train::Train()
{
    DriversOrPilots(1);
    Engine("потужний");
    Body("гарний");
    trunkCapacity("-");
    Display_info();
}

ElectricTrain::ElectricTrain(std::string set_fuel_type)
{
    SetFuelType(set_fuel_type);
    std::cout << "\n";
    std::cout << set_fuel_type << " поїзд";
    std::cout << "\n\n";
}

ElectricTrain::ElectricTrain() {}

Tram::Tram(std::string train_type, std::string set_fuel_type)
{
    TrainType(train_type);
    std::cout << "\nПоїзд для " << train_type << ", працює на " << set_fuel_type;
    std::cout << "\n\n";
}

Plane::Plane()
{
    DriversOrPilots(1);
    Engine("потужні");
    Body("гарний білий");
    trunkCapacity("великий");
    AverageSpeed(800);
    Display_info();
}

CargoPlane::CargoPlane(int average_speed, int load_capacity_plane)
{
    LoadCapacityPlane(load_capacity_plane);
    std::cout << "\nЛітак може летіти зі середньою швидкістю " << average_speed << " км/год, та може нести груз вагою " << load_capacity_plane << " кілограм'.\n\n";
}

CargoPlane::CargoPlane() {}

PassengerPlane::PassengerPlane(int average_speed, int number_of_passengers)
{
    NumberOfPassengers(number_of_passengers);
    std::cout << "\nЛітак може летіти зі середньою швидкістю " << average_speed << " км/год, та може вміщати приблизно " << number_of_passengers << " пасажирів.\n\n";
}
