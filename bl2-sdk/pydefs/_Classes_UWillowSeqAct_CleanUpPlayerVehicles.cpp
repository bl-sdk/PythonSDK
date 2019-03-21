#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_CleanUpPlayerVehicles()
{
    class_< UWillowSeqAct_CleanUpPlayerVehicles, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_CleanUpPlayerVehicles", no_init)
        .def("StaticClass", &UWillowSeqAct_CleanUpPlayerVehicles::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &UWillowSeqAct_CleanUpPlayerVehicles::eventActivated)
        .staticmethod("StaticClass")
  ;
}