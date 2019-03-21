#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlineContentNameInfo()
{
    class_< FOnlineContentNameInfo >("FOnlineContentNameInfo", no_init)
        .def_readwrite("ContentName", &FOnlineContentNameInfo::ContentName)
        .def_readwrite("EngineVersion", &FOnlineContentNameInfo::EngineVersion)
        .def_readwrite("CookedVersionID", &FOnlineContentNameInfo::CookedVersionID)
  ;
}