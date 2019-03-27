#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedSpecialMoveData(py::module &m)
{
    py::class_< FReplicatedSpecialMoveData >(m, "FReplicatedSpecialMoveData")
        .def_readwrite("Data", &FReplicatedSpecialMoveData::Data)
        .def_readwrite("PlayRateScale", &FReplicatedSpecialMoveData::PlayRateScale)
        .def_readwrite("Duration", &FReplicatedSpecialMoveData::Duration)
        .def_readwrite("DirtyCounter", &FReplicatedSpecialMoveData::DirtyCounter)
        .def_readwrite("SMD", &FReplicatedSpecialMoveData::SMD)
  ;
}