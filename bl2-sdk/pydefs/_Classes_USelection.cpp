#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USelection()
{
    class_< USelection, bases< UObject >  , boost::noncopyable>("USelection", no_init)
        .def_readonly("UnknownData00", &USelection::UnknownData00)
        .def("StaticClass", &USelection::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}