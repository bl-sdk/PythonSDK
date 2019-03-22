#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTimeValueResolver(py::module &m)
{
    py::class_< UTimeValueResolver,  UAttributeValueResolver   >(m, "UTimeValueResolver")
        .def_readwrite("TimeMode", &UTimeValueResolver::TimeMode)
        .def_readwrite("StartTime", &UTimeValueResolver::StartTime)
        .def_readwrite("TotalTime", &UTimeValueResolver::TotalTime)
          ;
}