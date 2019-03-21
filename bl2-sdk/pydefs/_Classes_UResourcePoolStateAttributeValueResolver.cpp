#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UResourcePoolStateAttributeValueResolver()
{
    py::class_< UResourcePoolStateAttributeValueResolver,  UAttributeValueResolver   >("UResourcePoolStateAttributeValueResolver")
        .def_readwrite("PoolState", &UResourcePoolStateAttributeValueResolver::PoolState)
        .def("StaticClass", &UResourcePoolStateAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}