#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UScreenSpaceManager()
{
    class_< UScreenSpaceManager, bases< UObject >  , boost::noncopyable>("UScreenSpaceManager", no_init)
        .def_readwrite("pLocalPlayer", &UScreenSpaceManager::pLocalPlayer)
        .def_readwrite("ViewWidth", &UScreenSpaceManager::ViewWidth)
        .def_readwrite("ViewHeight", &UScreenSpaceManager::ViewHeight)
        .def_readonly("UnknownData00", &UScreenSpaceManager::UnknownData00)
        .def_readwrite("ViewProjectionMatrix", &UScreenSpaceManager::ViewProjectionMatrix)
        .def("StaticClass", &UScreenSpaceManager::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}