#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>

// Base Class demonstrating Encapsulation
class Animal {
protected:
    std::string name;
    int age;
    std::string species;

public:
    Animal(std::string n, int a, std::string s) : name(n), age(a), species(s) {}
    virtual ~Animal() {} // Virtual destructor for polymorphism

    // Getters
    std::string getName() const { return name; }
    int getAge() const { return age; }
    std::string getSpecies() const { return species; }
};

// Subclasses demonstrating Inheritance
class Hyena : public Animal {
public:
    Hyena(std::string n, int a) : Animal(n, a, "Hyena") {}
};

class Lion : public Animal {
public:
    Lion(std::string n, int a) : Animal(n, a, "Lion") {}
};

// ... Similar classes for Tiger and Bear ...

int main() {
    std::vector<Animal*> zooAnimals;
    std::map<std::string, int> speciesCount;

    // File I/O Logic
    std::ifstream inputFile("arrivingAnimals.txt");
    std::ofstream outputFile("newAnimals.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open input file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        // Logic to parse line and create objects would go here
        // For example purposes, let's manually add one:
        zooAnimals.push_back(new Hyena("Kamari", 4));
        speciesCount["Hyena"]++;
    }

    // Generate Report
    for (auto const& [species, count] : speciesCount) {
        outputFile << species << " Habitat (Total: " << count << "):\n";
        for (Animal* animal : zooAnimals) {
            if (animal->getSpecies() == species) {
                outputFile << animal->getName() << "; " << animal->getAge() << " years old\n";
            }
        }
    }

    // Clean up memory
    for (Animal* a : zooAnimals) delete a;

    return 0;
}