#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineStatusMapping()
{
    py::class_< FOnlineStatusMapping >("FOnlineStatusMapping")
        .def_readwrite("StatusId", &FOnlineStatusMapping::StatusId)
        .def_readwrite("StatusString", &FOnlineStatusMapping::StatusString)
  ;
}