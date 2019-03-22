#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ControlMovieTexture(py::module &m)
{
    py::class_< USeqAct_ControlMovieTexture,  USequenceAction   >(m, "USeqAct_ControlMovieTexture")
        .def_readwrite("MovieTexture", &USeqAct_ControlMovieTexture::MovieTexture)
        .def("eventActivated", &USeqAct_ControlMovieTexture::eventActivated)
          ;
}