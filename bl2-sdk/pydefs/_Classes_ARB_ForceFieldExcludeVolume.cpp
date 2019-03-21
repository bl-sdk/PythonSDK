#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ARB_ForceFieldExcludeVolume()
{
    class_< ARB_ForceFieldExcludeVolume, bases< AVolume >  , boost::noncopyable>("ARB_ForceFieldExcludeVolume", no_init)
        .def_readwrite("ForceFieldChannel", &ARB_ForceFieldExcludeVolume::ForceFieldChannel)
        .def("StaticClass", &ARB_ForceFieldExcludeVolume::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}