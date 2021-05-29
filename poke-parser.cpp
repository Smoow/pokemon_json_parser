#include <nlohmann/json.hpp>
#include <vector>
#include <fstream>
#include <iostream>

using nlohmann::json;

int main()
{
    std::ifstream data("pokedex.json");
    json jsonData = json::parse(data);
    int it = 0;

    while (to_string(jsonData[it]["id"]).length() < 4)
    {
        std::cout << "id: " << jsonData[it]["id"] << std::endl;
        std::cout << "Name: " << jsonData[it]["name"]["english"] << std::endl;
        std::cout << "Type: " << jsonData[it]["type"] << std::endl << std::endl;
        it++;
    }

    return 0;
}