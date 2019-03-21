#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowEmit_BloodSpray()
{
    class_< AWillowEmit_BloodSpray, bases< AWillowEmit_HitEffect >  , boost::noncopyable>("AWillowEmit_BloodSpray", no_init)
        .def("StaticClass", &AWillowEmit_BloodSpray::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}