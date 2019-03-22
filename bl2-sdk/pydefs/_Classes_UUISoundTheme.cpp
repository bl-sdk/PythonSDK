#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUISoundTheme(py::module &m)
{
    py::class_< UUISoundTheme,  UObject   >(m, "UUISoundTheme")
        .def_readwrite("SoundEventBindings", &UUISoundTheme::SoundEventBindings)
        .def("StaticClass", &UUISoundTheme::StaticClass, py::return_value_policy::reference)
        .def("eventProcessSoundEvent", &UUISoundTheme::eventProcessSoundEvent)
          ;
}