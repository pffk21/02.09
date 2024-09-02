//
//  main.cpp
//  02.09
//
//  Created by paul blazhko on 02.09.2024.
//

#include<iostream>
#include<string>
using namespace std;

class Gpu
{
public:
    string model;
    int year;
    double price;
};
class Hdd
{
public:
    string model;
    int year;
    double price;
};
class Battery
{
public:
    string model;
    int year;
    double price;
};
class Ssd
{
public:
    string model;
    int year;
    double price;
};
class Cpu
{
public:
    string model;
    int year;
    double price;
};
class Display
{
public:
    string model;
    int year;
    double price;
};
class Ram
{
public:
    string model;
    int year;
    double price;
};
class Laptop
{
private:
    Gpu gpu;
    Hdd hdd;
    Battery battery;
    Ssd ssd;
    Cpu cpu;
    Display display;
    Ram ram;
public:
    Laptop(const Gpu& gpu,const Hdd& hdd,const Battery& battery,const Ssd& ssd,const Cpu& cpu,const Display& display,const Ram& ram): gpu(gpu),hdd(hdd),battery(battery),ssd(ssd),cpu(cpu),display(display),ram(ram){}
    void Print()
    {
        cout<<"Gpu: "<<gpu.model<<" - "<<gpu.year<<" - "<<gpu.price<<"$"<<endl;
        cout<<"Hdd: "<<hdd.model<<" - "<<hdd.year<<" - "<<hdd.price<<"$"<<endl;
        cout<<"Battery: "<<battery.model<<" - "<<battery.year<<" - "<<battery.price<<"$"<<endl;
        cout<<"Ssd: "<<ssd.model<<" - "<<ssd.year<<" - "<<ssd.price<<"$"<<endl;
        cout<<"Cpu: "<<cpu.model<<" - "<<cpu.year<<" - "<<cpu.price<<"$"<<endl;
        cout<<"Display: "<<display.model<<" - "<<display.year<<" - "<<display.price<<"$"<<endl;
        cout<<"Ram: "<<ram.model<<" - "<<ram.year<<" - "<<ram.price<<"$"<<endl;
    }
    void zamena(string komplekt)
    {
        if (komplekt=="Battery")
        {
            cout<<"Новая батарея: ";
            cin>>battery.model;
            cout<<"Цена: ";
            cin>>battery.price;
        }
        else if (komplekt== "Ssd")
        {
            cout << "Новый SSD: ";
            cin >> ssd.model;
            cout<< "Цена: ";
            cin>>ssd.price;
        }
        else if (komplekt== "Hdd")
        {
            cout << "Новый Hdd: ";
            cin >> hdd.model;
            cout<< "Цена: ";
            cin>>hdd.price;
        }
    }
};
int main()
{
    Gpu gpu{"RTX 4070",2023,800};
    Hdd hdd{"Seagate 1TB", 2023, 100};
    Battery battery{"Li-ion 10000mAh", 2023, 300};
    Ssd ssd{"Samsung", 2023, 250};
    Cpu cpu{"Intel Core i7", 2023, 400};
    Display display{"PowerPlant 15.6 1920x1080 FHD IPS LED SLIM",2023,180};
    Ram ram{"Corsair 32GB", 2023, 230};
    Laptop laptop(gpu,hdd,battery,ssd,cpu,display,ram);
    laptop.Print();
    char vibor;
    cout<<"Заменить Battery, SSD или Hdd (y/n)?";
    cin>>vibor;
    if (vibor == 'y')
    {
        string komplekt;
        cout << "Что заменить (Battery/Ssd/Hdd)? ";
        cin >> komplekt;
        laptop.zamena(komplekt);
    }
    cout << "\n--------------------------------" << endl;
    laptop.Print();
}
