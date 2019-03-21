#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AMassiveLODOverrideVolume()
{
    class_< AMassiveLODOverrideVolume, bases< AVolume >  , boost::noncopyable>("AMassiveLODOverrideVolume", no_init)
        .def("StaticClass", &AMassiveLODOverrideVolume::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}