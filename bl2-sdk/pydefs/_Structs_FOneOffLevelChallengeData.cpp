#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOneOffLevelChallengeData()
{
    py::class_< FOneOffLevelChallengeData >("FOneOffLevelChallengeData")
        .def_readwrite("PackageId", &FOneOffLevelChallengeData::PackageId)
        .def_readwrite("ContentId", &FOneOffLevelChallengeData::ContentId)
        .def_readwrite("Completion", &FOneOffLevelChallengeData::Completion)
  ;
}