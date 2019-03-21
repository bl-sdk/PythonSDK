#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGammaScreenGFxDefinition()
{
    class_< UGammaScreenGFxDefinition, bases< UWillowGFxMovie3DDefinition >  , boost::noncopyable>("UGammaScreenGFxDefinition", no_init)
        .def_readwrite("Parameters", &UGammaScreenGFxDefinition::Parameters)
        .def("StaticClass", &UGammaScreenGFxDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}