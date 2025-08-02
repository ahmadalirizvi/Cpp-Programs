#include <iostream>
#include <string>
using namespace std;

class Monitor {
private:
    string cname;
    int size;
    double price;

public:
    Monitor(string c = "", int s = 0, double p = 0.0) {
        setcname(c);
        setsize(s);
        setprice(p);
    }
    ~Monitor() {
        cout << "Destroying Monitor: " << cname << endl;
    }

    string getcname() {
        return cname;
    }
    int getsize() {
        return size;
    }
    double getprice() {
        return price;
    }

    void setcname(string c) {
        cname = c;
    }
    void setsize(int s) {
        size = s;
    }
    void setprice(double p) {
        price = p;
    }
};

class CPU {
private:
    string cname;
    double speed;
    double price;

public:
    CPU(string c = "", double s = 0.0, double p = 0.0) {
        setcname(c);
        setspeed(s);
        setprice(p);
    }
    ~CPU() {
        cout << "Destroying CPU: " << cname << endl;
    }

    string getcname() {
        return cname;
    }
    double getspeed() {
        return speed;
    }
    double getprice() {
        return price;
    }

    void setcname(string c) {
        cname = c;
    }
    void setspeed(double s) {
        speed = s;
    }
    void setprice(double p) {
        price = p;
    }
};

class Keyboard {
private:
    string cname;
    int keys;
    double price;

public:
    Keyboard(string c = "", int n = 0, double p = 0.0) {
        setcname(c);
        setkeys(n);
        setprice(p);
    }
    ~Keyboard() {
        cout << "Destroying Keyboard: " << cname << endl;
    }

    string getcname() {
        return cname;
    }
    int getkeys() {
        return keys;
    }
    double getprice() {
        return price;
    }

    void setcname(string c) {
        cname = c;
    }
    void setkeys(int n) {
        keys = n;
    }
    void setprice(double p) {
        price = p;
    }
};

class Mouse {
private:
    string cname;
    double price;

public:
    Mouse(string c = "", double p = 0.0) {
        setcname(c);
        setprice(p);
    }
    ~Mouse() {
        cout << "Destroying Mouse: " << cname << endl;
    }

    string getcname() {
        return cname;
    }
    double getprice() {
        return price;
    }

    void setcname(string c) {
        cname = c;
    }
    void setprice(double p) {
        price = p;
    }
};

class USBDrive {
private:
    string cname;
    double size;
    double price;

public:
    USBDrive(string c = "", double s = 0.0, double p = 0.0) {
        setcname(c);
        setsize(s);
        setprice(p);
    }
    ~USBDrive() {
        cout << "Destroying USBDrive: " << cname << endl;
    }

    string getcname() {
        return cname;
    }
    double getsize() {
        return size;
    }
    double getprice() {
        return price;
    }

    void setcname(string c) {
        cname = c;
    }
    void setsize(double s) {
        size = s;
    }
    void setprice(double p) {
        price = p;
    }
};

class ComputerSystem {
private:
    Monitor monitor;
    CPU cpu;
    Keyboard keyboard;
    Mouse mouse;
    USBDrive* usbdrives[5];
    int usbcount;
    double price;
    string brand;

public:
    ComputerSystem(string b, Monitor m, CPU c, Keyboard k, Mouse mo) {
        setbrand(b);
        monitor = m;
        cpu = c;
        keyboard = k;
        mouse = mo;
        usbcount = 0;
        price = 0.0;
        for (int i = 0; i < 5; ++i) {
            usbdrives[i] = nullptr;
        }
        updatetotalprice();
    }

    ~ComputerSystem() {
        for (int i = 0; i < usbcount; ++i) {
            delete usbdrives[i];
        }
        cout << "Destroying Computer System: " << brand << endl;
    }

    string getbrand() {
        return brand;
    }
    void setbrand(string b) {
        brand = b;
    }

    double getprice() {
        return price;
    }

    void attachusb(USBDrive usb) {
        if (usbcount < 6) {
            usbdrives[usbcount] = new USBDrive(usb);
            usbcount++;
            updatetotalprice();
        } else {
            cout << "Cannot attach more than 5 USB drives.\n";
        }
    }

    void removeusb(int index) {
        if (index >= 0 && index < usbcount) {
            delete usbdrives[index];
            for (int i = index; i < usbcount - 1; ++i) {
                usbdrives[i] = usbdrives[i + 1];
            }
            usbdrives[usbcount - 1] = nullptr;
            usbcount--;
            updatetotalprice();
        } else {
            cout << "Invalid USB index.\n";
        }
    }

    void showsystem() {
        cout << "\n===== Computer System: " << brand << " =====\n";
        cout << "Monitor: " << monitor.getcname() << ", " << monitor.getsize() << " inch, $" << monitor.getprice() << endl;
        cout << "CPU: " << cpu.getcname() << ", " << cpu.getspeed() << " GHz, $" << cpu.getprice() << endl;
        cout << "Keyboard: " << keyboard.getcname() << ", " << keyboard.getkeys() << " keys, $" << keyboard.getprice() << endl;
        cout << "Mouse: " << mouse.getcname() << ", $" << mouse.getprice() << endl;
        cout << "USB Drives (" << usbcount << "):\n";
        for (int i = 0; i < usbcount; ++i) {
            cout << "  [" << i << "] " << usbdrives[i]->getcname() << ", " << usbdrives[i]->getsize() << " GB, $" << usbdrives[i]->getprice() << endl;
        }
    }

    void showprice() {
        cout << "Total Price: $" << price << endl;
    }

private:
    void updatetotalprice() {
        price = monitor.getprice() + cpu.getprice() + keyboard.getprice() + mouse.getprice();
        for (int i = 0; i < usbcount; ++i) {
            price += usbdrives[i]->getprice();
        }
    }
};

int main() {
    Monitor m("Dell", 24, 150.0);
    CPU c("Intel", 3.5, 250.0);
    Keyboard k("Logitech", 104, 30.0);
    Mouse mo("HP", 20.0);

    ComputerSystem system("MyPC", m, c, k, mo);

    USBDrive u1("SanDisk", 64, 25.0);
    USBDrive u2("SanDisk", 64, 25.0);
    USBDrive u3("SanDisk", 64, 25.0);
    USBDrive u4("SanDisk", 64, 25.0);
    USBDrive u5("Kingston", 128, 40.0);

    system.attachusb(u1);
    system.attachusb(u2);
    system.attachusb(u3);
    system.attachusb(u4);
    system.attachusb(u5);

    system.showsystem();
    system.showprice();

    system.removeusb(0);
    system.showsystem();
    system.showprice();

    return 0;
}
