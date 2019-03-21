#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USoundClass()
{
    class_< USoundClass, bases< UObject >  , boost::noncopyable>("USoundClass", no_init)
        .def_readwrite("Properties", &USoundClass::Properties)
        .def_readwrite("ChildClassNames", &USoundClass::ChildClassNames)
        .def_readonly("UnknownData00", &USoundClass::UnknownData00)
        .def("StaticClass", &USoundClass::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}