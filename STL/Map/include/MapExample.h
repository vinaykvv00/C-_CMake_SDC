#ifndef MAP_EXAMPLE_H
#define MAP_EXAMPLE_H

#include <map>
#include <unordered_map>
#include <string>

class MapExample {
public:
    MapExample();
    ~MapExample();

    void initializeMaps();        
    void displayMaps() const;     
    void insertUserInput();      
    void findAndModify();               
    void showCommonInfo() const;  

private:
    std::map<std::string, int> orderedMap_;            
    std::unordered_map<std::string, int> unorderedMap_; 
};

#endif
