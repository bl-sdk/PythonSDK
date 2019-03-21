#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAkObject()
{
    class_< UAkObject, bases< UObject >  , boost::noncopyable>("UAkObject", no_init)
        .def_readwrite("ShortId", &UAkObject::ShortId)
        .def("StaticClass", &UAkObject::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}