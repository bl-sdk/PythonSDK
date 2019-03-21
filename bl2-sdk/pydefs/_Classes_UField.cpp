#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UField()
{
    class_< UField, bases< UObject >  , boost::noncopyable>("UField", no_init)
        .def_readwrite("Next", &UField::Next)
        .def("StaticClass", &UField::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}