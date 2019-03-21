#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionRewardPresentationData()
{
    py::class_< FMissionRewardPresentationData >("FMissionRewardPresentationData")
        .def_readwrite("PresentationDefinition", &FMissionRewardPresentationData::PresentationDefinition)
        .def_readwrite("Rarity", &FMissionRewardPresentationData::Rarity)
  ;
}