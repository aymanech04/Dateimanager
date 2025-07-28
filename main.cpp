#include <iostream>
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;

int main() {
    std::string path = ".";
    std::cout << "📁 Files in current directory:\n";

    int count = 1;
    for (const auto& entry : fs::directory_iterator(path)) {
        std::cout << count++ << ". " << entry.path().filename().string() << "\n";
    }

    std::cout << "\nEnter filename to open: ";
    std::string filename;
    std::cin >> filename;

    std::ifstream file(filename);
    if (!file) {
        std::cerr << "❌ Error: Cannot open file.\n";
        return 1;
    }

    std::cout << "\n📄 File content:\n";
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << "\n";
    }

    file.close();
    return 0;
}
#include <iostream>
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;

int main() {
    std::string path = ".";
    std::cout << "📁 Files in current directory:\n";

    int count = 1;
    for (const auto& entry : fs::directory_iterator(path)) {
        std::cout << count++ << ". " << entry.path().filename().string() << "\n";
    }

    std::cout << "\nEnter filename to open: ";
    std::string filename;
    std::cin >> filename;

    std::ifstream file(filename);
    if (!file) {
        std::cerr << "❌ Error: Cannot open file.\n";
        return 1;
    }

    std::cout << "\n📄 File content:\n";
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << "\n";
    }

    file.close();
    return 0;
}
267586d (Updated README, .gitignore and main.cpp)
