#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UEdCoordSystem()
{
    class_< UEdCoordSystem, bases< UObject >  , boost::noncopyable>("UEdCoordSystem", no_init)
        .def_readonly("UnknownData00", &UEdCoordSystem::UnknownData00)
        .def_readwrite("M", &UEdCoordSystem::M)
        .def_readwrite("Desc", &UEdCoordSystem::Desc)
        .def("StaticClass", &UEdCoordSystem::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}