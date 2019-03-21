#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterface()
{
    class_< UInterface, bases< UObject >  , boost::noncopyable>("UInterface", no_init)
        .def("StaticClass", &UInterface::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}