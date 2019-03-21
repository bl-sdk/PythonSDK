#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxMindAttributeContextResolver(py::object m)
{
    py::class_< UGearboxMindAttributeContextResolver,  UAttributeContextResolver   >(m, "UGearboxMindAttributeContextResolver")
        .def("StaticClass", &UGearboxMindAttributeContextResolver::StaticClass, py::return_value_policy::reference)
          ;
}