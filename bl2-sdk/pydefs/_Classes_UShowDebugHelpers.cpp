#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UShowDebugHelpers()
{
    class_< UShowDebugHelpers, bases< UObject >  , boost::noncopyable>("UShowDebugHelpers", no_init)
        .def("StaticClass", &UShowDebugHelpers::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}