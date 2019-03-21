#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_EnableCombatMusicLogic()
{
    py::class_< UWillowSeqAct_EnableCombatMusicLogic,  USequenceAction   >("UWillowSeqAct_EnableCombatMusicLogic")
        .def("StaticClass", &UWillowSeqAct_EnableCombatMusicLogic::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}