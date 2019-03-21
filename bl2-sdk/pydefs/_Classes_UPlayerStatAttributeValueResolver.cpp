#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerStatAttributeValueResolver(py::object m)
{
    py::class_< UPlayerStatAttributeValueResolver,  UAttributeValueResolver   >(m, "UPlayerStatAttributeValueResolver")
        .def_readwrite("StatName", &UPlayerStatAttributeValueResolver::StatName)
        .def("StaticClass", &UPlayerStatAttributeValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}