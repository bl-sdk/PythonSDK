#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBadassAttributeValueResolver(py::module &m)
{
    py::class_< UBadassAttributeValueResolver,  UAttributeValueResolver   >(m, "UBadassAttributeValueResolver")
        .def_readwrite("AssociatedBadassReward", &UBadassAttributeValueResolver::AssociatedBadassReward)
          ;
}