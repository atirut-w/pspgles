add_library(GL STATIC
    dummy.c
)
target_include_directories(GL PUBLIC include)
target_link_libraries(GL PRIVATE
    pspgu
    pspge
    pspdisplay
)
