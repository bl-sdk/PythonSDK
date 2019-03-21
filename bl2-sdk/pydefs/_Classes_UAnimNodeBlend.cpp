#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeBlend(py::object m)
{
    py::class_< UAnimNodeBlend,  UAnimNodeBlendBase   >(m, "UAnimNodeBlend")
        .def_readwrite("Child2Weight", &UAnimNodeBlend::Child2Weight)
        .def_readwrite("Child2WeightTarget", &UAnimNodeBlend::Child2WeightTarget)
        .def_readwrite("BlendTimeToGo", &UAnimNodeBlend::BlendTimeToGo)
        .def("StaticClass", &UAnimNodeBlend::StaticClass, py::return_value_policy::reference)
        .def("SetBlendTarget", &UAnimNodeBlend::SetBlendTarget)
          ;
}