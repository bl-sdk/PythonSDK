#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_PrimaryPlayerBusyDelay(py::module &m)
{
    py::class_< USeqAct_PrimaryPlayerBusyDelay,  USeqAct_Latent   >(m, "USeqAct_PrimaryPlayerBusyDelay")
		.def_static("StaticClass", &USeqAct_PrimaryPlayerBusyDelay::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PrimaryPlayer", &USeqAct_PrimaryPlayerBusyDelay::PrimaryPlayer)
        .def("eventUpdate", &USeqAct_PrimaryPlayerBusyDelay::eventUpdate)
          ;
}