#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpFilter_Custom()
{
    class_< UInterpFilter_Custom, bases< UInterpFilter >  , boost::noncopyable>("UInterpFilter_Custom", no_init)
        .def("StaticClass", &UInterpFilter_Custom::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}