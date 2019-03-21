#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPackage()
{
    py::class_< UPackage,  UObject   >("UPackage")
        .def_readonly("UnknownData00", &UPackage::UnknownData00)
        .def("StaticClass", &UPackage::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}