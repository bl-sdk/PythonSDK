#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetChallengeCompleted(py::module &m)
{
    py::class_< USeqAct_SetChallengeCompleted,  USequenceAction   >(m, "USeqAct_SetChallengeCompleted")
        .def_readwrite("ChallengeDef", &USeqAct_SetChallengeCompleted::ChallengeDef)
        .def("StaticClass", &USeqAct_SetChallengeCompleted::StaticClass, py::return_value_policy::reference)
          ;
}