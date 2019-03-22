#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_MultiplePlayersInGame(py::module &m)
{
    py::class_< UWillowSeqCond_MultiplePlayersInGame,  USequenceCondition   >(m, "UWillowSeqCond_MultiplePlayersInGame")
        .def("StaticClass", &UWillowSeqCond_MultiplePlayersInGame::StaticClass, py::return_value_policy::reference)
          ;
}