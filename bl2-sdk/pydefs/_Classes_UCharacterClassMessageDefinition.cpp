#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCharacterClassMessageDefinition(py::module &m)
{
    py::class_< UCharacterClassMessageDefinition,  UGBXDefinition   >(m, "UCharacterClassMessageDefinition")
        .def_readwrite("BehaviorTriggers", &UCharacterClassMessageDefinition::BehaviorTriggers)
          ;
}