// #include <iostream>

// using namespace std;

// int main()
// {
//     cout << "Hello World!" << endl;
//     return 0;
// }


#include <gtest/gtest.h>

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
