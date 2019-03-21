#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlineGameSearchResult()
{
    class_< FOnlineGameSearchResult >("FOnlineGameSearchResult", no_init)
        .def_readwrite("GameSettings", &FOnlineGameSearchResult::GameSettings)
        .def_readwrite("PlatformData", &FOnlineGameSearchResult::PlatformData)
  ;
}