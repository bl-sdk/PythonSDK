#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineContentNameInfo()
{
    py::class_< FOnlineContentNameInfo >("FOnlineContentNameInfo")
        .def_readwrite("ContentName", &FOnlineContentNameInfo::ContentName)
        .def_readwrite("EngineVersion", &FOnlineContentNameInfo::EngineVersion)
        .def_readwrite("CookedVersionID", &FOnlineContentNameInfo::CookedVersionID)
  ;
}