#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_MoveElevator()
{
    py::class_< UWillowSeqAct_MoveElevator,  USequenceAction   >("UWillowSeqAct_MoveElevator")
        .def_readwrite("Elevator", &UWillowSeqAct_MoveElevator::Elevator)
        .def_readwrite("Usage", &UWillowSeqAct_MoveElevator::Usage)
        .def_readwrite("CallFloor", &UWillowSeqAct_MoveElevator::CallFloor)
        .def("StaticClass", &UWillowSeqAct_MoveElevator::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}