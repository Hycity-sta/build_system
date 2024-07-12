add_library( expTest )

target_compile_options( expTest PUBLIC "/utf-8" )
target_sources( expTest PUBLIC
        FILE_SET CXX_MODULES FILES
        testa.ixx
        testb.ixx
)