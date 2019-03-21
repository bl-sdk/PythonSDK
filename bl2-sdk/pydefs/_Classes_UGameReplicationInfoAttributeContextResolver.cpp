#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameReplicationInfoAttributeContextResolver()
{
    py::class_< UGameReplicationInfoAttributeContextResolver,  UAttributeContextResolver   >("UGameReplicationInfoAttributeContextResolver")
        .def("StaticClass", &UGameReplicationInfoAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UGameReplicationInfoAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}