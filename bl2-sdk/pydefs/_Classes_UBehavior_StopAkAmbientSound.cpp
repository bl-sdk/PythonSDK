#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_StopAkAmbientSound(py::module &m)
{
    py::class_< UBehavior_StopAkAmbientSound,  UBehaviorBase   >(m, "UBehavior_StopAkAmbientSound")
        .def_readwrite("AkEvent", &UBehavior_StopAkAmbientSound::AkEvent)
        .def_readwrite("SoundGroup", &UBehavior_StopAkAmbientSound::SoundGroup)
        .def("StaticClass", &UBehavior_StopAkAmbientSound::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_StopAkAmbientSound::ApplyBehaviorToContext)
          ;
}