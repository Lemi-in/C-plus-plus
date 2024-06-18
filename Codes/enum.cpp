// #include <iostream>
// using namespace std;

// enum Season {
//     WINTER = 1,
//     SPRING = 2,
//     SUMMER = 3,
//     FALL = 4
// };

// int main() {
//     Season currentSeason = SUMMER;
//     cout << "Current Season: " << currentSeason << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

enum Flag {
    FLAG_NONE = 0,
    FLAG_READ = 1,
    FLAG_WRITE = 2,
    FLAG_EXECUTE = 4
};

int main() {
    Flag filePermissions = FLAG_READ | FLAG_WRITE;
    cout << "File Permissions: " << filePermissions << endl;

    if (filePermissions & FLAG_READ) {
        cout << "Read Permission Granted" << endl;
    }
    if (filePermissions & FLAG_WRITE) {
        cout << "Write Permission Granted" << endl;
    }
    if (filePermissions & FLAG_EXECUTE) {
        cout << "Execute Permission Granted" << endl;
    }

    return 0;
}
