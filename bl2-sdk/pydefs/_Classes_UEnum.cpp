#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UEnum()
{
    class_< UEnum, bases< UField >  , boost::noncopyable>("UEnum", no_init)
        .def_readonly("UnknownData00", &UEnum::UnknownData00)
        .def("StaticClass", &UEnum::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}