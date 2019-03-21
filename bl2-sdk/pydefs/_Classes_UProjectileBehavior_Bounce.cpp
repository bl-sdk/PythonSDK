#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_Bounce()
{
    class_< UProjectileBehavior_Bounce, bases< UProjectileBehaviorBase >  , boost::noncopyable>("UProjectileBehavior_Bounce", no_init)
        .def_readwrite("BounceAkEvent", &UProjectileBehavior_Bounce::BounceAkEvent)
        .def_readwrite("ElasticityScaleFormula", &UProjectileBehavior_Bounce::ElasticityScaleFormula)
        .def_readwrite("HitNormal", &UProjectileBehavior_Bounce::HitNormal)
        .def_readwrite("ElasticityScale", &UProjectileBehavior_Bounce::ElasticityScale)
        .def("StaticClass", &UProjectileBehavior_Bounce::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UProjectileBehavior_Bounce::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}