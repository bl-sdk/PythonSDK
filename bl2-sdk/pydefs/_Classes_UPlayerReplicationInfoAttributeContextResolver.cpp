#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerReplicationInfoAttributeContextResolver()
{
    py::class_< UPlayerReplicationInfoAttributeContextResolver,  UAttributeContextResolver   >("UPlayerReplicationInfoAttributeContextResolver")
        .def("StaticClass", &UPlayerReplicationInfoAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}