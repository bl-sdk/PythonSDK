#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_Rumble(py::module &m)
{
    py::class_< UAnimNotify_Rumble,  UAnimNotify   >(m, "UAnimNotify_Rumble")
		.def_static("StaticClass", &UAnimNotify_Rumble::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PredefinedWaveForm", &UAnimNotify_Rumble::PredefinedWaveForm)
        .def_readwrite("WaveForm", &UAnimNotify_Rumble::WaveForm)
        .def_readwrite("EffectRadius", &UAnimNotify_Rumble::EffectRadius)
          ;
}