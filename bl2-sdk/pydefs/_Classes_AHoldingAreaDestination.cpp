#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AHoldingAreaDestination()
{
    class_< AHoldingAreaDestination, bases< AActor >  , boost::noncopyable>("AHoldingAreaDestination", no_init)
        .def_readwrite("ExitPoints", &ATeleporterDestination::ExitPoints)
        .def_readwrite("ExitPointsCounter", &ATeleporterDestination::ExitPointsCounter)
        .def("StaticClass", &AHoldingAreaDestination::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetNextExitPoint", &ATeleporterDestination::GetNextExitPoint, return_value_policy< reference_existing_object >())
        .def("OnToggle", &ATeleporterDestination::OnToggle)
        .staticmethod("StaticClass")
  ;
}