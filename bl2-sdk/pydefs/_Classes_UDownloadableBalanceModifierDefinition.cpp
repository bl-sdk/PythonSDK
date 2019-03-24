#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadableBalanceModifierDefinition(py::module &m)
{
    py::class_< UDownloadableBalanceModifierDefinition,  UDownloadableContentDefinition   >(m, "UDownloadableBalanceModifierDefinition")
		.def_static("StaticClass", &UDownloadableBalanceModifierDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BalanceModifier", &UDownloadableBalanceModifierDefinition::BalanceModifier)
        .def_readwrite("LevelCapIncrease", &UDownloadableBalanceModifierDefinition::LevelCapIncrease)
        .def_readwrite("ChallengeList", &UDownloadableBalanceModifierDefinition::ChallengeList)
          ;
}