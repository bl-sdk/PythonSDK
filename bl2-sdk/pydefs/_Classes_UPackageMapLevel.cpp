#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPackageMapLevel(py::module &m)
{
    py::class_< UPackageMapLevel,  UPackageMap   >(m, "UPackageMapLevel")
        .def("StaticClass", &UPackageMapLevel::StaticClass, py::return_value_policy::reference)
          ;
}