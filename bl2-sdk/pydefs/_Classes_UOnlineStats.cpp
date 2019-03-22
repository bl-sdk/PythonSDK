#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineStats(py::module &m)
{
    py::class_< UOnlineStats,  UObject   >(m, "UOnlineStats")
        .def_readwrite("ViewIdMappings", &UOnlineStats::ViewIdMappings)
        .def("GetViewName", &UOnlineStats::GetViewName)
        .def("GetViewId", &UOnlineStats::GetViewId)
          ;
}