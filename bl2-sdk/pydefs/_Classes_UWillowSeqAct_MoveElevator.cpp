#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_MoveElevator()
{
    class_< UWillowSeqAct_MoveElevator, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_MoveElevator", no_init)
        .def_readwrite("Elevator", &UWillowSeqAct_MoveElevator::Elevator)
        .def_readwrite("Usage", &UWillowSeqAct_MoveElevator::Usage)
        .def_readwrite("CallFloor", &UWillowSeqAct_MoveElevator::CallFloor)
        .def("StaticClass", &UWillowSeqAct_MoveElevator::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}