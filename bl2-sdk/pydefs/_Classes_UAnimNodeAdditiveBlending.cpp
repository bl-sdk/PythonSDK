#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeAdditiveBlending(py::object m)
{
    py::class_< UAnimNodeAdditiveBlending,  UAnimNodeBlendBase   >(m, "UAnimNodeAdditiveBlending")
        .def_readwrite("Child2Weight", &UAnimNodeBlend::Child2Weight)
        .def_readwrite("Child2WeightTarget", &UAnimNodeBlend::Child2WeightTarget)
        .def_readwrite("BlendTimeToGo", &UAnimNodeBlend::BlendTimeToGo)
        .def("StaticClass", &UAnimNodeAdditiveBlending::StaticClass, py::return_value_policy::reference)
        .def("SetBlendTarget", &UAnimNodeAdditiveBlending::SetBlendTarget)
          ;
}