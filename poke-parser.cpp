#include <nlohmann/json.hpp>
#include <fstream>
#include <iostream>

using namespace std;
using nlohmann::json;

int main()
{
    ifstream data("pokedex.json");
    json jsonData = json::parse(data);
    int it = 0;

    while(!jsonData[it]["id"].is_null()) {
        cout << "id: " << jsonData[it]["id"] << endl;
        cout << "Name: " << jsonData[it]["name"]["english"] << endl;
        cout << "Type: " << jsonData[it]["type"] << endl;
        cout << "Base: " << jsonData[it]["base"] << endl << endl;
        it++;
    }

    return 0;
}
