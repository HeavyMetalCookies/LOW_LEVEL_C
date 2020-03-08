//: LLC.H: Low_Level_C


////////////////////////////////////////////////////////////////
//:Generic Function Pointers (PFN: Pointer To Function)
//:In two calling conventions: STDCALL & CDECL:
////////////////////////////////////////////////////////////////
typedef void ( __stdcall *LLC_PFN_STDCALL )( void ); //:WIN__32
typedef void ( __cdecl   *LLC_PFN_CDECL   )( void ); //:VARARGS

//:SEE[ _cprintf_p ]IN[ conio.h ]OF[ mingw / gcc ]
typedef 
    int 
        ( __cdecl *LLC_PFN_PrintF )(
            const char * __restrict__ _Format,...
        );

////////////////////////////////////////////////////////////////
//:Example to show you where calling convention goes on
//:function declarations in C code: SC[ ccfuncdec_examples ]
////////////////////////////////////////////////////////////////
    #define LLC_MACRO_END_FUNCTION /////////////////////////////
    void __stdcall LLC_ExampleFunc_STDCALL( void ){

        //:DoNothing

    } LLC_MACRO_END_FUNCTION
    void __cdecl   LLC_ExampleFunc_CDECL(   void ){

        //:DoNothing

    } LLC_MACRO_END_FUNCTION
    #undef LLC_MACRO_END_FUNCTION //////////////////////////////
////////////////////////////////////////////////////////////////

LLC_PFN_PrintF llc_pfn_PrintF = ((void*)0);

void LLC_LoadPrintF( LLC_PFN_PrintF address ){

    if( 0 == address ){ 
        //:NoNewsIsBadNews
    }else{
        llc_pfn_PrintF=( address );

        llc_pfn_PrintF("[LLC_LoadPrintF:SUCCESS!]\n");

        //:Inline cast to function pointer, then call:
        (
            (   int( __cdecl *)( const char* )   )
            llc_pfn_PrintF
        )(
            "[LLC_LoadPrintF:SUCCESS!]\n"
        );

        

    };;
    return;
}//[x]//


   
 