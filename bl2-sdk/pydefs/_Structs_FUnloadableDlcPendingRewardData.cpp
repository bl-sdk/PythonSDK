#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUnloadableDlcPendingRewardData(py::module &m)
{
    py::class_< FUnloadableDlcPendingRewardData >(m, "FUnloadableDlcPendingRewardData")
        .def_readwrite("MissionDefName", &FUnloadableDlcPendingRewardData::MissionDefName)
        .def_readwrite("DlcPackageId", &FUnloadableDlcPendingRewardData::DlcPackageId)
  ;
}