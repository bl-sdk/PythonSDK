#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendByPosture()
{
    class_< UAnimNodeBlendByPosture, bases< UAnimNodeBlendList >  , boost::noncopyable>("UAnimNodeBlendByPosture", no_init)
        .def("StaticClass", &UAnimNodeBlendByPosture::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}