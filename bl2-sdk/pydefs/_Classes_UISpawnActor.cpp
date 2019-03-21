#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UISpawnActor()
{
    class_< UISpawnActor, bases< UInterface >  , boost::noncopyable>("UISpawnActor", no_init)
        .def("StaticClass", &UISpawnActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetSpawnOwner", &UISpawnActor::GetSpawnOwner, return_value_policy< reference_existing_object >())
        .def("SpawnForMap", &UISpawnActor::SpawnForMap, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}