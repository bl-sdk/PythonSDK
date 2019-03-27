#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ControlMovieTexture(py::module &m)
{
    py::class_< USeqAct_ControlMovieTexture,  USequenceAction   >(m, "USeqAct_ControlMovieTexture")
		.def_static("StaticClass", &USeqAct_ControlMovieTexture::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MovieTexture", &USeqAct_ControlMovieTexture::MovieTexture)
        .def("eventActivated", &USeqAct_ControlMovieTexture::eventActivated)
          ;
}