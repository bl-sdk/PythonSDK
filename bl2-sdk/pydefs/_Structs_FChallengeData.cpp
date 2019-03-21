#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FChallengeData()
{
    py::class_< FChallengeData >("FChallengeData")
        .def_readwrite("PCOwner", &FChallengeData::PCOwner)
        .def_readwrite("ChallengeDefinition", &FChallengeData::ChallengeDefinition)
  ;
}