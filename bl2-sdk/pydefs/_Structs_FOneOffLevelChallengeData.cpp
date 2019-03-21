#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOneOffLevelChallengeData()
{
    class_< FOneOffLevelChallengeData >("FOneOffLevelChallengeData", no_init)
        .def_readwrite("PackageId", &FOneOffLevelChallengeData::PackageId)
        .def_readwrite("ContentId", &FOneOffLevelChallengeData::ContentId)
        .def_readwrite("Completion", &FOneOffLevelChallengeData::Completion)
  ;
}