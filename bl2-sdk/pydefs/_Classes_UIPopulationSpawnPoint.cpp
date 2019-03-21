#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIPopulationSpawnPoint()
{
    class_< UIPopulationSpawnPoint, bases< UInterface >  , boost::noncopyable>("UIPopulationSpawnPoint", no_init)
        .def("StaticClass", &UIPopulationSpawnPoint::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetInitialMovementHoldTime", &UIPopulationSpawnPoint::GetInitialMovementHoldTime)
        .def("GetInitialDestination", &UIPopulationSpawnPoint::GetInitialDestination, return_value_policy< reference_existing_object >())
        .def("GetInitialActionType", &UIPopulationSpawnPoint::GetInitialActionType)
        .def("GetSpawnStyleType", &UIPopulationSpawnPoint::GetSpawnStyleType)
        .staticmethod("StaticClass")
  ;
}