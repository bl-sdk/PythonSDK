#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIntProperty()
{
    class_< UIntProperty, bases< UProperty >  , boost::noncopyable>("UIntProperty", no_init)
        .def("StaticClass", &UIntProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}