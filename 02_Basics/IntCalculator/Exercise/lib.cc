#include <cstdint>

#include "lib.h"

std::uint32_t modulo(const std::uint32_t number_a, const std::uint32_t number_b)
{
    uint32_t ganzzahliger_quotient = 0;
    uint32_t rest = 0;

    ganzzahliger_quotient = number_a / number_b;
    rest = number_a - (ganzzahliger_quotient * number_b);

    return rest;
}

std::uint32_t sum_of_digits(std::uint32_t number)
{
    std::uint32_t num_digits = 0;

    do
    {
        number /= 10;
        num_digits++;
    } while (number > 0);

    return num_digits;
}

std::uint32_t cross_sum(std::uint32_t number)
{
    std::uint32_t sum = 0;

    while (number > 0)
    {
        std::uint32_t current_digit = number % 10;

        sum += current_digit;

        number /= 10;
    }

    return sum;
}
