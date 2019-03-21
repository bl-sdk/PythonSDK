#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_DisableCombatMusicLogic()
{
    py::class_< UWillowSeqAct_DisableCombatMusicLogic,  USequenceAction   >("UWillowSeqAct_DisableCombatMusicLogic")
        .def("StaticClass", &UWillowSeqAct_DisableCombatMusicLogic::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}