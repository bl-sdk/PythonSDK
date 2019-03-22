#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOneOffLevelChallengeData(py::module &m)
{
    py::class_< FOneOffLevelChallengeData >(m, "FOneOffLevelChallengeData")
        .def_readwrite("PackageId", &FOneOffLevelChallengeData::PackageId)
        .def_readwrite("ContentId", &FOneOffLevelChallengeData::ContentId)
        .def_readwrite("Completion", &FOneOffLevelChallengeData::Completion)
  ;
}