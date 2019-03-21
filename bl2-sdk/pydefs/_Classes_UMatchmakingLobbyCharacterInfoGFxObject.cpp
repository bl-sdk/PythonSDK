#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMatchmakingLobbyCharacterInfoGFxObject()
{
    class_< UMatchmakingLobbyCharacterInfoGFxObject, bases< UGFxObject >  , boost::noncopyable>("UMatchmakingLobbyCharacterInfoGFxObject", no_init)
        .def("StaticClass", &UMatchmakingLobbyCharacterInfoGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetInfo", &UMatchmakingLobbyCharacterInfoGFxObject::SetInfo)
        .staticmethod("StaticClass")
  ;
}