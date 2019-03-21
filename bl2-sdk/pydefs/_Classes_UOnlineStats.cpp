#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineStats()
{
    py::class_< UOnlineStats,  UObject   >("UOnlineStats")
        .def_readwrite("ViewIdMappings", &UOnlineStats::ViewIdMappings)
        .def("StaticClass", &UOnlineStats::StaticClass, py::return_value_policy::reference)
        .def("GetViewName", &UOnlineStats::GetViewName)
        .def("GetViewId", &UOnlineStats::GetViewId)
        .staticmethod("StaticClass")
  ;
}