#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLocationBoneSocketInfo(py::module &m)
{
    py::class_< FLocationBoneSocketInfo >(m, "FLocationBoneSocketInfo")
        .def_readwrite("BoneSocketName", &FLocationBoneSocketInfo::BoneSocketName)
        .def_readwrite("Offset", &FLocationBoneSocketInfo::Offset)
  ;
}