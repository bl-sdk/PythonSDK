#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_EnableCombatMusicLogic(py::module &m)
{
    py::class_< UWillowSeqAct_EnableCombatMusicLogic,  USequenceAction   >(m, "UWillowSeqAct_EnableCombatMusicLogic")
		.def_static("StaticClass", &UWillowSeqAct_EnableCombatMusicLogic::StaticClass, py::return_value_policy::reference)
          ;
}