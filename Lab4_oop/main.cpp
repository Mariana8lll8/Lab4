#include "inheritance.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned>(time(0)));
    int choice, score = 0;

    do
    {
        ShowMenu();
        std::cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Car car;
            ShowTransportInfo(car);
            UpgradeVehicle();
            Upgrade(car);
            score += 10;
            cout << "+10 очків до загальної кількості\n";
            break;
        }
        case 2:
        {
            WagonCar car("Toyota", 4);
            ShowTransportInfo(car);
            UpgradeVehicle();
            Upgrade(car);
            score += 15;
            cout << "+15 очків до загальної кількості\n";
            break;
        }
        case 3:
        {
            SportCar car("Ferrari", 320);
            ShowTransportInfo(car);
            UpgradeVehicle();
            Upgrade(car);
            score += 20;
            cout << "+20 очків до загальної кількості\n";
            break;
        }
        case 4:
        {
            Truck truck;
            ShowTransportInfo(truck);
            UpgradeVehicle();
            Upgrade(truck);
            score += 25;
            cout << "+25 очків до загальної кількості\n";
            break;
        }
        case 5:
        {
            Bus bus;
            ShowTransportInfo(bus);
            UpgradeVehicle();
            Upgrade(bus);
            score += 30;
            cout << "+30 очків до загальної кількості\n";
            break;
        }
        case 6:
        {
            ElectricBicycle bike;
            ShowTransportInfo(bike);
            UpgradeVehicle();
            Upgrade(bike);
            score += 5;
            cout << "+5 очків до загальної кількості\n";
            break;
        }
        case 7:
        {
            Motorcycle moto(6, "спортивний", "має");
            ShowTransportInfo(moto);
            UpgradeVehicle();
            Upgrade(moto);
            score += 15;
            cout << "+15 очків до загальної кількості\n";
            break;
        }
        case 8:
        {
            Train train;
            ShowTransportInfo(train);
            UpgradeVehicle();
            Upgrade(train);
            score += 50;
            cout << "+50 очків до загальної кількості\n";
            break;
        }
        case 9:
        {
            Tram tram("пасажирів", "електричний");
            ShowTransportInfo(tram);
            UpgradeVehicle();
            Upgrade(tram);
            score += 40;
            cout << "+40 очків до загальної кількості\n";
            break;
        }
        case 10:
        {
            ElectricTrain electrictrain("Електричний");
            ShowTransportInfo(electrictrain);
            UpgradeVehicle();
            Upgrade(electrictrain);
            score += 50;
            cout << "+50 очків до загальної кількості\n";
            break;
        }
        case 11:
        {
            Plane plane;
            ShowTransportInfo(plane);
            UpgradeVehicle();
            Upgrade(plane);
            score += 100;
            cout << "+100 очків до загальної кількості\n";
            break;
        }
        case 12:
        {
            CargoPlane cargoplane;
            ShowTransportInfo(cargoplane);
            UpgradeVehicle();
            Upgrade(cargoplane);
            score += 100;
            cout << "+100 очків до загальної кількості\n";
            break;
        }
        case 13:
        {
            PassengerPlane plane(850, 150);
            ShowTransportInfo(plane);
            UpgradeVehicle();
            Upgrade(plane);
            score += 100;
            cout << "+100 очків до загальної кількості\n";
            break;
        }
        case 14:
            std::cout << "Дякуємо за гру! Ваші очки: " << score << "\n";
            exit(0);
        default:
            std::cout << "Невірний вибір. Спробуйте ще раз.\n";
            exit(0);
        }

        if (rand() % 10 < 3)
        {
            std::cout << "\n\n--- Випадкова подія! ---\n";
            int event = rand() % 2;
            if (event == 0)
            {
                std::cout << "\nВаш транспорт отримав бонусний бал!\n\n";
                score += 5;
            }
            else
            {
                std::cout << "\nВаш транспорт втратив деяку потужність :(\n\n";
                score -= 5;
            }
        }

    } while (choice != 14);

    return 0;
}

