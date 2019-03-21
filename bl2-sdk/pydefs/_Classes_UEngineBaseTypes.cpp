#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UEngineBaseTypes()
{
    class_< UEngineBaseTypes, bases< UObject >  , boost::noncopyable>("UEngineBaseTypes", no_init)
        .def("StaticClass", &UEngineBaseTypes::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}