#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_LoadingMovie(py::module &m)
{
    py::class_< USeqAct_LoadingMovie,  USequenceAction   >(m, "USeqAct_LoadingMovie")
		.def_static("StaticClass", &USeqAct_LoadingMovie::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MovieName", &USeqAct_LoadingMovie::MovieName)
        .def_readwrite("PauseDuration", &USeqAct_LoadingMovie::PauseDuration)
        .def_readwrite("KeepPlayingDuration", &USeqAct_LoadingMovie::KeepPlayingDuration)
          ;
}