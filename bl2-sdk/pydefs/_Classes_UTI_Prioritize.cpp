#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTI_Prioritize()
{
    class_< UTI_Prioritize, bases< UTargetIterator >  , boost::noncopyable>("UTI_Prioritize", no_init)
        .def_readwrite("Weight", &UTI_Prioritize::Weight)
        .def("StaticClass", &UTI_Prioritize::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}