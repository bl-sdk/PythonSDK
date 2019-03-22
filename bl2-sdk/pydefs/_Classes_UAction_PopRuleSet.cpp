#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_PopRuleSet(py::module &m)
{
    py::class_< UAction_PopRuleSet,  UActionSequencePawn   >(m, "UAction_PopRuleSet")
          ;
}