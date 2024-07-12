module;
#include <iostream>
#include <cstdlib>
#include <format>
#include <windows.h>
export module expTest.testa;


export namespace expTest
{
auto my_test_a ()
{
    // 测试一下这个system
    std::string call_command { "--version" };
    auto        result_code = std::system( call_command.c_str() );

    std::cout << '\n';
    std::cout << "result_code: " << result_code;
}

auto my_test_b ()
{
    // 获取环境变量
    WCHAR buffer[10240];
    auto  buffer_exit_code_number = GetEnvironmentVariableW( L"PATH", buffer, 10240 );

    std::wcout << std::format( L"PATH is: {}", buffer );
    std::wcout << "\n";
    std::wcout << std::format( L"buffer number is: {}", buffer_exit_code_number );
}

auto testa_main () -> void
{
    my_test_b();
}
}
