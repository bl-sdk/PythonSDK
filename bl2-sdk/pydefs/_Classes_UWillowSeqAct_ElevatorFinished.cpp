#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ElevatorFinished(py::object m)
{
    py::class_< UWillowSeqAct_ElevatorFinished,  USequenceAction   >(m, "UWillowSeqAct_ElevatorFinished")
        .def_readwrite("Elevator", &UWillowSeqAct_ElevatorFinished::Elevator)
        .def("StaticClass", &UWillowSeqAct_ElevatorFinished::StaticClass, py::return_value_policy::reference)
          ;
}