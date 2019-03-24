#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_PlayBinkMovie(py::module &m)
{
    py::class_< USeqAct_PlayBinkMovie,  USeqAct_Latent   >(m, "USeqAct_PlayBinkMovie")
		.def_static("StaticClass", &USeqAct_PlayBinkMovie::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BinkMovieName", &USeqAct_PlayBinkMovie::BinkMovieName)
          ;
}