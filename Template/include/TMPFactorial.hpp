#ifndef TMP_FACTORIAL_H
#define TMP_FACTORIAL_H

template <int N>
struct TMPFactorial {
    static constexpr int value = N * TMPFactorial<N - 1>::value;
};

template <>
struct TMPFactorial<0> {
    static constexpr int value = 1;
};

#endif 
