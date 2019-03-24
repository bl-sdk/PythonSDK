#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ElevatorFinished(py::module &m)
{
    py::class_< UWillowSeqAct_ElevatorFinished,  USequenceAction   >(m, "UWillowSeqAct_ElevatorFinished")
		.def_static("StaticClass", &UWillowSeqAct_ElevatorFinished::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Elevator", &UWillowSeqAct_ElevatorFinished::Elevator)
          ;
}