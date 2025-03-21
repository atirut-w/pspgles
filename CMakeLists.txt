add_library(GL STATIC
    internal.c

    glClear.c
    glClearColor.c
    
    glDisable.c

    glEnable.c
    
    glFinish.c
    glFlush.c

    glLoadIdentity.c

    glMatrixMode.c

    glOrtho.c

    glScissor.c
    glShadeModel.c

    glViewport.c
)
target_include_directories(GL PRIVATE private)
target_include_directories(GL PUBLIC include)
target_link_libraries(GL PRIVATE
    pspgu
    pspgum
    pspge
    pspdisplay
)
