#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UEngineTypes()
{
    class_< UEngineTypes, bases< UObject >  , boost::noncopyable>("UEngineTypes", no_init)
        .def("StaticClass", &UEngineTypes::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}