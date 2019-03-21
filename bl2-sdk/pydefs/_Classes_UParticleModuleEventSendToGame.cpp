#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleEventSendToGame()
{
    class_< UParticleModuleEventSendToGame, bases< UObject >  , boost::noncopyable>("UParticleModuleEventSendToGame", no_init)
        .def("StaticClass", &UParticleModuleEventSendToGame::StaticClass, return_value_policy< reference_existing_object >())
        .def("DoEvent", &UParticleModuleEventSendToGame::DoEvent)
        .staticmethod("StaticClass")
  ;
}