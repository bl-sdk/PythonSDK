#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FStaggeredRecoveryRotationData(py::object m)
{
    py::class_< FStaggeredRecoveryRotationData >(m, "FStaggeredRecoveryRotationData")
        .def_readwrite("BoneName", &FStaggeredRecoveryRotationData::BoneName)
        .def_readwrite("BoneAxis", &FStaggeredRecoveryRotationData::BoneAxis)
  ;
}