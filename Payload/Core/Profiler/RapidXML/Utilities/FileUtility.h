//=====================================================================================

#pragma once

#include <stdint.h>
#include <string>
#include <list>
#include <vector>
#include <memory>

#include "StringUtility.hpp"

//=====================================================================================

#define ACUT_SLASH L'\\'
#define ACUT_SLASH_STR L"\\"
#define ACUT_SLASH_UTF8 '\\'
#define ACUT_SLASH_STR_UTF8 "\\"

//=====================================================================================

namespace acut
{
    bool read_file(const std::wstring& path, std::string& buffer);
    bool read_file(const std::wstring& path, std::vector<char>& buffer);
    bool read_file(const std::wstring& path, std::wstring& buffer);
    bool read_file(const std::wstring& path, std::vector<wchar_t>& buffer);
    bool file_exists(const std::wstring& filename);
}

//=====================================================================================