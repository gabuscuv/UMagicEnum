// Copyright 2023 Gabriel Bustillo del Cuvillo
#include "MagicEnum/magic_enum.hpp"

#include <string>
struct FMagicEnumHelper
{
    public:
    template <typename E>
    static inline FText EnumToFText(E Enum)
    {
        return FText::FromString(FString(std::string(magic_enum::enum_name<E>(Enum)).c_str()));
    }

    template <typename E>
    static inline FName EnumToFName(E Enum)
    {
       return FName(FString(std::string(magic_enum::enum_name<E>(Enum)).c_str()));
    }
};