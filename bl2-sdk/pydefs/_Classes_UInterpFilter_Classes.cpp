#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpFilter_Classes()
{
    class_< UInterpFilter_Classes, bases< UObject >  , boost::noncopyable>("UInterpFilter_Classes", no_init)
        .def_readwrite("Caption", &UInterpFilter::Caption)
        .def("StaticClass", &UInterpFilter_Classes::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}