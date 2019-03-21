#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimObject()
{
    class_< UAnimObject, bases< UObject >  , boost::noncopyable>("UAnimObject", no_init)
        .def_readwrite("SkelComponent", &UAnimObject::SkelComponent)
        .def("StaticClass", &UAnimObject::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}