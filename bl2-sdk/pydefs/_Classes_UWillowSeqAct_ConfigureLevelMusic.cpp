#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ConfigureLevelMusic(py::module &m)
{
    py::class_< UWillowSeqAct_ConfigureLevelMusic,  USequenceAction   >(m, "UWillowSeqAct_ConfigureLevelMusic")
        .def_readwrite("MusicStartAkEvent", &UWillowSeqAct_ConfigureLevelMusic::MusicStartAkEvent)
        .def_readwrite("MusicStopAkEvent", &UWillowSeqAct_ConfigureLevelMusic::MusicStopAkEvent)
        .def_readwrite("AmbientAkState", &UWillowSeqAct_ConfigureLevelMusic::AmbientAkState)
        .def_readwrite("CombatAkState", &UWillowSeqAct_ConfigureLevelMusic::CombatAkState)
        .def("StaticClass", &UWillowSeqAct_ConfigureLevelMusic::StaticClass, py::return_value_policy::reference)
          ;
}