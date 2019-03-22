#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStateRuleSet(py::module &m)
{
    py::class_< UStateRuleSet,  URuleSet   >(m, "UStateRuleSet")
        .def_readwrite("StateRules", &UStateRuleSet::StateRules)
        .def_readwrite("StateAttributeMap", &UStateRuleSet::StateAttributeMap)
          ;
}