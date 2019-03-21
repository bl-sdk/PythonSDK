#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_DiscoverLevelChallengeObject()
{
    py::class_< USeqAct_DiscoverLevelChallengeObject,  USequenceAction   >("USeqAct_DiscoverLevelChallengeObject")
        .def_readwrite("LevelChallengeObject", &USeqAct_DiscoverLevelChallengeObject::LevelChallengeObject)
        .def("StaticClass", &USeqAct_DiscoverLevelChallengeObject::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}