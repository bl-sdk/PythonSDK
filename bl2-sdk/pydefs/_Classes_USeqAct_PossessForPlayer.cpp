#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_PossessForPlayer()
{
    py::class_< USeqAct_PossessForPlayer,  USequenceAction   >("USeqAct_PossessForPlayer")
        .def("StaticClass", &USeqAct_PossessForPlayer::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}