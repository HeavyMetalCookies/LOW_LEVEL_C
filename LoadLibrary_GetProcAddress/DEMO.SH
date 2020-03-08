##  SC[ hkmf-mini] ##############
## SEE[ hkmf-c11 ] for reference:
#################################
gcc                             \
    -x c                        \
    -c "DEMO.C11"               \
    -o object_file.o            \
    -m64                        \
        -Werror                 \
        -Wfatal-errors          \
        -Wpedantic              \
        -Wall                   \
        -Wextra                 \
        -std=c11                #
                                #
gcc -o EXE.exe object_file.o    #                 
rm             object_file.o    #      
     ./EXE.exe                  #
rm     EXE.exe                  #
                                #
read -p "[ENTER_TO_EXIT]:"      #
#################################

