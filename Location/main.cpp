#include <iostream>

using namespace std;

class loc {
    double longitude;
    double latitude;
public:
    loc() {};
    loc(double lg, double lt) {
        longitude = lg;
        latitude = lt;
    }
    void show() {
        cout << "Longitude: " << longitude << " N" << endl;
        cout << "Latitude: " << latitude << " E" << endl;
    }

    loc operator+(loc op2);

};

loc loc::operator+(loc op2) { // obj1 + obj2
    loc temp;
    temp.longitude = longitude + op2.longitude;
    temp.latitude = latitude + op2.latitude;

    return temp;

}

int main()
{
    loc nairobi(48.6789,35.789), kigali(40.6789,30.789);

    cout << "Nairobi location " << endl;
    nairobi.show();

    cout << "Kigari location " << endl;
    kigali.show();

    nairobi = nairobi + kigali ;

    cout << "Nairobi + Kigari location " << endl;
    nairobi.show();

    return 0;
}
