#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphNodePose(py::object m)
{
    py::class_< UMorphNodePose,  UMorphNodeBase   >(m, "UMorphNodePose")
        .def_readwrite("Target", &UMorphNodePose::Target)
        .def_readwrite("MorphName", &UMorphNodePose::MorphName)
        .def_readwrite("Weight", &UMorphNodePose::Weight)
        .def("StaticClass", &UMorphNodePose::StaticClass, py::return_value_policy::reference)
        .def("SetMorphTarget", &UMorphNodePose::SetMorphTarget)
          ;
}