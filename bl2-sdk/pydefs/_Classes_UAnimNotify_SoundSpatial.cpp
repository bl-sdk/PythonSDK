#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_SoundSpatial(py::module &m)
{
    py::class_< UAnimNotify_SoundSpatial,  UAnimNotify   >(m, "UAnimNotify_SoundSpatial")
		.def_static("StaticClass", &UAnimNotify_SoundSpatial::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SoundCueFirstPerson", &UAnimNotify_SoundSpatial::SoundCueFirstPerson)
        .def_readwrite("SoundCueThirdPerson", &UAnimNotify_SoundSpatial::SoundCueThirdPerson)
        .def_readwrite("BoneName", &UAnimNotify_SoundSpatial::BoneName)
          ;
}