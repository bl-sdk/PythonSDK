#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendMultiBone(py::object m)
{
    py::class_< UAnimNodeBlendMultiBone,  UAnimNodeBlendBase   >(m, "UAnimNodeBlendMultiBone")
        .def_readwrite("BlendTargetList", &UAnimNodeBlendMultiBone::BlendTargetList)
        .def_readwrite("SourceRequiredBones", &UAnimNodeBlendMultiBone::SourceRequiredBones)
        .def("StaticClass", &UAnimNodeBlendMultiBone::StaticClass, py::return_value_policy::reference)
        .def("SetTargetStartBone", &UAnimNodeBlendMultiBone::SetTargetStartBone)
          ;
}