#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPackageMapSeekFree()
{
    py::class_< UPackageMapSeekFree,  UPackageMap   >("UPackageMapSeekFree")
        .def_readonly("UnknownData00", &UPackageMapLevel::UnknownData00)
        .def("StaticClass", &UPackageMapSeekFree::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}