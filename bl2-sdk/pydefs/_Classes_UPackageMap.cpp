#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPackageMap(py::module &m)
{
    py::class_< UPackageMap,  UObject   >(m, "UPackageMap")
		.def_static("StaticClass", &UPackageMap::StaticClass, py::return_value_policy::reference)
          ;
}