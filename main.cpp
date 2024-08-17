#include <iostream>
#include <fstream>  // Include fstream for file operations
#include "Helper.h"

using namespace std;

int main() {
    int MainArry[9];
    generateRandomArray(MainArry, 9);
    unsigned int check = alder_checksum(MainArry);
    cout << check;

    for (int i = 0; i < 9; ++i) {
        if (MainArry[i] >= 128) {
            MainArry[i] -= 128;
        }
    }
    cout << "After ";
    for (int x : MainArry) {
        cout << " " << x;
    }

    // Create an output file stream
    ofstream outputFile("output.txt");

    int counts = 0;
    for (int i = 0; i < 2; i++) {
        if (i == 1) {
            MainArry[0] += 128;
        }
        for (int j = 0; j < 2; j++) {
            if (j == 1) {
                MainArry[1] += 128;
            }
            for (int k = 0; k < 2; k++) {
                if (k == 1) {
                    MainArry[2] += 128;
                }
                for (int l = 0; l < 2; l++) {
                    if (l == 1) {
                        MainArry[3] += 128;
                    }
                    for (int m = 0; m < 2; m++) {
                        if (m == 1) {
                            MainArry[4] += 128;
                        }
                        for (int n = 0; n < 2; n++) {
                            if (n == 1) {
                                MainArry[5] += 128;
                            }
                            for (int o = 0; o < 2; o++) {
                                if (o == 1) {
                                    MainArry[6] += 128;
                                }
                                for (int p = 0; p < 2; p++) {
                                    if (p == 1) {
                                        MainArry[7] += 128;
                                    }
                                    for (int r = 0; r < 2; r++) {
                                        if (r == 1) {
                                            MainArry[8] += 128;
                                        }
                                        if(check==alder_checksum(MainArry)) {
                                            cout<<"ok";
                                            for (int q = 0; q < 9; q++) {
                                                    outputFile << MainArry[q] << " ";
                                                    counts += 1;
                                                }
                                        outputFile << endl;
                                        }
                                        // Write the 9 values in MainArry to the file
                                        // for (int q = 0; q < 9; q++) {
                                        //     outputFile << MainArry[q] << " ";
                                        //     counts += 1;
                                        // }
                                        if(r==1) {
                                            MainArry[8] -= 128;
                                        }
                                    }
                                    if (p == 1) {
                                        MainArry[7] -= 128;
                                    }
                                }
                                if (o == 1) {
                                    MainArry[6] -= 128;
                                }
                            }
                            if (n == 1) {
                                MainArry[5] -= 128;
                            }
                        }
                        if (m == 1) {
                            MainArry[4] -= 128;
                        }
                    }
                    if (l == 1) {
                        MainArry[3] -= 128;
                    }
                }
                if (k == 1) {
                    MainArry[2] -= 128;
                }
            }
            if (j == 1) {
                MainArry[1] -= 128;
            }
        }
        if (i == 1) {
            MainArry[0] -= 128;
        }
    }

    outputFile.close(); // Close the file

    cout << endl;
    cout << counts;

    return 0;
}
