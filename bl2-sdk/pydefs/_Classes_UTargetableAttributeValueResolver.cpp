#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetableAttributeValueResolver(py::module &m)
{
    py::class_< UTargetableAttributeValueResolver,  UAttributeValueResolver   >(m, "UTargetableAttributeValueResolver")
        .def_readwrite("ValueToResolve", &UTargetableAttributeValueResolver::ValueToResolve)
          ;
}