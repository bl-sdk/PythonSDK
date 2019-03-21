#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerClassAttributeValueResolver()
{
    py::class_< UPlayerClassAttributeValueResolver,  UAttributeValueResolver   >("UPlayerClassAttributeValueResolver")
        .def_readwrite("PlayerClassId", &UPlayerClassAttributeValueResolver::PlayerClassId)
        .def("StaticClass", &UPlayerClassAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}