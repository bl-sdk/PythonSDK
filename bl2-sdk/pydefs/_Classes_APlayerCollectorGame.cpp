#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APlayerCollectorGame()
{
    py::class_< APlayerCollectorGame,  AGameInfo   >("APlayerCollectorGame")
        .def_readwrite("NumberOfClientsToWaitFor", &APlayerCollectorGame::NumberOfClientsToWaitFor)
        .def_readwrite("URLToLoad", &APlayerCollectorGame::URLToLoad)
        .def("StaticClass", &APlayerCollectorGame::StaticClass, py::return_value_policy::reference)
        .def("eventGetSeamlessTravelActorList", &APlayerCollectorGame::eventGetSeamlessTravelActorList)
        .def("eventLogin", &APlayerCollectorGame::eventLogin, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}