#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_Delay(py::module &m)
{
    py::class_< USeqAct_Delay,  USeqAct_Latent   >(m, "USeqAct_Delay")
        .def_readwrite("DefaultDuration", &USeqAct_Delay::DefaultDuration)
        .def_readwrite("Duration", &USeqAct_Delay::Duration)
        .def_readwrite("LastUpdateTime", &USeqAct_Delay::LastUpdateTime)
        .def_readwrite("RemainingTime", &USeqAct_Delay::RemainingTime)
        .def("StaticClass", &USeqAct_Delay::StaticClass, py::return_value_policy::reference)
        .def("ResetDelayActive", &USeqAct_Delay::ResetDelayActive)
        .def("Reset", &USeqAct_Delay::Reset)
          ;
}