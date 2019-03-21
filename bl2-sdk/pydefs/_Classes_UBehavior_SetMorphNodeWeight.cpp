#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetMorphNodeWeight()
{
    class_< UBehavior_SetMorphNodeWeight, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetMorphNodeWeight", no_init)
        .def_readwrite("MorphNodeName", &UBehavior_SetMorphNodeWeight::MorphNodeName)
        .def_readwrite("WeightTarget", &UBehavior_SetMorphNodeWeight::WeightTarget)
        .def_readwrite("WeightBlendTime", &UBehavior_SetMorphNodeWeight::WeightBlendTime)
        .def("StaticClass", &UBehavior_SetMorphNodeWeight::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetMorphNodeWeight::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}