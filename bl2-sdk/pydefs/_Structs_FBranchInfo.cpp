#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBranchInfo(py::module &m)
{
    py::class_< FBranchInfo >(m, "FBranchInfo")
        .def_readwrite("BoneName", &FBranchInfo::BoneName)
        .def_readwrite("PerBoneWeightIncrease", &FBranchInfo::PerBoneWeightIncrease)
  ;
}