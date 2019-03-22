#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_Timer(py::module &m)
{
    py::class_< USeqAct_Timer,  USequenceAction   >(m, "USeqAct_Timer")
        .def_readwrite("ActivationTime", &USeqAct_Timer::ActivationTime)
        .def_readwrite("Time", &USeqAct_Timer::Time)
        .def("StaticClass", &USeqAct_Timer::StaticClass, py::return_value_policy::reference)
          ;
}