#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkillTreeDefinition(py::module &m)
{
    py::class_< USkillTreeDefinition,  UGBXDefinition   >(m, "USkillTreeDefinition")
        .def_readwrite("VfTable_IIConstructObject", &USkillTreeDefinition::VfTable_IIConstructObject)
        .def_readwrite("Root", &USkillTreeDefinition::Root)
          ;
}