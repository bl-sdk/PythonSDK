#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUnloadableDlcChallengeData()
{
    py::class_< FUnloadableDlcChallengeData >("FUnloadableDlcChallengeData")
        .def_readwrite("ChallengeDefName", &FUnloadableDlcChallengeData::ChallengeDefName)
        .def_readwrite("DlcPackageId", &FUnloadableDlcChallengeData::DlcPackageId)
  ;
}