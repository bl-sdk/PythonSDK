#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UConstantAttributeValueResolver()
{
    py::class_< UConstantAttributeValueResolver,  UAttributeValueResolver   >("UConstantAttributeValueResolver")
        .def_readwrite("ConstantValue", &UConstantAttributeValueResolver::ConstantValue)
        .def("StaticClass", &UConstantAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}