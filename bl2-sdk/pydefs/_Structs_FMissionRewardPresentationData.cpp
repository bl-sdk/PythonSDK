#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionRewardPresentationData(py::object m)
{
    py::class_< FMissionRewardPresentationData >(m, "FMissionRewardPresentationData")
        .def_readwrite("PresentationDefinition", &FMissionRewardPresentationData::PresentationDefinition)
        .def_readwrite("Rarity", &FMissionRewardPresentationData::Rarity)
  ;
}