#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UResourcePoolStateAttributeValueResolver(py::module &m)
{
    py::class_< UResourcePoolStateAttributeValueResolver,  UAttributeValueResolver   >(m, "UResourcePoolStateAttributeValueResolver")
        .def_readwrite("PoolState", &UResourcePoolStateAttributeValueResolver::PoolState)
        .def("StaticClass", &UResourcePoolStateAttributeValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}