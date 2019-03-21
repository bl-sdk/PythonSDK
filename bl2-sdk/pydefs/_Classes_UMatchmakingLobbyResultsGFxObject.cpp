#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMatchmakingLobbyResultsGFxObject()
{
    class_< UMatchmakingLobbyResultsGFxObject, bases< UGFxObject >  , boost::noncopyable>("UMatchmakingLobbyResultsGFxObject", no_init)
        .def("StaticClass", &UMatchmakingLobbyResultsGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("UpdateResult", &UMatchmakingLobbyResultsGFxObject::UpdateResult)
        .staticmethod("StaticClass")
  ;
}