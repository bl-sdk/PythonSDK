#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeAdditiveBlending()
{
    class_< UAnimNodeAdditiveBlending, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UAnimNodeAdditiveBlending", no_init)
        .def_readwrite("Child2Weight", &UAnimNodeBlend::Child2Weight)
        .def_readwrite("Child2WeightTarget", &UAnimNodeBlend::Child2WeightTarget)
        .def_readwrite("BlendTimeToGo", &UAnimNodeBlend::BlendTimeToGo)
        .def("StaticClass", &UAnimNodeAdditiveBlending::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetBlendTarget", &UAnimNodeAdditiveBlending::SetBlendTarget)
        .staticmethod("StaticClass")
  ;
}