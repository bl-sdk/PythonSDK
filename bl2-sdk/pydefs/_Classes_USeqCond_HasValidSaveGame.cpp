#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_HasValidSaveGame(py::object m)
{
    py::class_< USeqCond_HasValidSaveGame,  USequenceCondition   >(m, "USeqCond_HasValidSaveGame")
        .def("StaticClass", &USeqCond_HasValidSaveGame::StaticClass, py::return_value_policy::reference)
          ;
}