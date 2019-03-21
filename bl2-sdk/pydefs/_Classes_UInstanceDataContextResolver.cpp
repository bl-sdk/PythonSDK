#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInstanceDataContextResolver()
{
    py::class_< UInstanceDataContextResolver,  UAttributeContextResolver   >("UInstanceDataContextResolver")
        .def_readwrite("InstanceDataName", &UInstanceDataContextResolver::InstanceDataName)
        .def("StaticClass", &UInstanceDataContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UInstanceDataContextResolver::GetAttributeContext, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}