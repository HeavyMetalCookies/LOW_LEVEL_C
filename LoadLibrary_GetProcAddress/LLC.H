//: LLC.H: Low_Level_C


    //: #include <stdio.h> //:printf(...)

    #include "_.AP._" //:AP: All Platforms
    #include "X64.W10._"

//:Prototypes:
////////////////////////////////////////////////////////////////
void LLC_Init( struct LLC_init_info  init_info );
////////////////////////////////////////////////////////////////

//:Init should be required to supply an initialization struct
//:That contains addresses of some needed functions.
void LLC_Init( 
    struct LLC_init_info 
               init_info 
){



    //:TODO: Compiler logic to determine what platform
    //:      specific code gets invoked here.
    LLC_PEBWALK_WIN10_X64_Init( 
        init_info //:<--NOT_A_POINTER
    );;

}
   
 