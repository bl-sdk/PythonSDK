#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphNodeMultiPose(py::module &m)
{
    py::class_< UMorphNodeMultiPose,  UMorphNodeBase   >(m, "UMorphNodeMultiPose")
		.def_static("StaticClass", &UMorphNodeMultiPose::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Targets", &UMorphNodeMultiPose::Targets)
        .def_readwrite("MorphNames", &UMorphNodeMultiPose::MorphNames)
        .def_readwrite("Weights", &UMorphNodeMultiPose::Weights)
        .def("UpdateMorphTarget", &UMorphNodeMultiPose::UpdateMorphTarget)
        .def("RemoveMorphTarget", &UMorphNodeMultiPose::RemoveMorphTarget)
        .def("AddMorphTarget", &UMorphNodeMultiPose::AddMorphTarget)
          ;
}