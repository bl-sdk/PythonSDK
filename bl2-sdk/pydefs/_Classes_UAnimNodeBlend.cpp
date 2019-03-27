#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeBlend(py::module &m)
{
    py::class_< UAnimNodeBlend,  UAnimNodeBlendBase   >(m, "UAnimNodeBlend")
		.def_static("StaticClass", &UAnimNodeBlend::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Child2Weight", &UAnimNodeBlend::Child2Weight)
        .def_readwrite("Child2WeightTarget", &UAnimNodeBlend::Child2WeightTarget)
        .def_readwrite("BlendTimeToGo", &UAnimNodeBlend::BlendTimeToGo)
        .def("SetBlendTarget", &UAnimNodeBlend::SetBlendTarget)
          ;
}