#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUISoundTheme(py::module &m)
{
    py::class_< UUISoundTheme,  UObject   >(m, "UUISoundTheme")
		.def_static("StaticClass", &UUISoundTheme::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SoundEventBindings", &UUISoundTheme::SoundEventBindings)
        .def("eventProcessSoundEvent", &UUISoundTheme::eventProcessSoundEvent)
          ;
}