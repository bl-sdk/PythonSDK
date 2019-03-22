#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_DisableCombatMusicLogic(py::module &m)
{
    py::class_< UWillowSeqAct_DisableCombatMusicLogic,  USequenceAction   >(m, "UWillowSeqAct_DisableCombatMusicLogic")
          ;
}