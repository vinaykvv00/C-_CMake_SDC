#include "MapExample.h"

int main() {
    MapExample maps;

    maps.initializeMaps();
    maps.displayMaps();

    maps.insertUserInput();
    maps.displayMaps();

    maps.findAndModify();
    maps.displayMaps();

    maps.showCommonInfo();

    return 0;
}
