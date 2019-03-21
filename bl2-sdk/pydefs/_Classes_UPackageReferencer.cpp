#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPackageReferencer()
{
    py::class_< UPackageReferencer,  UObject   >("UPackageReferencer")
        .def_readwrite("PackageNames", &UPackageReferencer::PackageNames)
        .def("StaticClass", &UPackageReferencer::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}