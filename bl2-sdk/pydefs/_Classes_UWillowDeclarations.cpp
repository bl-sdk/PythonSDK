#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDeclarations()
{
    class_< UWillowDeclarations, bases< UObject >  , boost::noncopyable>("UWillowDeclarations", no_init)
        .def("StaticClass", &UWillowDeclarations::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}