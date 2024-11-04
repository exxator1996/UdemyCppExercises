#include "lib.h"
#include <cstdint>
constexpr auto k_conversion_factor = std::uint8_t{32};

bool is_numeric(const char character)
{
    return (character > '0' && character < '9');
}
bool is_upper_case(const char character)
{
    return (character > 'A' && character < 'Z');
}

bool is_lower_case(const char character)
{
    return (character > 'a' && character < 'z');
}
bool is_alpha(const char character)
{
    return (is_upper_case(character) || is_lower_case(character));
}

bool is_alpha_numeric(const char character)
{
    return(is_alpha(character) || is_numeric(character));
}



char to_upper_case(const char character)
{
    return character - k_conversion_factor;
}

char to_lower_case(const char character)
{
    return  character + k_conversion_factor;
}
