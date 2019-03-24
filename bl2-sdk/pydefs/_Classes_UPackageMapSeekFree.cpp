#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPackageMapSeekFree(py::module &m)
{
    py::class_< UPackageMapSeekFree,  UPackageMap   >(m, "UPackageMapSeekFree")
		.def_static("StaticClass", &UPackageMapSeekFree::StaticClass, py::return_value_policy::reference)
          ;
}