#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeBlend()
{
    class_< UAnimNodeBlend, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UAnimNodeBlend", no_init)
        .def_readwrite("Child2Weight", &UAnimNodeBlend::Child2Weight)
        .def_readwrite("Child2WeightTarget", &UAnimNodeBlend::Child2WeightTarget)
        .def_readwrite("BlendTimeToGo", &UAnimNodeBlend::BlendTimeToGo)
        .def("StaticClass", &UAnimNodeBlend::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetBlendTarget", &UAnimNodeBlend::SetBlendTarget)
        .staticmethod("StaticClass")
  ;
}