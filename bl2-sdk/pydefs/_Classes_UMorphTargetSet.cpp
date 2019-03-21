#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphTargetSet()
{
    py::class_< UMorphTargetSet,  UObject   >("UMorphTargetSet")
        .def_readwrite("Targets", &UMorphTargetSet::Targets)
        .def_readwrite("BaseSkelMesh", &UMorphTargetSet::BaseSkelMesh)
        .def_readwrite("RawWedgePointIndices", &UMorphTargetSet::RawWedgePointIndices)
        .def("StaticClass", &UMorphTargetSet::StaticClass, py::return_value_policy::reference)
        .def("FindMorphTarget", &UMorphTargetSet::FindMorphTarget, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}