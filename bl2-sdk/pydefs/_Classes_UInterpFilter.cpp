#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpFilter()
{
    class_< UInterpFilter, bases< UObject >  , boost::noncopyable>("UInterpFilter", no_init)
        .def_readwrite("Caption", &UInterpFilter::Caption)
        .def("StaticClass", &UInterpFilter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}