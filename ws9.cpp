#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

typedef vector<int> Records;

class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}

    // Update read function with exception handling
    void read(Records &records) {
        _file.open(_filename, ios::in);

        try {
            if (!_file.is_open()) {
                throw runtime_error("failed to open file");
            }

            string line;
            while (getline(_file, line)) {
                int value = stoi(line);
                records.push_back(value);
            }

            _file.close();
        } catch (const invalid_argument &e) {
            cout << "invalid_argument error" << endl;
            if (_file.is_open()) _file.close();
            throw; // propagate
        } catch (const out_of_range &e) {
            cout << "out_of_range error" << endl;
            if (_file.is_open()) _file.close();
            throw; // propagate
        } catch (const runtime_error &e) {
            cout << "runtime_error error" << endl;
            if (_file.is_open()) _file.close();
            throw; // propagate
        } catch (...) {
            cout << "exception error" << endl;
            if (_file.is_open()) _file.close();
            throw; // propagate
        }
    }
};

int main(int argc, char* argv[]) {
    Records myRecords;

    string filename = "records.txt";
    if (argc > 1) filename = argv[1];

    RecordsManager recordM(filename); 
    
    try {
        recordM.read(myRecords);
    } catch (const exception &e) {
        cerr << e.what() << endl;
        return 1;
    }

    int sum = 0;
    for (size_t i = 0; i < myRecords.size(); i++) {
        sum += myRecords[i];
    }
    cout << sum << endl;


    return 0;
}
