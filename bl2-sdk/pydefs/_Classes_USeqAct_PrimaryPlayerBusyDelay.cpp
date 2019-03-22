#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_PrimaryPlayerBusyDelay(py::module &m)
{
    py::class_< USeqAct_PrimaryPlayerBusyDelay,  USeqAct_Latent   >(m, "USeqAct_PrimaryPlayerBusyDelay")
        .def_readwrite("PrimaryPlayer", &USeqAct_PrimaryPlayerBusyDelay::PrimaryPlayer)
        .def("eventUpdate", &USeqAct_PrimaryPlayerBusyDelay::eventUpdate)
          ;
}