#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomPropertyItemHandler()
{
    class_< UCustomPropertyItemHandler, bases< UInterface >  , boost::noncopyable>("UCustomPropertyItemHandler", no_init)
        .def("StaticClass", &UCustomPropertyItemHandler::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}