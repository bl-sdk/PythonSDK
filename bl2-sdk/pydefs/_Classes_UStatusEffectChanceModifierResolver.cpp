#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStatusEffectChanceModifierResolver(py::module &m)
{
    py::class_< UStatusEffectChanceModifierResolver,  UAttributeContextResolver   >(m, "UStatusEffectChanceModifierResolver")
        .def("GetAttributeContext", &UStatusEffectChanceModifierResolver::GetAttributeContext, py::return_value_policy::reference)
          ;
}