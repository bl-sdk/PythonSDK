#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNounAttributeValueResolver(py::module &m)
{
    py::class_< UNounAttributeValueResolver,  UAttributeValueResolver   >(m, "UNounAttributeValueResolver")
        .def_readwrite("ReplicationStrategy", &UNounAttributeValueResolver::ReplicationStrategy)
        .def_readwrite("DefaultValue", &UNounAttributeValueResolver::DefaultValue)
        .def("StaticClass", &UNounAttributeValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}