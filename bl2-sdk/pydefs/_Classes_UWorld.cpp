#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWorld()
{
    class_< UWorld, bases< UObject >  , boost::noncopyable>("UWorld", no_init)
        .def_readonly("UnknownData00", &UWorld::UnknownData00)
        .def("StaticClass", &UWorld::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}