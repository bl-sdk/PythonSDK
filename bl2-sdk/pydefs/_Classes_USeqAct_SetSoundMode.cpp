#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetSoundMode(py::module &m)
{
    py::class_< USeqAct_SetSoundMode,  USequenceAction   >(m, "USeqAct_SetSoundMode")
        .def_readwrite("SoundMode", &USeqAct_SetSoundMode::SoundMode)
        .def("eventGetObjClassVersion", &USeqAct_SetSoundMode::eventGetObjClassVersion)
        .def("eventActivated", &USeqAct_SetSoundMode::eventActivated)
          ;
}