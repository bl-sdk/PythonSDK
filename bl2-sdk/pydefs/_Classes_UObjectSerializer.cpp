#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UObjectSerializer()
{
    class_< UObjectSerializer, bases< UObject >  , boost::noncopyable>("UObjectSerializer", no_init)
        .def_readonly("UnknownData00", &UObjectSerializer::UnknownData00)
        .def("StaticClass", &UObjectSerializer::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}