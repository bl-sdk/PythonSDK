#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_PostProcessChain()
{
    class_< UBehavior_PostProcessChain, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_PostProcessChain", no_init)
        .def_readwrite("MaterialEffectModifiers", &UBehavior_PostProcessChain::MaterialEffectModifiers)
        .def_readwrite("Action", &UBehavior_PostProcessChain::Action)
        .def_readwrite("Chain", &UBehavior_PostProcessChain::Chain)
        .def_readwrite("DOFEffectModifier", &UBehavior_PostProcessChain::DOFEffectModifier)
        .def("StaticClass", &UBehavior_PostProcessChain::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_PostProcessChain::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}