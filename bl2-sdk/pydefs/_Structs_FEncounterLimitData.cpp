#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEncounterLimitData(py::module &m)
{
    py::class_< FEncounterLimitData >(m, "FEncounterLimitData")
        .def_readwrite("ActorTags", &FEncounterLimitData::ActorTags)
        .def_readwrite("MaxTotalToSpawn", &FEncounterLimitData::MaxTotalToSpawn)
        .def_readwrite("MaxActiveAtATime", &FEncounterLimitData::MaxActiveAtATime)
        .def_readwrite("ConstraintType", &FEncounterLimitData::ConstraintType)
        .def_readwrite("LimitState", &FEncounterLimitData::LimitState)
  ;
}