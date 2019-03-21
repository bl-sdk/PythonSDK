#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPhysicalMaterialPropertyBase()
{
    py::class_< UPhysicalMaterialPropertyBase,  UObject   >("UPhysicalMaterialPropertyBase")
        .def("StaticClass", &UPhysicalMaterialPropertyBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}