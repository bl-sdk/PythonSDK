#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPostProcessChain()
{
    class_< UPostProcessChain, bases< UObject >  , boost::noncopyable>("UPostProcessChain", no_init)
        .def_readwrite("Effects", &UPostProcessChain::Effects)
        .def("StaticClass", &UPostProcessChain::StaticClass, return_value_policy< reference_existing_object >())
        .def("FindPostProcessEffect", &UPostProcessChain::FindPostProcessEffect, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}