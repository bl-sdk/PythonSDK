#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ExitVehicle()
{
    class_< UWillowSeqAct_ExitVehicle, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ExitVehicle", no_init)
        .def_readwrite("SeatsToForceExitOn", &UWillowSeqAct_ExitVehicle::SeatsToForceExitOn)
        .def("StaticClass", &UWillowSeqAct_ExitVehicle::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}