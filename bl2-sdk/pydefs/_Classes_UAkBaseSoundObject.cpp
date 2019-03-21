#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAkBaseSoundObject()
{
    class_< UAkBaseSoundObject, bases< UObject >  , boost::noncopyable>("UAkBaseSoundObject", no_init)
        .def("StaticClass", &UAkBaseSoundObject::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}