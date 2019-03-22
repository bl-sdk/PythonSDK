#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehaviorAliasDefinition(py::module &m)
{
    py::class_< UBehaviorAliasDefinition,  UGBXDefinition   >(m, "UBehaviorAliasDefinition")
        .def_readwrite("FallbackBehaviors", &UBehaviorAliasDefinition::FallbackBehaviors)
          ;
}