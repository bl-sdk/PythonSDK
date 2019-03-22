#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UISoundBehavior(py::module &m)
{
    py::class_< UISoundBehavior,  UInterface   >(m, "UISoundBehavior")
        .def("Behavior_PostAkEvent", &UISoundBehavior::Behavior_PostAkEvent)
        .def("Behavior_PlaySoundForListener", &UISoundBehavior::Behavior_PlaySoundForListener)
        .def("Behavior_StopSound", &UISoundBehavior::Behavior_StopSound)
        .def("Behavior_PlaySound", &UISoundBehavior::Behavior_PlaySound)
          ;
}