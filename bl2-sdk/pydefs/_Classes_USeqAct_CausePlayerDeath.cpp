#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_CausePlayerDeath()
{
    py::class_< USeqAct_CausePlayerDeath,  USequenceAction   >("USeqAct_CausePlayerDeath")
        .def("StaticClass", &USeqAct_CausePlayerDeath::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}