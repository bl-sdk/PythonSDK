#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_PlayBinkMovie()
{
    py::class_< USeqAct_PlayBinkMovie,  USeqAct_Latent   >("USeqAct_PlayBinkMovie")
        .def_readwrite("BinkMovieName", &USeqAct_PlayBinkMovie::BinkMovieName)
        .def("StaticClass", &USeqAct_PlayBinkMovie::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}