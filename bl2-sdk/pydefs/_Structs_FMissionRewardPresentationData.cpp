#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMissionRewardPresentationData()
{
    class_< FMissionRewardPresentationData >("FMissionRewardPresentationData", no_init)
        .def_readwrite("PresentationDefinition", &FMissionRewardPresentationData::PresentationDefinition)
        .def_readwrite("Rarity", &FMissionRewardPresentationData::Rarity)
  ;
}