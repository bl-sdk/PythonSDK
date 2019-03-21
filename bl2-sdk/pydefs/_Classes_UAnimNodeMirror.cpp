#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeMirror()
{
    class_< UAnimNodeMirror, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UAnimNodeMirror", no_init)
        .def("StaticClass", &UAnimNodeMirror::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}