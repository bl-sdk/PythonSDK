#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPackageReferencer(py::module &m)
{
    py::class_< UPackageReferencer,  UObject   >(m, "UPackageReferencer")
		.def_static("StaticClass", &UPackageReferencer::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PackageNames", &UPackageReferencer::PackageNames)
          ;
}