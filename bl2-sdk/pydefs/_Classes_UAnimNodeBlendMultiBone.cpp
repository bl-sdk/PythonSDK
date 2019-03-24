#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendMultiBone(py::module &m)
{
    py::class_< UAnimNodeBlendMultiBone,  UAnimNodeBlendBase   >(m, "UAnimNodeBlendMultiBone")
		.def_static("StaticClass", &UAnimNodeBlendMultiBone::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BlendTargetList", &UAnimNodeBlendMultiBone::BlendTargetList)
        .def_readwrite("SourceRequiredBones", &UAnimNodeBlendMultiBone::SourceRequiredBones)
        .def("SetTargetStartBone", &UAnimNodeBlendMultiBone::SetTargetStartBone)
          ;
}