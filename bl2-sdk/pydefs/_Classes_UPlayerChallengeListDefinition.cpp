#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerChallengeListDefinition(py::module &m)
{
    py::class_< UPlayerChallengeListDefinition,  UGBXDefinition   >(m, "UPlayerChallengeListDefinition")
        .def_readwrite("PlayerChallenges", &UPlayerChallengeListDefinition::PlayerChallenges)
          ;
}