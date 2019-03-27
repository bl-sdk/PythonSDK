#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerReplicationInfoAttributeContextResolver(py::module &m)
{
    py::class_< UPlayerReplicationInfoAttributeContextResolver,  UAttributeContextResolver   >(m, "UPlayerReplicationInfoAttributeContextResolver")
		.def_static("StaticClass", &UPlayerReplicationInfoAttributeContextResolver::StaticClass, py::return_value_policy::reference)
          ;
}