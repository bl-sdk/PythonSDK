#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ControlGameMovie()
{
    py::class_< USeqAct_ControlGameMovie,  USeqAct_Latent   >("USeqAct_ControlGameMovie")
        .def_readwrite("MovieName", &USeqAct_ControlGameMovie::MovieName)
        .def_readwrite("StartOfRenderingMovieFrame", &USeqAct_ControlGameMovie::StartOfRenderingMovieFrame)
        .def_readwrite("EndOfRenderingMovieFrame", &USeqAct_ControlGameMovie::EndOfRenderingMovieFrame)
        .def("StaticClass", &USeqAct_ControlGameMovie::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}