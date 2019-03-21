#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryAI()
{
    class_< UActorFactoryAI, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryAI", no_init)
        .def_readwrite("ControllerClass", &UActorFactoryAI::ControllerClass)
        .def_readwrite("PawnClass", &UActorFactoryAI::PawnClass)
        .def_readwrite("PawnName", &UActorFactoryAI::PawnName)
        .def_readwrite("InventoryList", &UActorFactoryAI::InventoryList)
        .def_readwrite("TeamIndex", &UActorFactoryAI::TeamIndex)
        .def("StaticClass", &UActorFactoryAI::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}