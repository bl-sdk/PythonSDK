#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphNodeMultiPose()
{
    py::class_< UMorphNodeMultiPose,  UMorphNodeBase   >("UMorphNodeMultiPose")
        .def_readwrite("Targets", &UMorphNodeMultiPose::Targets)
        .def_readwrite("MorphNames", &UMorphNodeMultiPose::MorphNames)
        .def_readwrite("Weights", &UMorphNodeMultiPose::Weights)
        .def("StaticClass", &UMorphNodeMultiPose::StaticClass, py::return_value_policy::reference)
        .def("UpdateMorphTarget", &UMorphNodeMultiPose::UpdateMorphTarget)
        .def("RemoveMorphTarget", &UMorphNodeMultiPose::RemoveMorphTarget)
        .def("AddMorphTarget", &UMorphNodeMultiPose::AddMorphTarget)
        .staticmethod("StaticClass")
  ;
}