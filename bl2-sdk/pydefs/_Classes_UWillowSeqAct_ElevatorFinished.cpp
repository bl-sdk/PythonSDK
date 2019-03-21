#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ElevatorFinished()
{
    class_< UWillowSeqAct_ElevatorFinished, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ElevatorFinished", no_init)
        .def_readwrite("Elevator", &UWillowSeqAct_ElevatorFinished::Elevator)
        .def("StaticClass", &UWillowSeqAct_ElevatorFinished::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}