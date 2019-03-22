#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ConfigureCustomAmbientMusic(py::module &m)
{
    py::class_< UWillowSeqAct_ConfigureCustomAmbientMusic,  USequenceAction   >(m, "UWillowSeqAct_ConfigureCustomAmbientMusic")
        .def_readwrite("AmbientMusicAkState", &UWillowSeqAct_ConfigureCustomAmbientMusic::AmbientMusicAkState)
          ;
}