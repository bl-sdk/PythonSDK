#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_StartAkAmbientSound(py::object m)
{
    py::class_< UBehavior_StartAkAmbientSound,  UBehaviorBase   >(m, "UBehavior_StartAkAmbientSound")
        .def_readwrite("AkEvent", &UBehavior_StartAkAmbientSound::AkEvent)
        .def_readwrite("SoundGroup", &UBehavior_StartAkAmbientSound::SoundGroup)
        .def("StaticClass", &UBehavior_StartAkAmbientSound::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_StartAkAmbientSound::ApplyBehaviorToContext)
          ;
}