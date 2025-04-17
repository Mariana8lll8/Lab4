#pragma once
#include <iostream>

class Vehicle
{
    int drivers_or_pilots;
    std::string engine;
    std::string body;
    std::string fuel_type;
    std::string trunk_capacity;
    
    public:
    void DriversOrPilots(int q);
    void Engine(std::string e);
    void Body(std::string b);
    void trunkCapacity(std::string trunk_capacity_v);
    void Display_info();
};

class Car : public Vehicle
{
    int Number_of_doors;
    
    public:
    void NumberOfDoors(int q);
    Car();
};

class WagonCar : public Car
{
    protected:
    std::string brand;
    
    public:
    void Brand(std::string b);
    WagonCar(std::string brand_car, int Number_of_doors);
    WagonCar();
};

class SportCar : public WagonCar
{
    int speed;
    
    public:
    void Speed(int s);
    SportCar(std::string brand_car, int speed);
};

class Truck : public Vehicle
{
    int load_capacity;
    
    public:
    void LoadCapacity(int w);
    Truck();
};
class Bus : public Vehicle
{
    int route_number;
    int passenger_capacity;
    
    public:
    void PassengerCapacity(int q);
    void RouteNumber(int n);
    Bus();
};

class ElectricBicycle : public Vehicle
{
    protected:
    int gear_count;
    std::string type;
    
    public:
    void GearCount(int gear_count_e);
    void Type(std::string type_e);
    ElectricBicycle();
};
class Motorcycle : public ElectricBicycle
{
    std::string has_sidecar;
    
    public:
    void HasSidecar(std::string has_sidecar_m);
    Motorcycle(int gear_count, std::string type, std::string has_sidecar);
    Motorcycle();
};

class Train : public Vehicle
{
    public:
    Train();
};

class ElectricTrain : public Train
{
    protected:
    std::string set_fuel_type;
    
    public:
    void SetFuelType(std::string set_fuel_type);
    ElectricTrain(std::string set_fuel_type);
    ElectricTrain();
};

class Tram : public ElectricTrain
{
    std::string train_type;
    
    public:
    void TrainType(std::string train_type_t);
    Tram(std::string train_type, std::string set_fuel_type);
};

class Plane : public Vehicle
{
    protected:
    int average_speed;
    
    public:
    void AverageSpeed(int s);
    Plane();
};

class CargoPlane : public Plane
{
    int load_capacity_plane;
    
    public:
    void LoadCapacityPlane(int load_capacity_plane_c);
    CargoPlane(int average_speed, int load_capacity_plane);
    CargoPlane();
};

class PassengerPlane : public CargoPlane
{
    int number_of_passengers;
    
    public:
    void NumberOfPassengers(int number_of_passengers_p);
    PassengerPlane(int average_speed, int number_of_passengers);
};

void ShowMenu();
void UpgradeVehicle();
void ShowTransportInfo(Vehicle& vehicle);
void Upgrade(Vehicle& vehicle);
