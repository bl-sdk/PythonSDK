#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPackageMap(py::object m)
{
    py::class_< UPackageMap,  UObject   >(m, "UPackageMap")
        .def("StaticClass", &UPackageMap::StaticClass, py::return_value_policy::reference)
          ;
}