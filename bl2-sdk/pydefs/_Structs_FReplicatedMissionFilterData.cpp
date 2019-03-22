#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedMissionFilterData(py::module &m)
{
    py::class_< FReplicatedMissionFilterData >(m, "FReplicatedMissionFilterData")
        .def_readwrite("Mission", &FReplicatedMissionFilterData::Mission)
  ;
}