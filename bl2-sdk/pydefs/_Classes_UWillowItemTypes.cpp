#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowItemTypes()
{
    class_< UWillowItemTypes, bases< UObject >  , boost::noncopyable>("UWillowItemTypes", no_init)
        .def("StaticClass", &UWillowItemTypes::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}