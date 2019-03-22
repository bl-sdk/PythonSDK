#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineContentNameInfo(py::module &m)
{
    py::class_< FOnlineContentNameInfo >(m, "FOnlineContentNameInfo")
        .def_readwrite("ContentName", &FOnlineContentNameInfo::ContentName)
        .def_readwrite("EngineVersion", &FOnlineContentNameInfo::EngineVersion)
        .def_readwrite("CookedVersionID", &FOnlineContentNameInfo::CookedVersionID)
  ;
}