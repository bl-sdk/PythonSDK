#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMapInfo(py::object m)
{
    py::class_< UMapInfo,  UObject   >(m, "UMapInfo")
        .def("StaticClass", &UMapInfo::StaticClass, py::return_value_policy::reference)
          ;
}