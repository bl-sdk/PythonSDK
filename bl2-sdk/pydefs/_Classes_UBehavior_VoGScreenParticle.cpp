#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_VoGScreenParticle()
{
    class_< UBehavior_VoGScreenParticle, bases< UBehavior_ScreenParticle >  , boost::noncopyable>("UBehavior_VoGScreenParticle", no_init)
        .def_readwrite("TextureMovieParamName", &UBehavior_VoGScreenParticle::TextureMovieParamName)
        .def("StaticClass", &UBehavior_VoGScreenParticle::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_VoGScreenParticle::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}