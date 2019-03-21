#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIConstructObject()
{
    class_< UIConstructObject, bases< UInterface >  , boost::noncopyable>("UIConstructObject", no_init)
        .def("StaticClass", &UIConstructObject::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}