#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APlayerCollectorGame()
{
    class_< APlayerCollectorGame, bases< AGameInfo >  , boost::noncopyable>("APlayerCollectorGame", no_init)
        .def_readwrite("NumberOfClientsToWaitFor", &APlayerCollectorGame::NumberOfClientsToWaitFor)
        .def_readwrite("URLToLoad", &APlayerCollectorGame::URLToLoad)
        .def("StaticClass", &APlayerCollectorGame::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetSeamlessTravelActorList", &APlayerCollectorGame::eventGetSeamlessTravelActorList)
        .def("eventLogin", &APlayerCollectorGame::eventLogin, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}