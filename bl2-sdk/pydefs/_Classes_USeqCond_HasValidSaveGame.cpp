#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_HasValidSaveGame()
{
    py::class_< USeqCond_HasValidSaveGame,  USequenceCondition   >("USeqCond_HasValidSaveGame")
        .def("StaticClass", &USeqCond_HasValidSaveGame::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}