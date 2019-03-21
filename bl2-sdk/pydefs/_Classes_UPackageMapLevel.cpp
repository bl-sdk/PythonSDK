#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPackageMapLevel(py::object m)
{
    py::class_< UPackageMapLevel,  UPackageMap   >(m, "UPackageMapLevel")
        .def_readonly("UnknownData00", &UPackageMapLevel::UnknownData00)
        .def("StaticClass", &UPackageMapLevel::StaticClass, py::return_value_policy::reference)
          ;
}