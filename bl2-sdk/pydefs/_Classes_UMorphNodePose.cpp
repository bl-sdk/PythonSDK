#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphNodePose(py::module &m)
{
    py::class_< UMorphNodePose,  UMorphNodeBase   >(m, "UMorphNodePose")
        .def_readwrite("Target", &UMorphNodePose::Target)
        .def_readwrite("MorphName", &UMorphNodePose::MorphName)
        .def_readwrite("Weight", &UMorphNodePose::Weight)
        .def("SetMorphTarget", &UMorphNodePose::SetMorphTarget)
          ;
}