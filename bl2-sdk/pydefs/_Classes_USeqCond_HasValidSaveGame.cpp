#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_HasValidSaveGame(py::module &m)
{
    py::class_< USeqCond_HasValidSaveGame,  USequenceCondition   >(m, "USeqCond_HasValidSaveGame")
		.def_static("StaticClass", &USeqCond_HasValidSaveGame::StaticClass, py::return_value_policy::reference)
          ;
}