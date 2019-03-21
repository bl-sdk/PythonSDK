#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPostProcessChainOptions()
{
    class_< FPostProcessChainOptions >("FPostProcessChainOptions", no_init)
        .def_readwrite("MaterialEffectModifiers", &FPostProcessChainOptions::MaterialEffectModifiers)
        .def_readwrite("DOFEffectModifier", &FPostProcessChainOptions::DOFEffectModifier)
  ;
}