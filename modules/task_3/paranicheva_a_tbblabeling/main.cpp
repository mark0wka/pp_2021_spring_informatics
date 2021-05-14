// Copyright 2021 Paranicheva Alyona
#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include <ctime>
#include "./labeling.h"

//TEST(CLabeling_Omp, 10000x10000) {
//    int rows = 10000;
//    int cols = 10000;
//    std::vector<int> img = getRandomMatrix(rows, cols);
//    double start = clock();
//    std::vector<int> expres = CLabeling(img, rows, cols);
//    double end = clock();
//    printf("Sequential tooks %f seconds\n", (end - start) / 1000);
//    double start1 = omp_get_wtime();
//    std::vector<int> res = CLabelingOmp(img, rows, cols);
//    double end1 = omp_get_wtime();
//    printf("OMP tooks %f seconds\n", end1 - start1);
//    ASSERT_TRUE(true);
//}

TEST(CLabeling_TBB, 7x10) {
    int rows = 15;
    int cols = 17;
    std::vector<int> img = getRandomMatrix(rows, cols);
    std::vector<int> expres = CLabeling(img, rows, cols);
    std::vector<int> res = CLabelingTBB(img, rows, cols);
    ASSERT_EQ(expres, res);
}

TEST(CLabeling_TBB, 15x17) {
    int rows = 15;
    int cols = 17;
    std::vector<int> img = getRandomMatrix(rows, cols);
    std::vector<int> expres = CLabeling(img, rows, cols);
    std::vector<int> res = CLabelingTBB(img, rows, cols);
    ASSERT_EQ(expres, res);
}

TEST(CLabeling_TBB, 21x8) {
    int rows = 21;
    int cols = 8;
    std::vector<int> img = getRandomMatrix(rows, cols);
    std::vector<int> expres = CLabeling(img, rows, cols);
    std::vector<int> res = CLabelingTBB(img, rows, cols);
    ASSERT_EQ(expres, res);
}

TEST(CLabeling_TBB, 23x15) {
    int rows = 21;
    int cols = 8;
    std::vector<int> img = getRandomMatrix(rows, cols);
    std::vector<int> expres = CLabeling(img, rows, cols);
    std::vector<int> res = CLabelingTBB(img, rows, cols);
    ASSERT_EQ(expres, res);
}

TEST(Clabeling_Matrix_gen, Invalid_size) {
    int rows = -5;
    int cols = 7;
    ASSERT_ANY_THROW(getRandomMatrix(rows, cols));
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
