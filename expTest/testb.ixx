module;
#include <format>
#include <utility>
#include <vector>
#include <iostream>
#include <string>
export module expTest.testb;

class Target
{
public:
    explicit Target ( std::string name )
        : name { std::move( name ) }
    {
    }

    Target ( const Target& obj ) = delete;

    auto set_option ( const std::string& option ) -> void
    {
        this->option = option;
    }

    [[nodiscard]] auto get_name () const -> std::string
    {
        return this->name;
    }

private:
    std::string name;
    std::string option = "null";
};

export namespace expTest
{
void testb_main ()
{
    using std::string;
    auto name   = string { "target_name" };
    auto target = Target { name };

    using std::cout;
    using std::format;
    cout << format( "target.name = {}\n", target.get_name() );
    cout << "testb_main end\n";
}
}
