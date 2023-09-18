#include "UnitTestPP.h"
#include "../headers/funcoes.h"

    namespace
    {

        TEST(testaSomaComParametrosPositivos)
        {
            const int Result = soma(2,4);
            CHECK_EQUAL(6, Result);
        }

        TEST(testaSomaComParametrosNegativos)
        {
            const int Result = soma(-2,4);
            CHECK_EQUAL(2, Result);
        }

        TEST(testaSomaDiagonalMatrizQuadrada)
        {
            int matriz[][4] =
            {
                {2,4,6,8},
                {2,4,6,8},
                {2,4,6,8},
                {2,4,6,8}
            };
            const int Result = somaDiagonal(matriz,4);
            CHECK_EQUAL(20, Result);
        }

    }
