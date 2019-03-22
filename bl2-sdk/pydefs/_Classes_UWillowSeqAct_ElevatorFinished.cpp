#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ElevatorFinished(py::module &m)
{
    py::class_< UWillowSeqAct_ElevatorFinished,  USequenceAction   >(m, "UWillowSeqAct_ElevatorFinished")
        .def_readwrite("Elevator", &UWillowSeqAct_ElevatorFinished::Elevator)
          ;
}