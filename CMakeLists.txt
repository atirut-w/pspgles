add_library(GL STATIC
    internal.c

    glClear.c
    glClearColor.c
    glEnable.c
    glScissor.c
    glViewport.c
)
target_include_directories(GL PRIVATE private)
target_include_directories(GL PUBLIC include)
target_link_libraries(GL PRIVATE
    pspgu
    pspge
    pspdisplay
)
