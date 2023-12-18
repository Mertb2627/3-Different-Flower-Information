#include "KLC2023_01_220502006_Bitki.h"

int main() {
    KLC2023_01_220502006_Bitki bitki1("Flower", "Tulip", 10, 5, "Turkey, France, Italy");
    KLC2023_01_220502006_Bitki bitki2("Tree", "Sakura", 600, 8, "Japan, Chinese, Korea");
    KLC2023_01_220502006_Bitki bitki3("Flower", "Anemon", 10.6, 3, "England, Germany, Japan");

    bitki1.Bilgi();
    bitki2.Bilgi();
    bitki3.Bilgi();

    return 0;
}
