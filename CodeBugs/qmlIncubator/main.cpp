#include "MyIncubator.h"

int main() {
    MyIncubator incubator;

    incubator.clear();  // ✅ First call: clears and deletes
    incubator.clear();  // ❌ Second call: crashes due to nullptr access

    return 0;
}
